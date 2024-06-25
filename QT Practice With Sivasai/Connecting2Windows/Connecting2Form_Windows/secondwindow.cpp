#include "secondwindow.h"
#include "ui_secondwindow.h"


secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);

}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_pushButton_clicked()
{
    hide(); // Hiding the present UI (Second Window)
    qDebug()<<"Requeting to Get Back To Main Window"; // Printing a Message in Console
    parentWidget()->show();// It will display the Parent Widget (MainWindow)

}

