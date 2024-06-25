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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *uilabel;
    QLabel *codelabel;
    QHBoxLayout *uilayout;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *progressBarui;
    QSlider *horizontalSliderui;
    QSlider *verticalSliderui;
    QHBoxLayout *codelayout;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBarcode;
    QSlider *horizontalSlidercode;
    QSlider *verticalSlidercode;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *uibutton;
    QPushButton *codebutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(831, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        uilabel = new QLabel(centralwidget);
        uilabel->setObjectName(QString::fromUtf8("uilabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uilabel->sizePolicy().hasHeightForWidth());
        uilabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(true);
        uilabel->setFont(font);
        uilabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(uilabel, 0, 0, 1, 1);

        codelabel = new QLabel(centralwidget);
        codelabel->setObjectName(QString::fromUtf8("codelabel"));
        sizePolicy.setHeightForWidth(codelabel->sizePolicy().hasHeightForWidth());
        codelabel->setSizePolicy(sizePolicy);
        codelabel->setFont(font);
        codelabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(codelabel, 0, 1, 1, 1);

        uilayout = new QHBoxLayout();
        uilayout->setObjectName(QString::fromUtf8("uilayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        progressBarui = new QProgressBar(centralwidget);
        progressBarui->setObjectName(QString::fromUtf8("progressBarui"));
        sizePolicy.setHeightForWidth(progressBarui->sizePolicy().hasHeightForWidth());
        progressBarui->setSizePolicy(sizePolicy);
        progressBarui->setValue(24);

        verticalLayout_2->addWidget(progressBarui);

        horizontalSliderui = new QSlider(centralwidget);
        horizontalSliderui->setObjectName(QString::fromUtf8("horizontalSliderui"));
        sizePolicy.setHeightForWidth(horizontalSliderui->sizePolicy().hasHeightForWidth());
        horizontalSliderui->setSizePolicy(sizePolicy);
        horizontalSliderui->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSliderui);


        uilayout->addLayout(verticalLayout_2);

        verticalSliderui = new QSlider(centralwidget);
        verticalSliderui->setObjectName(QString::fromUtf8("verticalSliderui"));
        sizePolicy.setHeightForWidth(verticalSliderui->sizePolicy().hasHeightForWidth());
        verticalSliderui->setSizePolicy(sizePolicy);
        verticalSliderui->setOrientation(Qt::Vertical);

        uilayout->addWidget(verticalSliderui);


        gridLayout->addLayout(uilayout, 1, 0, 1, 1);

        codelayout = new QHBoxLayout();
        codelayout->setObjectName(QString::fromUtf8("codelayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressBarcode = new QProgressBar(centralwidget);
        progressBarcode->setObjectName(QString::fromUtf8("progressBarcode"));
        sizePolicy.setHeightForWidth(progressBarcode->sizePolicy().hasHeightForWidth());
        progressBarcode->setSizePolicy(sizePolicy);
        progressBarcode->setValue(24);

        verticalLayout->addWidget(progressBarcode);

        horizontalSlidercode = new QSlider(centralwidget);
        horizontalSlidercode->setObjectName(QString::fromUtf8("horizontalSlidercode"));
        sizePolicy.setHeightForWidth(horizontalSlidercode->sizePolicy().hasHeightForWidth());
        horizontalSlidercode->setSizePolicy(sizePolicy);
        horizontalSlidercode->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlidercode);


        codelayout->addLayout(verticalLayout);

        verticalSlidercode = new QSlider(centralwidget);
        verticalSlidercode->setObjectName(QString::fromUtf8("verticalSlidercode"));
        sizePolicy.setHeightForWidth(verticalSlidercode->sizePolicy().hasHeightForWidth());
        verticalSlidercode->setSizePolicy(sizePolicy);
        verticalSlidercode->setOrientation(Qt::Vertical);

        codelayout->addWidget(verticalSlidercode);


        gridLayout->addLayout(codelayout, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        uibutton = new QPushButton(centralwidget);
        uibutton->setObjectName(QString::fromUtf8("uibutton"));

        horizontalLayout_3->addWidget(uibutton);

        codebutton = new QPushButton(centralwidget);
        codebutton->setObjectName(QString::fromUtf8("codebutton"));

        horizontalLayout_3->addWidget(codebutton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 831, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderui, &QSlider::valueChanged, progressBarui, &QProgressBar::setValue);
        QObject::connect(verticalSliderui, &QSlider::valueChanged, progressBarui, &QProgressBar::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        uilabel->setText(QCoreApplication::translate("MainWindow", "With UI", nullptr));
        codelabel->setText(QCoreApplication::translate("MainWindow", "With Code", nullptr));
        uibutton->setText(QCoreApplication::translate("MainWindow", "UI", nullptr));
        codebutton->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
