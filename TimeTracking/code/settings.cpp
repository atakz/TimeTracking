#include "settings.h"
#include <QSqlDatabase>
#include <QSettings>
#include <QUuid>

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
	ui.cbSaveUP->setChecked(set.value("SavePassword").toBool());
	if (set.value("SavePassword").toBool() == true)
	{	
		QByteArray arr = set.value("Password").toByteArray();
		if (arr.count() > 0)
		{
			arr = qUncompress(arr);
			QString str;
			QDataStream stream(&arr, QIODevice::ReadOnly);
			stream >> str;
			ui.lePassword->setText(str);
		}
	}
	ui.leNumber->setText(set.value("ID").toString());
	set.endGroup();

}

Settings::~Settings()
{

}

void Settings::on_pbOk_clicked()
{
	QSettings set("settings.ini", QSettings::IniFormat, this);
	set.beginGroup("DBConnection");
	set.setValue("TypeConnection", ui.cmbTypeConnection->currentText());
	set.setValue("HostName", ui.leHostName->text());
	set.setValue("DatabaseName", ui.leDatabaseName->text());
	set.setValue("UserName", ui.leUserName->text());
	set.setValue("SavePassword", ui.cbSaveUP->isChecked());
	if (ui.cbSaveUP->isChecked())
	{
		QByteArray arr;
		QDataStream stream(&arr, QIODevice::WriteOnly);
		stream << ui.lePassword->text();
		arr = qCompress(arr);
		set.setValue("Password", arr);
	}
	set.setValue("ID",ui.leNumber->text());
	set.endGroup();
	accept();
}

void Settings::on_pbCancel_clicked()
{
	reject();
}

void Settings::on_pbGenID_clicked()
{
	ui.leNumber->setText(QUuid::createUuid().toString().replace("{","").replace("}",""));
}
