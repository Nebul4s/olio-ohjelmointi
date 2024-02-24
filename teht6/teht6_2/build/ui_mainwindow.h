/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn__1;
    QPushButton *btn__2;
    QPushButton *btn__3;
    QPushButton *btn__6;
    QPushButton *btn__4;
    QPushButton *btn__5;
    QPushButton *btn__8;
    QPushButton *btn__9;
    QPushButton *btn__7;
    QPushButton *btn__0;
    QPushButton *btn__clear;
    QPushButton *btn__enter;
    QPushButton *btn__add;
    QPushButton *btn__sub;
    QPushButton *btn__div;
    QPushButton *btn__mul;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit__num1;
    QLineEdit *lineEdit__num2;
    QLineEdit *lineEdit__result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(438, 272);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn__1 = new QPushButton(centralwidget);
        btn__1->setObjectName(QString::fromUtf8("btn__1"));
        btn__1->setGeometry(QRect(50, 100, 80, 24));
        btn__2 = new QPushButton(centralwidget);
        btn__2->setObjectName(QString::fromUtf8("btn__2"));
        btn__2->setGeometry(QRect(140, 100, 80, 24));
        btn__3 = new QPushButton(centralwidget);
        btn__3->setObjectName(QString::fromUtf8("btn__3"));
        btn__3->setGeometry(QRect(230, 100, 80, 24));
        btn__6 = new QPushButton(centralwidget);
        btn__6->setObjectName(QString::fromUtf8("btn__6"));
        btn__6->setGeometry(QRect(230, 130, 80, 24));
        btn__4 = new QPushButton(centralwidget);
        btn__4->setObjectName(QString::fromUtf8("btn__4"));
        btn__4->setGeometry(QRect(50, 130, 80, 24));
        btn__5 = new QPushButton(centralwidget);
        btn__5->setObjectName(QString::fromUtf8("btn__5"));
        btn__5->setGeometry(QRect(140, 130, 80, 24));
        btn__8 = new QPushButton(centralwidget);
        btn__8->setObjectName(QString::fromUtf8("btn__8"));
        btn__8->setGeometry(QRect(140, 160, 80, 24));
        btn__9 = new QPushButton(centralwidget);
        btn__9->setObjectName(QString::fromUtf8("btn__9"));
        btn__9->setGeometry(QRect(230, 160, 80, 24));
        btn__7 = new QPushButton(centralwidget);
        btn__7->setObjectName(QString::fromUtf8("btn__7"));
        btn__7->setGeometry(QRect(50, 160, 80, 24));
        btn__0 = new QPushButton(centralwidget);
        btn__0->setObjectName(QString::fromUtf8("btn__0"));
        btn__0->setGeometry(QRect(50, 190, 80, 24));
        btn__clear = new QPushButton(centralwidget);
        btn__clear->setObjectName(QString::fromUtf8("btn__clear"));
        btn__clear->setGeometry(QRect(140, 190, 80, 24));
        btn__enter = new QPushButton(centralwidget);
        btn__enter->setObjectName(QString::fromUtf8("btn__enter"));
        btn__enter->setGeometry(QRect(230, 190, 80, 24));
        btn__add = new QPushButton(centralwidget);
        btn__add->setObjectName(QString::fromUtf8("btn__add"));
        btn__add->setGeometry(QRect(320, 100, 80, 24));
        btn__sub = new QPushButton(centralwidget);
        btn__sub->setObjectName(QString::fromUtf8("btn__sub"));
        btn__sub->setGeometry(QRect(320, 130, 80, 24));
        btn__div = new QPushButton(centralwidget);
        btn__div->setObjectName(QString::fromUtf8("btn__div"));
        btn__div->setGeometry(QRect(320, 190, 80, 24));
        btn__mul = new QPushButton(centralwidget);
        btn__mul->setObjectName(QString::fromUtf8("btn__mul"));
        btn__mul->setGeometry(QRect(320, 160, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 50, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 50, 49, 16));
        lineEdit__num1 = new QLineEdit(centralwidget);
        lineEdit__num1->setObjectName(QString::fromUtf8("lineEdit__num1"));
        lineEdit__num1->setGeometry(QRect(50, 70, 81, 24));
        lineEdit__num2 = new QLineEdit(centralwidget);
        lineEdit__num2->setObjectName(QString::fromUtf8("lineEdit__num2"));
        lineEdit__num2->setGeometry(QRect(140, 70, 81, 24));
        lineEdit__result = new QLineEdit(centralwidget);
        lineEdit__result->setObjectName(QString::fromUtf8("lineEdit__result"));
        lineEdit__result->setGeometry(QRect(230, 70, 171, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 438, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn__1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn__2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn__3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn__6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn__4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn__5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn__8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn__9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn__7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn__0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn__clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        btn__enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        btn__add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn__sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn__div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn__mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
