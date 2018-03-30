#include "MQSky.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MQSky w;
	w.show();
	return a.exec();
}
