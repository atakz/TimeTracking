#ifndef DCSCUSTOMER_H
#define DCSCUSTOMER_H

#include <QDialog>
#include "ui_dcscustomer.h"

class dcsCustomer : public QDialog
{
	Q_OBJECT

public:
	dcsCustomer(int code = 0, QWidget *parent = 0);
	~dcsCustomer();

protected slots:
	void on_pbOk_clicked();
	void on_pnCancel_clicked();

private:
	Ui::dcsCustomer ui;
	int mCode;
	QString mach;
};

#endif // DCSCUSTOMER_H
