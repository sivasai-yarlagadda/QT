/********************************************************************************
** Form generated from reading UI file 'tcpreceiver.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPRECEIVER_H
#define UI_TCPRECEIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpReceiver
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *datadisplay;
    QPushButton *ConnectButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TcpReceiver)
    {
        if (TcpReceiver->objectName().isEmpty())
            TcpReceiver->setObjectName("TcpReceiver");
        TcpReceiver->resize(800, 600);
        centralwidget = new QWidget(TcpReceiver);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        datadisplay = new QPlainTextEdit(centralwidget);
        datadisplay->setObjectName("datadisplay");

        verticalLayout->addWidget(datadisplay);

        ConnectButton = new QPushButton(centralwidget);
        ConnectButton->setObjectName("ConnectButton");

        verticalLayout->addWidget(ConnectButton);

        TcpReceiver->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TcpReceiver);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        TcpReceiver->setMenuBar(menubar);
        statusbar = new QStatusBar(TcpReceiver);
        statusbar->setObjectName("statusbar");
        TcpReceiver->setStatusBar(statusbar);

        retranslateUi(TcpReceiver);

        QMetaObject::connectSlotsByName(TcpReceiver);
    } // setupUi

    void retranslateUi(QMainWindow *TcpReceiver)
    {
        TcpReceiver->setWindowTitle(QCoreApplication::translate("TcpReceiver", "TcpReceiver", nullptr));
        ConnectButton->setText(QCoreApplication::translate("TcpReceiver", "Connect ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpReceiver: public Ui_TcpReceiver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPRECEIVER_H
