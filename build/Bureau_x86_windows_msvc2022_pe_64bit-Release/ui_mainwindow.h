/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSHA;
    QPushButton *btnAES;
    QPushButton *btnRSA;
    QPushButton *btnChiff;
    QPushButton *btnDchiff;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1040, 669);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 110, 241, 118));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnSHA = new QPushButton(verticalLayoutWidget);
        btnSHA->setObjectName("btnSHA");

        horizontalLayout->addWidget(btnSHA);

        btnAES = new QPushButton(verticalLayoutWidget);
        btnAES->setObjectName("btnAES");

        horizontalLayout->addWidget(btnAES);

        btnRSA = new QPushButton(verticalLayoutWidget);
        btnRSA->setObjectName("btnRSA");

        horizontalLayout->addWidget(btnRSA);


        verticalLayout->addLayout(horizontalLayout);

        btnChiff = new QPushButton(verticalLayoutWidget);
        btnChiff->setObjectName("btnChiff");

        verticalLayout->addWidget(btnChiff);

        btnDchiff = new QPushButton(verticalLayoutWidget);
        btnDchiff->setObjectName("btnDchiff");

        verticalLayout->addWidget(btnDchiff);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1040, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnSHA->setText(QCoreApplication::translate("MainWindow", "SHA", nullptr));
        btnAES->setText(QCoreApplication::translate("MainWindow", "AES", nullptr));
        btnRSA->setText(QCoreApplication::translate("MainWindow", "RSA", nullptr));
        btnChiff->setText(QCoreApplication::translate("MainWindow", "Chiffrement", nullptr));
        btnDchiff->setText(QCoreApplication::translate("MainWindow", "D\303\251chiffrement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
