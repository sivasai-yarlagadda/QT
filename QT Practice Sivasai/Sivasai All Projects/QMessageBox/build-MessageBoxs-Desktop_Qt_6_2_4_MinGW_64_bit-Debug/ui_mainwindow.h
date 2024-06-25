/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QPushButton *aboutmessage;
    QPushButton *informationmessage;
    QPushButton *criticalmessage;
    QPushButton *questionmessage;
    QPushButton *warningmessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        aboutmessage = new QPushButton(centralwidget);
        aboutmessage->setObjectName(QString::fromUtf8("aboutmessage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutmessage->sizePolicy().hasHeightForWidth());
        aboutmessage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(aboutmessage, 1, 1, 1, 1);

        informationmessage = new QPushButton(centralwidget);
        informationmessage->setObjectName(QString::fromUtf8("informationmessage"));
        sizePolicy.setHeightForWidth(informationmessage->sizePolicy().hasHeightForWidth());
        informationmessage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(informationmessage, 0, 2, 1, 1);

        criticalmessage = new QPushButton(centralwidget);
        criticalmessage->setObjectName(QString::fromUtf8("criticalmessage"));
        sizePolicy.setHeightForWidth(criticalmessage->sizePolicy().hasHeightForWidth());
        criticalmessage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(criticalmessage, 0, 0, 1, 1);

        questionmessage = new QPushButton(centralwidget);
        questionmessage->setObjectName(QString::fromUtf8("questionmessage"));
        sizePolicy.setHeightForWidth(questionmessage->sizePolicy().hasHeightForWidth());
        questionmessage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(questionmessage, 4, 2, 1, 1);

        warningmessage = new QPushButton(centralwidget);
        warningmessage->setObjectName(QString::fromUtf8("warningmessage"));
        sizePolicy.setHeightForWidth(warningmessage->sizePolicy().hasHeightForWidth());
        warningmessage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(warningmessage, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        aboutmessage->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        informationmessage->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        criticalmessage->setText(QCoreApplication::translate("MainWindow", "Critical", nullptr));
        questionmessage->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        warningmessage->setText(QCoreApplication::translate("MainWindow", "Warning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
