#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_aboutmessage_clicked()
{
    QMessageBox::about(this,"About","This is the About Message Box");
}


void MainWindow::on_criticalmessage_clicked()
{
        QMessageBox::critical(this,"Critical","This is the Critical Message Box");
}


void MainWindow::on_informationmessage_clicked()
{
        QMessageBox::information(this,"Information","This is the Information Message Box");
}


void MainWindow::on_questionmessage_clicked()
{
    // In Question message box 2 option will show like "Yes  or No"
    // By using Standard Button , It will perform the action based on the condition.

        QMessageBox::question(this," Basic Question Box","This is the Question Message Box whatever the option it will go nextone");

        QMessageBox::StandardButton reply = QMessageBox::question(this," Question Box ","This is the Question Message Box with Optins YES or NO . To perform the actions we need to save the response first so we use the standard button at the starting of this messagebox to save the response and based on that we will perform the action, and the for this we use 4th Argument for the option " , QMessageBox::Yes | QMessageBox::No);

        // Checking the conditions
        if(reply == QMessageBox::Yes)
        {
            qDebug()<<"Yes Button Pressed";
        }
        else
        {
            qDebug()<<"No Button Pressed";
        }


}


void MainWindow::on_warningmessage_clicked()
{
    QMessageBox::warning(this,"Warning","This is the Warning Message Box");

}

