#include "PlaneWar.h"
#include <QtWidgets/QApplication>
#include "config.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);

	PlaneWar w;
	w.show();

	return a.exec();
}
