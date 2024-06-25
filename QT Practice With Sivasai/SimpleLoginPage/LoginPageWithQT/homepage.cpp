#include "homepage.h"
#include "ui_homepage.h"

Homepage::Homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}

void Homepage::on_returntologinpagebutton_clicked()
{
    hide();// Hiding the present window which is Homepage Window
    qDebug()<<"Returning to the Login Window";
    parentWidget()->show();// Parent Widget is nothing but the Mainwindow
}

