/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLineEdit *lbl_Tittle;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(744, 536);
        QFont font;
        font.setBold(true);
        MainPage->setFont(font);
        MainPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgb(52,50,64);\n"
"	color:white;\n"
"}"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        lbl_Tittle = new QLineEdit(centralwidget);
        lbl_Tittle->setObjectName("lbl_Tittle");
        lbl_Tittle->setGeometry(QRect(40, 150, 640, 261));
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        lbl_Tittle->setFont(font1);
        lbl_Tittle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgb(90, 241, 25);\n"
"	color:black;\n"
"}"));
        MainPage->setCentralWidget(centralwidget);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        lbl_Tittle->setText(QCoreApplication::translate("MainPage", "WELCOME TO OUR PROJECT - BIMS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
