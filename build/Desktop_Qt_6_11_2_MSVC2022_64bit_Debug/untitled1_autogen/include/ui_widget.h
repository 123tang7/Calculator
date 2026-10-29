/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *display;
    QPushButton *btnClear;
    QPushButton *btnPercent;
    QPushButton *btnBackspace;
    QPushButton *btnDiv;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnMul;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btnSub;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnAdd;
    QPushButton *btnSign;
    QPushButton *btn0;
    QPushButton *btnDot;
    QPushButton *btnEqual;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        Widget->setStyleSheet(QString::fromUtf8("/* 1. \346\225\264\344\275\223\350\203\214\346\231\257\357\274\232\346\267\261\350\211\262\357\274\210\347\261\273\344\274\274\346\211\213\346\234\272\347\232\204\346\267\261\350\211\262\346\250\241\345\274\217\357\274\211 */\n"
"QWidget {\n"
"    background-color: #171717; /* \346\267\261\351\273\221\347\201\260 */\n"
"}\n"
"\n"
"/* 2. \351\241\266\351\203\250\346\230\276\347\244\272\345\261\217\357\274\232\350\266\205\345\244\247\345\255\227\344\275\223\357\274\214\351\235\240\345\217\263\345\257\271\351\275\220\357\274\214\350\203\214\346\231\257\345\222\214\345\244\226\345\243\263\350\236\215\344\270\272\344\270\200\344\275\223 */\n"
"QLineEdit {\n"
"    background-color: #171717;\n"
"    border: none;            /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"    color: #ffffff;          /* \347\272\257\347\231\275\346\226\207\345\255\227 */\n"
"    font-size: 56px;         /* \350\266\205\345\244\247\345\255\227\344\275\223 */\n"
"    font-family: \"Segoe UI\", Arial;\n"
"    padding-right: 15"
                        "px;     /* \351\235\240\345\217\263\347\225\231\344\270\200\347\202\271\347\274\235\351\232\231 */\n"
"    padding-top: 20px;\n"
"}\n"
"\n"
"/* 3. \346\211\200\346\234\211\346\214\211\351\222\256\347\232\204\351\200\232\347\224\250\346\240\267\345\274\217\357\274\232\346\227\240\350\276\271\346\241\206\357\274\214\345\234\206\350\247\222\346\236\201\345\244\247\357\274\210\345\217\230\346\210\220\345\234\206\345\275\242\346\210\226\350\203\266\345\233\212\345\275\242\357\274\211 */\n"
"QPushButton {\n"
"    background-color: #2e2e2e; /* \346\267\261\347\201\260\345\272\225\350\211\262 */\n"
"    border: none;\n"
"    border-radius: 35px;       /* \350\277\231\344\270\252\346\225\260\345\200\274\350\266\205\350\277\207\346\214\211\351\222\256\351\253\230\345\272\246\344\270\200\345\215\212\345\260\261\344\274\232\345\217\230\346\210\220\345\256\214\347\276\216\347\232\204\345\234\206 */\n"
"    color: #ffffff;\n"
"    font-size: 28px;\n"
"    min-width: 70px;\n"
"    min-height: 70px;\n"
"}\n"
"\n"
"/* 4. \351\274"
                        "\240\346\240\207\346\202\254\345\201\234\345\222\214\346\214\211\344\270\213\345\217\215\351\246\210 */\n"
"QPushButton:hover { background-color: #3a3a3a; }\n"
"QPushButton:pressed { background-color: #4a4a4a; }\n"
"\n"
"/* ================= \347\211\271\346\256\212\346\214\211\351\222\256\345\256\232\345\210\266 ================= */\n"
"\n"
"/* \351\241\266\351\203\250\345\212\237\350\203\275\351\224\256 (C, CE, \351\200\200\346\240\274\347\255\211)\357\274\232\346\265\205\347\201\260\350\211\262 */\n"
"QPushButton#btnClear, \n"
"QPushButton#btnBackspace, \n"
"QPushButton#btnSign, \n"
"QPushButton#btnDot {\n"
"    background-color: #a5a5a5;\n"
"    color: #000000;\n"
"}\n"
"QPushButton#btnClear:hover, \n"
"QPushButton#btnBackspace:hover, \n"
"QPushButton#btnSign:hover, \n"
"QPushButton#btnDot:hover {\n"
"    background-color: #b8b8b8;\n"
"}\n"
"\n"
"/* \350\277\220\347\256\227\347\254\246 (+, -, *, /)\357\274\232\344\272\256\346\251\231\350\211\262 */\n"
"QPushButton#btnAdd, \n"
"QPushButton#btnSub, \n"
"QPus"
                        "hButton#btnMul, \n"
"QPushButton#btnDiv {\n"
"    background-color: #ff9f0a;\n"
"    color: #ffffff;\n"
"    font-size: 32px;\n"
"}\n"
"QPushButton#btnAdd:hover, \n"
"QPushButton#btnSub:hover, \n"
"QPushButton#btnMul:hover, \n"
"QPushButton#btnDiv:hover {\n"
"    background-color: #ffb340;\n"
"}\n"
"\n"
"/* \347\255\211\345\217\267\351\224\256\357\274\232\346\251\231\350\211\262 */\n"
"QPushButton#btnEqual {\n"
"    background-color: #ff9f0a;\n"
"    color: #ffffff;\n"
"    font-size: 32px;\n"
"}\n"
"QPushButton#btnEqual:hover { background-color: #ffb340; }"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        display = new QLineEdit(Widget);
        display->setObjectName("display");
        display->setReadOnly(true);

        gridLayout->addWidget(display, 0, 0, 1, 2);

        btnClear = new QPushButton(Widget);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 1, 0, 1, 1);

        btnPercent = new QPushButton(Widget);
        btnPercent->setObjectName("btnPercent");

        gridLayout->addWidget(btnPercent, 1, 1, 1, 1);

        btnBackspace = new QPushButton(Widget);
        btnBackspace->setObjectName("btnBackspace");

        gridLayout->addWidget(btnBackspace, 1, 2, 1, 1);

        btnDiv = new QPushButton(Widget);
        btnDiv->setObjectName("btnDiv");

        gridLayout->addWidget(btnDiv, 1, 3, 1, 1);

        btn7 = new QPushButton(Widget);
        btn7->setObjectName("btn7");

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn8 = new QPushButton(Widget);
        btn8->setObjectName("btn8");

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btn9 = new QPushButton(Widget);
        btn9->setObjectName("btn9");

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btnMul = new QPushButton(Widget);
        btnMul->setObjectName("btnMul");

        gridLayout->addWidget(btnMul, 2, 3, 1, 1);

        btn4 = new QPushButton(Widget);
        btn4->setObjectName("btn4");

        gridLayout->addWidget(btn4, 3, 0, 1, 1);

        btn5 = new QPushButton(Widget);
        btn5->setObjectName("btn5");

        gridLayout->addWidget(btn5, 3, 1, 1, 1);

        btn6 = new QPushButton(Widget);
        btn6->setObjectName("btn6");

        gridLayout->addWidget(btn6, 3, 2, 1, 1);

        btnSub = new QPushButton(Widget);
        btnSub->setObjectName("btnSub");

        gridLayout->addWidget(btnSub, 3, 3, 1, 1);

        btn1 = new QPushButton(Widget);
        btn1->setObjectName("btn1");

        gridLayout->addWidget(btn1, 4, 0, 1, 1);

        btn2 = new QPushButton(Widget);
        btn2->setObjectName("btn2");

        gridLayout->addWidget(btn2, 4, 1, 1, 1);

        btn3 = new QPushButton(Widget);
        btn3->setObjectName("btn3");

        gridLayout->addWidget(btn3, 4, 2, 1, 1);

        btnAdd = new QPushButton(Widget);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 4, 3, 1, 1);

        btnSign = new QPushButton(Widget);
        btnSign->setObjectName("btnSign");

        gridLayout->addWidget(btnSign, 5, 0, 1, 1);

        btn0 = new QPushButton(Widget);
        btn0->setObjectName("btn0");

        gridLayout->addWidget(btn0, 5, 1, 1, 1);

        btnDot = new QPushButton(Widget);
        btnDot->setObjectName("btnDot");

        gridLayout->addWidget(btnDot, 5, 2, 1, 1);

        btnEqual = new QPushButton(Widget);
        btnEqual->setObjectName("btnEqual");

        gridLayout->addWidget(btnEqual, 5, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        btnPercent->setText(QCoreApplication::translate("Widget", "%", nullptr));
        btnBackspace->setText(QCoreApplication::translate("Widget", "\351\200\200\346\240\274", nullptr));
        btnDiv->setText(QCoreApplication::translate("Widget", "/", nullptr));
        btn7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        btn8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        btn9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        btnMul->setText(QCoreApplication::translate("Widget", "*", nullptr));
        btn4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        btn5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        btn6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        btnSub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        btn1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        btn2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        btn3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        btnAdd->setText(QCoreApplication::translate("Widget", "+", nullptr));
        btnSign->setText(QCoreApplication::translate("Widget", "+/-", nullptr));
        btn0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        btnDot->setText(QCoreApplication::translate("Widget", ".", nullptr));
        btnEqual->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
