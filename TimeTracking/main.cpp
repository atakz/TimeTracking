#include "timetracking.h"
#include <QtWidgets/QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{

	QTranslator tr;
	tr.load("timetracking_ru.qm");

	QApplication a(argc, argv);
	a.installTranslator(&tr);
	TimeTracking w;
	w.show();
	return a.exec();
}
