#include "Carte.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Carte w;
	w.show();
	return a.exec();
}
