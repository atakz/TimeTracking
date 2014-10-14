#ifndef TIMETRACKING_H
#define TIMETRACKING_H

#include <QtWidgets/QMainWindow>
#include <QSqlRelationalTableModel>
#include "ui_timetracking.h"
#include "csdbconnection.h"

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
	void on_actionHelp_triggered();
	void on_actionAbout_triggered();
	void on_actionRegister_triggered();
	void on_actionNewItem_triggered();
	void on_actionEditItem_triggered();
	void on_actionDeleteItem_triggered();
	void on_pbFilter_toggled(bool);

	void on_de_begin_dateChanged(const QDate&);
	void on_de_end_dateChanged(const QDate&);

	void on_cmb_empoyer_currentIndexChanged(int);
	void on_cmb_customer_currentIndexChanged(int);

	void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected);

private:
	Ui::TimeTrackingClass ui;
	csDBConnection dbc;

	QSqlRelationalTableModel *model;
	QItemSelectionModel* selModel;
	int currentMode;

	QMap<int, int> pr_emp;
	QMap<int, int> ob_emp;
	QMap<int, int> pr_cus;
	QMap<int, int> ob_cus;

	void setFilter(bool p);
	void updateStatus();

};

#endif // TIMETRACKING_H
