#ifndef TIMETRACKING_H
#define TIMETRACKING_H

#include <QtWidgets/QMainWindow>
#include "ui_timetracking.h"

class TimeTracking : public QMainWindow
{
	Q_OBJECT

public:
	TimeTracking(QWidget *parent = 0);
	~TimeTracking();

protected slots:
	void on_actionExit_triggered();
	void on_actionSettings_triggered();
	void on_actionRefEmployees_triggered();
	void on_actionRepEmployees_triggered();
	void on_actionRefCustomers_triggered();
	void on_actionRepCustomers_triggered();
	void on_actionRegister_triggered(); 
	void on_actionHelp_triggered();
	void on_actionAbout_triggered();

private:
	Ui::TimeTrackingClass ui;
};

#endif // TIMETRACKING_H
