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

private:
	Ui::TimeTrackingClass ui;
};

#endif // TIMETRACKING_H
