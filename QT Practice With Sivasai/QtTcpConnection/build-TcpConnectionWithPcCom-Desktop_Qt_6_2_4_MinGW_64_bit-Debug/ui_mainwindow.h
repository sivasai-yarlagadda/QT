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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *wholetabwidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *firsttabtextedit;
    QPushButton *firsttabbutton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *secondtabtextedit;
    QPushButton *secondtabbutton;
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
        wholetabwidget = new QTabWidget(centralwidget);
        wholetabwidget->setObjectName(QString::fromUtf8("wholetabwidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        firsttabtextedit = new QTextEdit(tab);
        firsttabtextedit->setObjectName(QString::fromUtf8("firsttabtextedit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firsttabtextedit->sizePolicy().hasHeightForWidth());
        firsttabtextedit->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(firsttabtextedit);

        firsttabbutton = new QPushButton(tab);
        firsttabbutton->setObjectName(QString::fromUtf8("firsttabbutton"));
        sizePolicy.setHeightForWidth(firsttabbutton->sizePolicy().hasHeightForWidth());
        firsttabbutton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(firsttabbutton);


        verticalLayout_4->addLayout(verticalLayout_3);

        wholetabwidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        secondtabtextedit = new QTextEdit(tab_2);
        secondtabtextedit->setObjectName(QString::fromUtf8("secondtabtextedit"));
        sizePolicy.setHeightForWidth(secondtabtextedit->sizePolicy().hasHeightForWidth());
        secondtabtextedit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(secondtabtextedit);

        secondtabbutton = new QPushButton(tab_2);
        secondtabbutton->setObjectName(QString::fromUtf8("secondtabbutton"));
        sizePolicy.setHeightForWidth(secondtabbutton->sizePolicy().hasHeightForWidth());
        secondtabbutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(secondtabbutton);


        verticalLayout_2->addLayout(verticalLayout);

        wholetabwidget->addTab(tab_2, QString());

        gridLayout->addWidget(wholetabwidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        wholetabwidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        firsttabbutton->setText(QCoreApplication::translate("MainWindow", "Send Data", nullptr));
        wholetabwidget->setTabText(wholetabwidget->indexOf(tab), QCoreApplication::translate("MainWindow", "This is the First Tab", nullptr));
        secondtabbutton->setText(QCoreApplication::translate("MainWindow", "Send Data", nullptr));
        wholetabwidget->setTabText(wholetabwidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "This is the Second Tab", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
