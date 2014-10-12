#ifndef CSDBCONNECTION_H
#define CSDBCONNECTION_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class csDBConnection : public QObject
{
	Q_OBJECT

public:
	csDBConnection(QObject *parent = 0);
	~csDBConnection();

	void connect();

private:
	QSqlDatabase database;

	void test_and_create();
	
};

#endif // CSDBCONNECTION_H
