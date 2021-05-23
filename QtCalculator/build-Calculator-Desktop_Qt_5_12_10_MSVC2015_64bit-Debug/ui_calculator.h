/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLabel *result_show;
    QPushButton *pushButtonAC;
    QPushButton *pushButton_PlusMin;
    QPushButton *pushButton_slesh;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_x;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equal;
    QLabel *result_show_2;
    QPushButton *pushButton_sec;
    QPushButton *pushButton_tg;
    QPushButton *pushButton_arctg;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_minut;
    QPushButton *pushButton_arcsin;
    QPushButton *pushButton_arccos;
    QPushButton *pushButton_grad;
    QPushButton *pushButton_backspace;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(358, 361);
        Calculator->setMaximumSize(QSize(358, 361));
        Calculator->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(22, 26, 35);\n"
"}"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result_show = new QLabel(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(10, 33, 341, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	color: rgb(158, 163, 182);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButtonAC = new QPushButton(centralwidget);
        pushButtonAC->setObjectName(QString::fromUtf8("pushButtonAC"));
        pushButtonAC->setGeometry(QRect(120, 63, 61, 61));
        pushButtonAC->setFont(font);
        pushButtonAC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_PlusMin = new QPushButton(centralwidget);
        pushButton_PlusMin->setObjectName(QString::fromUtf8("pushButton_PlusMin"));
        pushButton_PlusMin->setGeometry(QRect(179, 63, 61, 61));
        pushButton_PlusMin->setFont(font);
        pushButton_PlusMin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_slesh = new QPushButton(centralwidget);
        pushButton_slesh->setObjectName(QString::fromUtf8("pushButton_slesh"));
        pushButton_slesh->setGeometry(QRect(238, 63, 61, 61));
        pushButton_slesh->setFont(font);
        pushButton_slesh->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(120, 122, 61, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(238, 122, 61, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(296, 63, 61, 61));
        pushButton_x->setFont(font);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(179, 122, 61, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 181, 61, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(238, 181, 61, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(296, 122, 61, 61));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(179, 181, 61, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(120, 240, 61, 61));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(238, 240, 61, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(296, 181, 61, 61));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(179, 240, 61, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(120, 299, 120, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(238, 299, 61, 61));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(53, 58, 78);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #5f688c , stop:1 #7981a3);\n"
"}"));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(296, 239, 61, 122));
        pushButton_equal->setFont(font);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(83, 179, 105);\n"
"	color: white;\n"
"	border: 2px solid black;\n"
"}"));
        result_show_2 = new QLabel(centralwidget);
        result_show_2->setObjectName(QString::fromUtf8("result_show_2"));
        result_show_2->setGeometry(QRect(10, 3, 341, 30));
        result_show_2->setFont(font);
        result_show_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	color: rgb(158, 163, 182);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_sec = new QPushButton(centralwidget);
        pushButton_sec->setObjectName(QString::fromUtf8("pushButton_sec"));
        pushButton_sec->setGeometry(QRect(60, 122, 61, 61));
        pushButton_sec->setFont(font);
        pushButton_sec->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_tg = new QPushButton(centralwidget);
        pushButton_tg->setObjectName(QString::fromUtf8("pushButton_tg"));
        pushButton_tg->setGeometry(QRect(0, 299, 61, 61));
        pushButton_tg->setFont(font);
        pushButton_tg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_arctg = new QPushButton(centralwidget);
        pushButton_arctg->setObjectName(QString::fromUtf8("pushButton_arctg"));
        pushButton_arctg->setGeometry(QRect(60, 299, 61, 61));
        pushButton_arctg->setFont(font);
        pushButton_arctg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(0, 240, 61, 61));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(0, 181, 61, 61));
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_minut = new QPushButton(centralwidget);
        pushButton_minut->setObjectName(QString::fromUtf8("pushButton_minut"));
        pushButton_minut->setGeometry(QRect(0, 122, 61, 61));
        pushButton_minut->setFont(font);
        pushButton_minut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_arcsin = new QPushButton(centralwidget);
        pushButton_arcsin->setObjectName(QString::fromUtf8("pushButton_arcsin"));
        pushButton_arcsin->setGeometry(QRect(60, 181, 61, 61));
        pushButton_arcsin->setFont(font);
        pushButton_arcsin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_arccos = new QPushButton(centralwidget);
        pushButton_arccos->setObjectName(QString::fromUtf8("pushButton_arccos"));
        pushButton_arccos->setGeometry(QRect(60, 240, 61, 61));
        pushButton_arccos->setFont(font);
        pushButton_arccos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_grad = new QPushButton(centralwidget);
        pushButton_grad->setObjectName(QString::fromUtf8("pushButton_grad"));
        pushButton_grad->setGeometry(QRect(0, 63, 61, 61));
        pushButton_grad->setFont(font);
        pushButton_grad->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        pushButton_backspace = new QPushButton(centralwidget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        pushButton_backspace->setGeometry(QRect(60, 63, 61, 61));
        pushButton_backspace->setFont(font);
        pushButton_backspace->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(40, 46, 60);\n"
"	color: rgb(158, 163, 182);\n"
"	border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #3e475c , stop:1 #677699);\n"
"}"));
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        result_show->setText(QApplication::translate("Calculator", "0", nullptr));
        pushButtonAC->setText(QApplication::translate("Calculator", "AC", nullptr));
        pushButton_PlusMin->setText(QApplication::translate("Calculator", "+/-", nullptr));
        pushButton_slesh->setText(QApplication::translate("Calculator", "/", nullptr));
        pushButton_7->setText(QApplication::translate("Calculator", "7", nullptr));
        pushButton_9->setText(QApplication::translate("Calculator", "9", nullptr));
        pushButton_x->setText(QApplication::translate("Calculator", "x", nullptr));
        pushButton_8->setText(QApplication::translate("Calculator", "8", nullptr));
        pushButton_4->setText(QApplication::translate("Calculator", "4", nullptr));
        pushButton_6->setText(QApplication::translate("Calculator", "6", nullptr));
        pushButton_plus->setText(QApplication::translate("Calculator", "+", nullptr));
        pushButton_5->setText(QApplication::translate("Calculator", "5", nullptr));
        pushButton_1->setText(QApplication::translate("Calculator", "1", nullptr));
        pushButton_3->setText(QApplication::translate("Calculator", "3", nullptr));
        pushButton_minus->setText(QApplication::translate("Calculator", "-", nullptr));
        pushButton_2->setText(QApplication::translate("Calculator", "2", nullptr));
        pushButton_0->setText(QApplication::translate("Calculator", "0", nullptr));
        pushButton_dot->setText(QApplication::translate("Calculator", ".", nullptr));
        pushButton_equal->setText(QApplication::translate("Calculator", "=", nullptr));
        result_show_2->setText(QString());
        pushButton_sec->setText(QApplication::translate("Calculator", "\"", nullptr));
        pushButton_tg->setText(QApplication::translate("Calculator", "tg", nullptr));
        pushButton_arctg->setText(QApplication::translate("Calculator", "arctg", nullptr));
        pushButton_cos->setText(QApplication::translate("Calculator", "cos", nullptr));
        pushButton_sin->setText(QApplication::translate("Calculator", "sin", nullptr));
        pushButton_minut->setText(QApplication::translate("Calculator", "'", nullptr));
        pushButton_arcsin->setText(QApplication::translate("Calculator", "arcsin", nullptr));
        pushButton_arccos->setText(QApplication::translate("Calculator", "arccos", nullptr));
        pushButton_grad->setText(QApplication::translate("Calculator", "degree", nullptr));
        pushButton_backspace->setText(QApplication::translate("Calculator", "BSpace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
