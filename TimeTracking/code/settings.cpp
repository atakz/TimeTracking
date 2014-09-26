#include "settings.h"
#include <QSqlDatabase>
#include <QSettings>

Settings::Settings(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QStringList list = QSqlDatabase::drivers();
	ui.cmbTypeConnection->addItems(list);

	QSettings set("settings.ini", QSettings::IniFormat, this);
	set.beginGroup("DBConnection");
	ui.cmbTypeConnection->setCurrentText(set.value("TypeConnection").toString());
	ui.leHostName->setText(set.value("HostName").toString());
	ui.leDatabaseName->setText(set.value("DatabaseName").toString());
	ui.leUserName->setText(set.value("UserName").toString());
	set.endGroup();

}

Settings::~Settings()
{

}

void Settings::on_pbOk_clicked()
{
	accept();
}

void Settings::on_pbCancel_clicked()
{
	reject();
}