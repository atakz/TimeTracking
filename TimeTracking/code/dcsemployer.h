#ifndef DCSEMPLOYER_H
#define DCSEMPLOYER_H

#include <QDialog>
#include "ui_dcsemployer.h"

class dcsEmployer : public QDialog
{
	Q_OBJECT

public:
	dcsEmployer(int code = 0, QWidget *parent = 0);
	~dcsEmployer();

protected slots:
	void on_pbOk_clicked();
	void on_pbCancel_clicked();

private:
	Ui::dcsEmployer ui;
	int mCode;
	QString mach;
};

#endif // DCSEMPLOYER_H
