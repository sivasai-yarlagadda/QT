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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *LoginPanel;
    QLabel *LoginHeading;
    QSplitter *splitter;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *loginbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LoginPanel = new QGraphicsView(centralwidget);
        LoginPanel->setObjectName(QString::fromUtf8("LoginPanel"));
        LoginPanel->setGeometry(QRect(210, 50, 361, 471));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginPanel->sizePolicy().hasHeightForWidth());
        LoginPanel->setSizePolicy(sizePolicy);
        LoginPanel->setStyleSheet(QString::fromUtf8(""));
        LoginHeading = new QLabel(centralwidget);
        LoginHeading->setObjectName(QString::fromUtf8("LoginHeading"));
        LoginHeading->setGeometry(QRect(330, 70, 111, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        LoginHeading->setFont(font);
        LoginHeading->setAlignment(Qt::AlignCenter);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(270, 120, 233, 271));
        splitter->setOrientation(Qt::Vertical);
        formLayoutWidget = new QWidget(splitter);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        username = new QLineEdit(formLayoutWidget);
        username->setObjectName(QString::fromUtf8("username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        password = new QLineEdit(formLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        formLayout->setWidget(1, QFormLayout::FieldRole, password);

        splitter->addWidget(formLayoutWidget);
        loginbutton = new QPushButton(splitter);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        splitter->addWidget(loginbutton);
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
        LoginHeading->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginbutton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
