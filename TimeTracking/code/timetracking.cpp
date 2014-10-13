#include "timetracking.h"
#include "settings.h"

#include <QSqlRelationalDelegate>
#include <QDebug>

TimeTracking::TimeTracking(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	dbc.connect();
	model = new QSqlRelationalTableModel(this);
	ui.tv->setModel(model);
	ui.mainToolBar->addAction(ui.actionNewItem);
	ui.mainToolBar->addAction(ui.actionEditItem);
	ui.mainToolBar->addAction(ui.actionDeleteItem);
	ui.mainToolBar->addSeparator();
	ui.mainToolBar->addAction(ui.actionRefEmployees);
	ui.mainToolBar->addAction(ui.actionRefCustomers);
	ui.mainToolBar->addAction(ui.actionRegister);
	ui.mainToolBar->addSeparator();
	ui.mainToolBar->addAction(ui.actionRepEmployees);
	ui.mainToolBar->addAction(ui.actionRepCustomers);
	ui.mainToolBar->addSeparator();
	ui.mainToolBar->addAction(ui.actionSettings);
	ui.mainToolBar->addSeparator();
	ui.mainToolBar->addAction(ui.actionAbout);
	ui.mainToolBar->addAction(ui.actionHelp);
	ui.mainToolBar->addSeparator();
	ui.mainToolBar->addAction(ui.actionExit);

	ui.de_begin->setDate(QDate::currentDate());
	ui.de_end->setDate(QDate::currentDate());

	selModel = ui.tv->selectionModel();

	connect(selModel, SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)), this, SLOT(selectionChanged(const QItemSelection &, const QItemSelection &)));

	on_actionRegister_triggered();
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
	model->setTable("ref_employees");

	model->setEditStrategy(QSqlTableModel::OnManualSubmit);

	model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
	model->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
	model->setHeaderData(2, Qt::Horizontal, QObject::tr("Machine"));

	if (!model->select())
	{

	}
	else
	{
		qDebug() << "ok";
	}
	ui.gbFilter->hide();

	ui.actionDeleteItem->setEnabled(false);
	ui.actionEditItem->setEnabled(false);

	currentMode = 1;
}

void TimeTracking::on_actionRepEmployees_triggered()
{
	
}

void TimeTracking::on_actionRefCustomers_triggered()
{
	model->setTable("ref_customers");

	model->setEditStrategy(QSqlTableModel::OnManualSubmit);

	model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
	model->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
	model->setHeaderData(2, Qt::Horizontal, QObject::tr("Machine"));

	if (!model->select())
	{

	}
	else
	{
		qDebug() << "ok";
	}
	ui.gbFilter->hide();

	ui.actionDeleteItem->setEnabled(false);
	ui.actionEditItem->setEnabled(false);

	currentMode = 2;
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

void TimeTracking::on_actionRegister_triggered()
{
	model->setTable("reg_main");

	model->setEditStrategy(QSqlTableModel::OnManualSubmit);

	model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
	model->setHeaderData(1, Qt::Horizontal, QObject::tr("Employer"));
	model->setHeaderData(2, Qt::Horizontal, QObject::tr("Customer"));
	model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
	model->setHeaderData(4, Qt::Horizontal, QObject::tr("Time"));
	model->setHeaderData(5, Qt::Horizontal, QObject::tr("Description"));
	model->setHeaderData(6, Qt::Horizontal, QObject::tr("Comment"));

	if (!model->select())
	{

	}
	else
	{
		qDebug() << "ok";
	}
	
	ui.gbFilter->show();
	ui.actionDeleteItem->setEnabled(false);
	ui.actionEditItem->setEnabled(false);

	currentMode = 0;
}

void TimeTracking::on_actionNewItem_triggered()
{

}

void TimeTracking::on_actionEditItem_triggered()
{

}

void TimeTracking::on_actionDeleteItem_trigerred()
{

}

void TimeTracking::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
{
	ui.actionDeleteItem->setEnabled(true);
	ui.actionEditItem->setEnabled(true);
}