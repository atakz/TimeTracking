#include "dcsregister.h"
#include <QSqlQuery>

dcsRegister::dcsRegister(int code, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	mCode = code;
	QSqlQuery query;
	query.exec("SELECT * FROM ref_employees ORDER BY id");
	int i = 0;
	ui.cmbEmployer->clear();
	while (query.next())
	{
		int p = query.value(0).toInt();
		m_emp[i] = p;
		mr_emp[p] = i;
		ui.cmbEmployer->addItem(query.value(1).toString());
		i++;
	}

	query.exec("SELECT * FROM ref_customers ORDER BY id");
	i = 0;
	ui.cmbCustomer->clear();
	while (query.next())
	{
		int p = query.value(0).toInt();
		m_cus[i] = p;
		mr_cus[p] = i;
		ui.cmbCustomer->addItem(query.value(1).toString());
		i++;
	}

	if (mCode!=0)
	{ 
		
		if (query.exec(QString("SELECT * FROM reg_main WHERE id = %0").arg(mCode)))
		{
			if (query.next())
			{
				int emp = query.value(1).toInt();
				int cus = query.value(2).toInt();
				ui.cmbEmployer->setCurrentIndex(mr_emp[emp]);
				ui.cmbCustomer->setCurrentIndex(mr_cus[cus]);
				ui.date->setDate(query.value(3).toDate());
				float tm = query.value(4).toFloat();
				ui.time->setTime(QTime(tm, 0));
				ui.leDescription->setText(query.value(5).toString());
				ui.leComment->setText(query.value(6).toString());
			}
		}
	}
	else
	{
		ui.date->setDate(QDate::currentDate());
		ui.time->setTime(QTime(1, 0));
	}
}

dcsRegister::~dcsRegister()
{

}

void dcsRegister::on_pbOk_clicked()
{
	QSqlQuery query;

	if (mCode != 0)
	{
		//query.exec("UPDATE reg_main SET ")
	}
	else
	{

	}

	accept();
}

void dcsRegister::on_pbCancel_clicked()
{
	reject();
}