#include "calculatortest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CalculatorTest w;
	w.show();
	return a.exec();
}
