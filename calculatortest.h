#ifndef CALCULATORTEST_H
#define CALCULATORTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_calculatortest.h"

class CalculatorTest : public QMainWindow
{
	Q_OBJECT

public:
	CalculatorTest(QWidget *parent = 0);
	~CalculatorTest();

private:
	Ui::CalculatorTestClass ui;
	int num_first;
	int num_second;
	int num_result;
	bool if_plus;
	bool if_finish;
	void IfFinished();
private slots:
	void PrintResult();
	void AddOne();
	void AddTwo();
	void AddThree();
	void AddFour();
	void AddFive();
	void AddSix();
	void AddSeven();
	void AddEight();
	void AddNine();
	void AddZero();
	void RunLess();
	void RunPlus();

};

#endif // CALCULATORTEST_H
