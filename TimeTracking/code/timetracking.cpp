#include "timetracking.h"
#include "settings.h"

TimeTracking::TimeTracking(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

TimeTracking::~TimeTracking()
{

}

void TimeTracking::on_actionExit_triggered()
{
	close();
}

void TimeTracking::on_actionSettings_triggered()
{
	Settings * dlg = new Settings(this);
	if (dlg->exec() == QDialog::Accepted) 
	{
		qWarning("accepted");
	}
	delete dlg;
}

void TimeTracking::on_actionRefEmployees_triggered()
{

}

void TimeTracking::on_actionRepEmployees_triggered()
{

}

void TimeTracking::on_actionRefCustomers_triggered()
{

}

void TimeTracking::on_actionRepCustomers_triggered()
{

}

void TimeTracking::on_actionRegister_triggered()
{

}

void TimeTracking::on_actionHelp_triggered()
{

}

void TimeTracking::on_actionAbout_triggered()
{

}
