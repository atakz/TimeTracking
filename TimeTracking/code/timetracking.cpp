#include "timetracking.h"
#include "settings.h"
#include "dcsemployer.h"
#include "dcscustomer.h"
#include "dcsregister.h"

#include <QSqlRelationalDelegate>
#include <QDebug>
#include <QMessageBox>

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
	QMessageBox::about(this,QObject::tr("Time Tracking"),QObject::tr("LGPL\nauthor A.Kuangaliyev\nrepo https://github.com/atakz/TimeTracking"));
}

void TimeTracking::on_actionRegister_triggered()
{
	model->setTable("reg_main");

	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->setRelation(1, QSqlRelation("ref_employees", "id", "name"));
	model->setRelation(2, QSqlRelation("ref_customers", "id", "name"));

	model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
	model->setHeaderData(1, Qt::Horizontal, QObject::tr("Employer"));
	model->setHeaderData(2, Qt::Horizontal, QObject::tr("Customer"));
	model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
	model->setHeaderData(4, Qt::Horizontal, QObject::tr("Time"));
	model->setHeaderData(5, Qt::Horizontal, QObject::tr("Description"));
	model->setHeaderData(6, Qt::Horizontal, QObject::tr("Comment"));

	model->setSort(3,Qt::AscendingOrder);

	if (!model->select())
	{

	}
	else
	{
		qDebug() << "ok";
	}

	QSqlQuery query;
	if (query.exec("SELECT id,name FROM ref_employees"))
	{
		int last = ui.cmb_empoyer->currentIndex();
		ui.cmb_empoyer->clear();
		pr_emp.clear();
		ob_emp.clear();
		int i = 0;
		while (query.next())
		{
			int p = query.value(0).toInt();
			pr_emp[i] = p;
			ob_emp[p] = i;
			ui.cmb_empoyer->addItem(query.value(1).toString());
			i++;
		}
		ui.cmb_empoyer->setCurrentIndex(last);
	}
	if (query.exec("SELECT id,name FROM ref_customers"))
	{
		int last = ui.cmb_customer->currentIndex();
		ui.cmb_customer->clear();
		pr_cus.clear();
		ob_cus.clear();
		int i = 0;
		while (query.next())
		{
			int p = query.value(0).toInt();
			pr_cus[i] = p;
			ob_cus[p] = i;
			ui.cmb_customer->addItem(query.value(1).toString());
			i++;
		}
		ui.cmb_customer->setCurrentIndex(last);
	}
	
	ui.gbFilter->show();
	setFilter(ui.pbFilter->isChecked());
	ui.actionDeleteItem->setEnabled(false);
	ui.actionEditItem->setEnabled(false);
	updateStatus();
	currentMode = 0;
}

void TimeTracking::on_actionNewItem_triggered()
{
	switch (currentMode)
	{
	case 0: // reg
	{
		dcsRegister *reg = new dcsRegister();
		if (reg->exec() == QDialog::Accepted)
		{
			model->select();
			ui.actionDeleteItem->setEnabled(false);
			ui.actionEditItem->setEnabled(false);
			updateStatus();
		}
		delete reg;
	}
		break;
	case 1: // emp
	{
		dcsEmployer *emp = new dcsEmployer();
		if (emp->exec()==QDialog::Accepted){
			model->select();
			ui.actionDeleteItem->setEnabled(false);
			ui.actionEditItem->setEnabled(false);
		}
		delete emp;
	}
		break;
	case 2: // cus
	{
		dcsCustomer *emp = new dcsCustomer();
		if (emp->exec() == QDialog::Accepted){
			model->select();
			ui.actionDeleteItem->setEnabled(false);
			ui.actionEditItem->setEnabled(false);
		}
		delete emp;
	}
		break;
	default:
		break;
	}
}

