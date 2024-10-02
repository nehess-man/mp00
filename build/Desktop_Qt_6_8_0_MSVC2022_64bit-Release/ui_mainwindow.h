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
#include <QtWidgets/QLabel>
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
    QPushButton *btnHash;
    QPushButton *btnDchiff;
    QPushButton *btnRetour;
    QLabel *labelFileContent;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(968, 606);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(320, 170, 241, 148));
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

        btnHash = new QPushButton(verticalLayoutWidget);
        btnHash->setObjectName("btnHash");

        verticalLayout->addWidget(btnHash);

        btnDchiff = new QPushButton(verticalLayoutWidget);
        btnDchiff->setObjectName("btnDchiff");

        verticalLayout->addWidget(btnDchiff);

        btnRetour = new QPushButton(verticalLayoutWidget);
        btnRetour->setObjectName("btnRetour");

        verticalLayout->addWidget(btnRetour);

        labelFileContent = new QLabel(centralwidget);
        labelFileContent->setObjectName("labelFileContent");
        labelFileContent->setGeometry(QRect(180, 320, 571, 221));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 968, 22));
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
        btnHash->setText(QCoreApplication::translate("MainWindow", "Hachage", nullptr));
        btnDchiff->setText(QCoreApplication::translate("MainWindow", "D\303\251chiffrement", nullptr));
        btnRetour->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        labelFileContent->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
