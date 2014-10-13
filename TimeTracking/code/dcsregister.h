#ifndef DCSREGISTER_H
#define DCSREGISTER_H

#include <QWidget>
#include "ui_dcsregister.h"

class dcsRegister : public QWidget
{
	Q_OBJECT

public:
	dcsRegister(QWidget *parent = 0);
	~dcsRegister();

private:
	Ui::dcsRegister ui;
};

#endif // DCSREGISTER_H