void TimeTracking::on_actionEditItem_triggered()
{
	QModelIndex ind = ui.tv->currentIndex();
	ind = ind.sibling(ind.row(), 0);
	int p = ind.data().toInt();
	switch (currentMode)
	{
	case 0: // reg
	{
		dcsRegister *reg = new dcsRegister(p);
		if (reg->exec() == QDialog::Accepted)
		{
			model->select();
			ui.actionDeleteItem->setEnabled(false);
			ui.actionEditItem->setEnabled(false);
			updateStatus();
		}
		delete reg;
	}
		break;
	case 1: // emp
	{
		dcsEmployer *emp = new dcsEmployer(p);
		if (emp->exec() == QDialog::Accepted){
			model->select();
			ui.actionDeleteItem->setEnabled(false);
			ui.actionEditItem->setEnabled(false);
		}
		delete emp;
	}
		break;
	case 2: // cus
	{
		dcsCustomer *emp = new dcsCustomer(p);
		if (emp->exec() == QDialog::Accepted){
			model->select();
			ui.actionDeleteItem->setEnabled(false);
			ui.actionEditItem->setEnabled(false);
		}
		delete emp;
	}
		break;
	default:
		break;
	}
}

void TimeTracking::on_actionDeleteItem_triggered()
{
	QModelIndex ind = ui.tv->currentIndex();
	ind = ind.sibling(ind.row(), 0);
	int p = ind.data().toInt();

	if (QMessageBox::question(this, QObject::tr("Delete"), QObject::tr("Are you sure you want to delete object?")) == QMessageBox::Yes)
	{
		QSqlQuery query;
		switch (currentMode)
		{
		case 0: // reg
			query.exec(QString("DELETE FROM reg_main WHERE id = %0").arg(p));
			break;
		case 1: // emp
			query.exec(QString("DELETE FROM ref_employees WHERE id = %0").arg(p));
			break;
		case 2: // cus
			query.exec(QString("DELETE FROM ref_customers WHERE id = %0").arg(p));
			break;
		default:
			break;
		}
		model->select();
	}
}

void TimeTracking::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
{
	ui.actionDeleteItem->setEnabled(true);
	ui.actionEditItem->setEnabled(true);
}

void TimeTracking::on_pbFilter_toggled(bool p)
{
	setFilter(p);
}

void TimeTracking::setFilter(bool p)
{
	QString str;
	
	if (p)
	{
		if (ui.cmb_empoyer->currentIndex() != -1)
		{
			if (!str.isEmpty()) str += " and ";
			str += QString(" employer = %0 ").arg(pr_emp[ui.cmb_empoyer->currentIndex()]);
		}
		if (ui.cmb_customer->currentIndex() != -1)
		{
			if (!str.isEmpty())str += " and ";
			str += QString(" customer = %0 ").arg(pr_cus[ui.cmb_customer->currentIndex()]);
		}
		if (!str.isEmpty())str += " and ";
		str += QString(" m_date >= \'%0\' and m_date <= \'%1\' ").arg(ui.de_begin->date().toString("yyyy-MM-dd")).arg(ui.de_end->date().toString("yyyy-MM-dd"));
	}
	model->setFilter( str );
	updateStatus();

}

void TimeTracking::updateStatus()
{
	QString str0 = "SELECT SUM(m_time) FROM reg_main";
	
	if (ui.pbFilter->isChecked())
	{
		QString str;
		if (ui.cmb_empoyer->currentIndex() != -1)
		{
			if (!str.isEmpty()) str += " and ";
			str += QString(" employer = %0 ").arg(pr_emp[ui.cmb_empoyer->currentIndex()]);
		}
		if (ui.cmb_customer->currentIndex() != -1)
		{
			if (!str.isEmpty())str += " and ";
			str += QString(" customer = %0 ").arg(pr_cus[ui.cmb_customer->currentIndex()]);
		}
		if (!str.isEmpty())str += " and ";
		str += QString(" m_date >= \'%0\' and m_date <= \'%1\' ").arg(ui.de_begin->date().toString("yyyy-MM-dd")).arg(ui.de_end->date().toString("yyyy-MM-dd"));
		str0 += " WHERE " + str;
	}
	
	QSqlQuery query(str0);
	if (query.next())
	{
		ui.statusBar->showMessage(QObject::tr("time = " ) + query.value(0).toString());
	}
}

void TimeTracking::on_de_begin_dateChanged(const QDate&)
{
	setFilter(ui.pbFilter->isChecked());
}

void TimeTracking::on_de_end_dateChanged(const QDate&)
{
	setFilter(ui.pbFilter->isChecked());
}

void TimeTracking::on_cmb_empoyer_currentIndexChanged(int)
{
	setFilter(ui.pbFilter->isChecked());
}

void TimeTracking::on_cmb_customer_currentIndexChanged(int)
{
	setFilter(ui.pbFilter->isChecked());
}