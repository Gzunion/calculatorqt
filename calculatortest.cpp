#include "calculatortest.h"

CalculatorTest::CalculatorTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	if_finish = false;
	num_first = 0;
	num_second = 0;
	QObject::connect(ui.button_run, SIGNAL(clicked()), this, SLOT(PrintResult()));
	QObject::connect(ui.button_plus, SIGNAL(clicked()), this, SLOT(RunPlus()));
	QObject::connect(ui.button_less, SIGNAL(clicked()), this, SLOT(RunLess()));

	QObject::connect(ui.button_one, SIGNAL(clicked()), this, SLOT(AddOne()));
	QObject::connect(ui.button_two, SIGNAL(clicked()), this, SLOT(AddTwo()));
	QObject::connect(ui.button_three, SIGNAL(clicked()), this, SLOT(AddThree()));
	QObject::connect(ui.button_four, SIGNAL(clicked()), this, SLOT(AddFour()));
	QObject::connect(ui.button_five, SIGNAL(clicked()), this, SLOT(AddFive()));
	QObject::connect(ui.button_six, SIGNAL(clicked()), this, SLOT(AddSix()));
	QObject::connect(ui.button_seven, SIGNAL(clicked()), this, SLOT(AddSeven()));
	QObject::connect(ui.button_eight, SIGNAL(clicked()), this, SLOT(AddEight()));
	QObject::connect(ui.button_nine, SIGNAL(clicked()), this, SLOT(AddNine()));
	QObject::connect(ui.button_zero, SIGNAL(clicked()), this, SLOT(AddZero()));
}

CalculatorTest::~CalculatorTest()
{

}

void CalculatorTest::PrintResult()
{
	QString num = ui.text_result->toPlainText();
	num_second = num.toInt();
	if (if_plus)
		num_result = num_first + num_second;
	else 
		num_result = num_first - num_second;
	num_first = 0;
	num_second = 0;
	ui.text_result->setPlainText(QString::number(num_result));
	if_finish = true;
	num_result = 0;
}

void CalculatorTest::RunLess()
{
	QString num = ui.text_result->toPlainText();
	num_first = num.toInt();
	ui.text_result->clear();
	if_plus = false;
}

void CalculatorTest::RunPlus()
{
	QString num = ui.text_result->toPlainText();
	num_first = num.toInt();
	ui.text_result->clear();
	if_plus = true;
}

void CalculatorTest::AddOne()
{
	IfFinished();
	ui.text_result->insertPlainText("1");
}

void CalculatorTest::AddTwo()
{
	IfFinished();
	ui.text_result->insertPlainText("2");
}

void CalculatorTest::AddThree()
{
	IfFinished();
	ui.text_result->insertPlainText("3");
}

void CalculatorTest::AddFour()
{
	IfFinished();
	ui.text_result->insertPlainText("4");
}

void CalculatorTest::AddFive()
{
	IfFinished();
	ui.text_result->insertPlainText("5");
}

void CalculatorTest::AddSix()
{
	IfFinished();
	ui.text_result->insertPlainText("6");
}

void CalculatorTest::AddSeven()
{
	IfFinished();
	ui.text_result->insertPlainText("7");
}

void CalculatorTest::AddEight()
{
	IfFinished();
	ui.text_result->insertPlainText("8");
}

void CalculatorTest::AddNine()
{
	IfFinished();
	ui.text_result->insertPlainText("9");
}

void CalculatorTest::AddZero()
{
	IfFinished();
	ui.text_result->insertPlainText("0");
}

void CalculatorTest::IfFinished()
{
	if (if_finish)
		ui.text_result->clear();
	if_finish = false;
}