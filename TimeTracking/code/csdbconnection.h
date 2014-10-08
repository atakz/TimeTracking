#ifndef CSDBCONNECTION_H
#define CSDBCONNECTION_H

#include <QObject>
#include <QSqlDatabase>

class csDBConnection : public QObject
{
	Q_OBJECT

public:
	csDBConnection(QObject *parent = 0);
	~csDBConnection();

	void connect();

private:
	QSqlDatabase database;
	
};

#endif // CSDBCONNECTION_H
