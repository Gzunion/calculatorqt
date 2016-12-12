/********************************************************************************
** Form generated from reading UI file 'calculatortest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORTEST_H
#define UI_CALCULATORTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorTestClass
{
public:
    QWidget *centralWidget;
    QPushButton *button_run;
    QPlainTextEdit *text_result;
    QPushButton *button_one;
    QPushButton *button_two;
    QPushButton *button_three;
    QPushButton *button_four;
    QPushButton *button_five;
    QPushButton *button_six;
    QPushButton *button_seven;
    QPushButton *button_eight;
    QPushButton *button_nine;
    QPushButton *button_zero;
    QPushButton *button_plus;
    QPushButton *button_less;

    void setupUi(QMainWindow *CalculatorTestClass)
    {
        if (CalculatorTestClass->objectName().isEmpty())
            CalculatorTestClass->setObjectName(QStringLiteral("CalculatorTestClass"));
        CalculatorTestClass->resize(530, 400);
        centralWidget = new QWidget(CalculatorTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_run = new QPushButton(centralWidget);
        button_run->setObjectName(QStringLiteral("button_run"));
        button_run->setGeometry(QRect(380, 310, 131, 50));
        button_run->setStyleSheet(QStringLiteral("font: 13pt \"Avenir LT 45 Book\";"));
        text_result = new QPlainTextEdit(centralWidget);
        text_result->setObjectName(QStringLiteral("text_result"));
        text_result->setGeometry(QRect(9, 20, 511, 80));
        text_result->setStyleSheet(QStringLiteral("font: 20pt \"Avenir LT 45 Book\";"));
        button_one = new QPushButton(centralWidget);
        button_one->setObjectName(QStringLiteral("button_one"));
        button_one->setGeometry(QRect(60, 140, 50, 50));
        button_one->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_two = new QPushButton(centralWidget);
        button_two->setObjectName(QStringLiteral("button_two"));
        button_two->setGeometry(QRect(170, 140, 50, 50));
        button_two->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_three = new QPushButton(centralWidget);
        button_three->setObjectName(QStringLiteral("button_three"));
        button_three->setGeometry(QRect(270, 140, 50, 50));
        button_three->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_four = new QPushButton(centralWidget);
        button_four->setObjectName(QStringLiteral("button_four"));
        button_four->setGeometry(QRect(60, 220, 50, 50));
        button_four->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_five = new QPushButton(centralWidget);
        button_five->setObjectName(QStringLiteral("button_five"));
        button_five->setGeometry(QRect(170, 220, 50, 50));
        button_five->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_six = new QPushButton(centralWidget);
        button_six->setObjectName(QStringLiteral("button_six"));
        button_six->setGeometry(QRect(270, 220, 50, 50));
        button_six->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_seven = new QPushButton(centralWidget);
        button_seven->setObjectName(QStringLiteral("button_seven"));
        button_seven->setGeometry(QRect(60, 310, 50, 50));
        button_seven->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_eight = new QPushButton(centralWidget);
        button_eight->setObjectName(QStringLiteral("button_eight"));
        button_eight->setGeometry(QRect(170, 310, 50, 50));
        button_eight->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_nine = new QPushButton(centralWidget);
        button_nine->setObjectName(QStringLiteral("button_nine"));
        button_nine->setGeometry(QRect(270, 310, 50, 50));
        button_nine->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_zero = new QPushButton(centralWidget);
        button_zero->setObjectName(QStringLiteral("button_zero"));
        button_zero->setGeometry(QRect(380, 140, 131, 50));
        button_zero->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_plus = new QPushButton(centralWidget);
        button_plus->setObjectName(QStringLiteral("button_plus"));
        button_plus->setGeometry(QRect(380, 220, 50, 50));
        button_plus->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        button_less = new QPushButton(centralWidget);
        button_less->setObjectName(QStringLiteral("button_less"));
        button_less->setGeometry(QRect(460, 220, 50, 50));
        button_less->setStyleSheet(QStringLiteral("font: 15pt \"Avenir LT 45 Book\";"));
        CalculatorTestClass->setCentralWidget(centralWidget);

        retranslateUi(CalculatorTestClass);

        QMetaObject::connectSlotsByName(CalculatorTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorTestClass)
    {
        CalculatorTestClass->setWindowTitle(QApplication::translate("CalculatorTestClass", "CalculatorTest", 0));
        button_run->setText(QApplication::translate("CalculatorTestClass", "\350\256\241\347\256\227", 0));
        button_one->setText(QApplication::translate("CalculatorTestClass", "1", 0));
        button_two->setText(QApplication::translate("CalculatorTestClass", "2", 0));
        button_three->setText(QApplication::translate("CalculatorTestClass", "3", 0));
        button_four->setText(QApplication::translate("CalculatorTestClass", "4", 0));
        button_five->setText(QApplication::translate("CalculatorTestClass", "5", 0));
        button_six->setText(QApplication::translate("CalculatorTestClass", "6", 0));
        button_seven->setText(QApplication::translate("CalculatorTestClass", "7", 0));
        button_eight->setText(QApplication::translate("CalculatorTestClass", "8", 0));
        button_nine->setText(QApplication::translate("CalculatorTestClass", "9", 0));
        button_zero->setText(QApplication::translate("CalculatorTestClass", "0", 0));
        button_plus->setText(QApplication::translate("CalculatorTestClass", "+", 0));
        button_less->setText(QApplication::translate("CalculatorTestClass", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class CalculatorTestClass: public Ui_CalculatorTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORTEST_H
