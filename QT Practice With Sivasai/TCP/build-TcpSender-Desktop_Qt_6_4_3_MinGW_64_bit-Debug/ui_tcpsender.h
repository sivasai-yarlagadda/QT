/********************************************************************************
** Form generated from reading UI file 'tcpsender.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSENDER_H
#define UI_TCPSENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCPSender
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ConnectButton;
    QPushButton *SendButton;
    QLineEdit *msgdata;
    QPlainTextEdit *summary;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TCPSender)
    {
        if (TCPSender->objectName().isEmpty())
            TCPSender->setObjectName("TCPSender");
        TCPSender->resize(800, 600);
        centralwidget = new QWidget(TCPSender);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        ConnectButton = new QPushButton(centralwidget);
        ConnectButton->setObjectName("ConnectButton");

        verticalLayout->addWidget(ConnectButton);

        SendButton = new QPushButton(centralwidget);
        SendButton->setObjectName("SendButton");

        verticalLayout->addWidget(SendButton);

        msgdata = new QLineEdit(centralwidget);
        msgdata->setObjectName("msgdata");

        verticalLayout->addWidget(msgdata);

        summary = new QPlainTextEdit(centralwidget);
        summary->setObjectName("summary");

        verticalLayout->addWidget(summary);

        TCPSender->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TCPSender);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        TCPSender->setMenuBar(menubar);
        statusbar = new QStatusBar(TCPSender);
        statusbar->setObjectName("statusbar");
        TCPSender->setStatusBar(statusbar);

        retranslateUi(TCPSender);

        QMetaObject::connectSlotsByName(TCPSender);
    } // setupUi

    void retranslateUi(QMainWindow *TCPSender)
    {
        TCPSender->setWindowTitle(QCoreApplication::translate("TCPSender", "TCPSender", nullptr));
        ConnectButton->setText(QCoreApplication::translate("TCPSender", "Connect", nullptr));
        SendButton->setText(QCoreApplication::translate("TCPSender", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPSender: public Ui_TCPSender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSENDER_H
