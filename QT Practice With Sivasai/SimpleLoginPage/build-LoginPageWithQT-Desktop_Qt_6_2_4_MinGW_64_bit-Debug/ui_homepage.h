/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *returntologinpagebutton;

    void setupUi(QDialog *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName(QString::fromUtf8("Homepage"));
        Homepage->resize(681, 463);
        gridLayout = new QGridLayout(Homepage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Homepage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        returntologinpagebutton = new QPushButton(Homepage);
        returntologinpagebutton->setObjectName(QString::fromUtf8("returntologinpagebutton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(returntologinpagebutton->sizePolicy().hasHeightForWidth());
        returntologinpagebutton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(returntologinpagebutton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Homepage);

        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QDialog *Homepage)
    {
        Homepage->setWindowTitle(QCoreApplication::translate("Homepage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Homepage", "Welcome to Home Page", nullptr));
        returntologinpagebutton->setText(QCoreApplication::translate("Homepage", "Back to Login Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
