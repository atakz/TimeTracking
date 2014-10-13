#ifndef DCSEMPLOYER_H
#define DCSEMPLOYER_H

#include <QDialog>
#include "ui_dcsemployer.h"

class dcsEmployer : public QDialog
{
	Q_OBJECT

public:
	dcsEmployer(QWidget *parent = 0);
	~dcsEmployer();

private:
	Ui::dcsEmployer ui;
};

#endif // DCSEMPLOYER_H
