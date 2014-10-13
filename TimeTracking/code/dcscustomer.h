#ifndef DCSCUSTOMER_H
#define DCSCUSTOMER_H

#include <QDialog>
#include "ui_dcscustomer.h"

class dcsCustomer : public QDialog
{
	Q_OBJECT

public:
	dcsCustomer(QWidget *parent = 0);
	~dcsCustomer();

private:
	Ui::dcsCustomer ui;
};

#endif // DCSCUSTOMER_H
