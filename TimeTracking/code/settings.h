#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "ui_settings.h"

class Settings : public QDialog
{
	Q_OBJECT

public:
	Settings(QWidget *parent = 0);
	~Settings();

protected slots:

void on_pbOk_clicked();
void on_pbCancel_clicked();


private:
	Ui::Settings ui;
};

#endif // SETTINGS_H
