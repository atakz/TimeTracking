#include "dcsemployer.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSettings>

dcsEmployer::dcsEmployer(int code, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	mCode = code;
	if (mCode != 0)
	{
		QSqlQuery query(QString("SELECT name FROM ref_employees WHERE id = %0").arg(mCode));
		if (query.exec())
		{
			if (query.next())
			{
				ui.leName->setText( query.value(0).toString());
			}
		}
	}
	QSettings set("settings.ini", QSettings::IniFormat, this);
	set.beginGroup("DBConnection");
	mach = set.value("ID").toString();
	set.endGroup();
}

dcsEmployer::~dcsEmployer()
{

}

void dcsEmployer::on_pbOk_clicked()
{
	if ((mCode == 0)&&(!ui.leName->text().isEmpty()))
	{
		QSqlQuery query;
		if (query.exec(QString("INSERT INTO ref_employees (name,mach) VALUES(\'%0\',\'%1\')").arg(ui.leName->text()).arg(mach)))
		{
			qDebug() << "inserted";
		}
	}
	else if ((mCode != 0) && (!ui.leName->text().isEmpty()))
	{
		QSqlQuery query;
		if (query.exec(QString("UPDATE ref_employees SET name=\'%0\' WHERE id=%1").arg(ui.leName->text()).arg(mCode)))
		{
			qDebug() << "udapted";
		}
	}
	accept();
}

void dcsEmployer::on_pbCancel_clicked()
{
	reject();
}

