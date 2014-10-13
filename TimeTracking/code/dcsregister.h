#ifndef DCSREGISTER_H
#define DCSREGISTER_H

#include <QDialog>
#include "ui_dcsregister.h"

class dcsRegister : public QDialog
{
	Q_OBJECT

public:
	dcsRegister(int code = 0, QWidget *parent = 0);
	~dcsRegister();

protected slots:
	void on_pbOk_clicked();
	void on_pbCancel_clicked();

private:
	Ui::dcsRegister ui;
	int mCode;
	QMap<int, int> m_emp, mr_emp;
	QMap<int, int> m_cus, mr_cus;
};

#endif // DCSREGISTER_H
