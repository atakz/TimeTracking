#include "timetracking.h"
#include "settings.h"

#include <QSqlRelationalDelegate>
#include <QDebug>

TimeTracking::TimeTracking(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	dbc.connect();
	ui.tv->setItemDelegate(new QSqlRelationalDelegate(ui.tv));
	//ui.tv->setModel(&model);
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
		dbc.connect();
		qWarning("accepted");
	}
	delete dlg;
}

void TimeTracking::on_actionRefEmployees_triggered()
{

	model.setTable("ref_employees");

	model.setEditStrategy(QSqlTableModel::OnManualSubmit);

	model.setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
	model.setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
	model.setHeaderData(2, Qt::Horizontal, QObject::tr("Machine"));

	bool ok = model.select();
	qDebug() << ok;
	ui.tv->setModel(&model);
	ui.tv->hide();
	ui.tv->show();
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


void TimeTracking::on_actionHelp_triggered()
{

}

void TimeTracking::on_actionAbout_triggered()
{

}
