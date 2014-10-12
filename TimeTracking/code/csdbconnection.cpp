#include "csdbconnection.h"
#include <QSettings>
#include <QDebug>


csDBConnection::csDBConnection(QObject *parent)
	: QObject(parent)
{
	
}

csDBConnection::~csDBConnection()
{
	
}

void csDBConnection::connect()
{

	if (database.isOpen())
	{
		database.close();
		QSqlDatabase::removeDatabase(database.connectionName());
	}

	QSettings set("settings.ini", QSettings::IniFormat, this);
	set.beginGroup("DBConnection");
	QString str_tc = set.value("TypeConnection").toString();
	QString str_dn = set.value("DatabaseName").toString();
	set.endGroup();

	database = QSqlDatabase::addDatabase( str_tc );
	database.setDatabaseName(str_dn);


	if (str_tc == "QSQLITE") 
	{
		
	}

	bool ok = database.open();
	if (!ok)
	{
		qWarning("error opening database");
	}
	else
	{
		test_and_create();
	}


}

void csDBConnection::test_and_create()
{
	int version = 0;
	QSqlQuery query;
	query.exec("SELECT * FROM m_version");
	while (query.next())
	{
		version = query.value(0).toInt();
		qDebug() << version;
	}
	if (version == 0) 
	{
		query.exec(
			"CREATE TABLE m_version ("
			" num INTEGER"
			");"
			);
		query.exec(
			"INSERT INTO m_version VALUES (1);"
			);
		query.exec(
			"CREATE TABLE ref_employees ("
			" id INTEGER PRIMARY KEY ASC, "
			" name TEXT, "
			" mach TEXT "
			");"
			);
		//query.exec("INSERT INTO ref_employees (name,mach) VALUES ( \'123\', \'321\')");
		query.exec(
			"CREATE TABLE ref_customers ("
			" id INTEGER PRIMARY KEY ASC, "
			" name TEXT, "
			" mach TEXT "
			");"
			);
		query.exec(
			"CREATE TABLE reg_main ("
			" employer INTEGER,"
			" customer INTEGER,"
			" m_date DATE,"
			" m_time REAL,"
			" m_desc TEXT,"
			" m_comm TEXT,"
			" FOREIGN KEY( employer ) REFERENCES ref_employees(id),"
			" FOREIGN KEY( customer ) REFERENCES ref_customers(id)"
			");"
			);
	}
	
}
