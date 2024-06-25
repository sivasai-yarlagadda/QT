#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    home = new Homepage(this); // Re-Initilizing the Object for the Home Page
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginbutton_clicked()
{
    // Collecting the data form the Mainwindow UI to check the conditions.
    QString user = ui->username->text();
    QString pass = ui->password->text();

    if(user=="root" && pass == "root")
    {
        qDebug()<<"Login Successful !!"; // Confirming in the console
        hide(); // Hiding the present Window which is MainWindow
        home->show(); // Showing the Second window which is Home Window

        // Clearing the fields after login
        ui->username->clear();
        ui->password->clear();
    }
    else
    {
        QMessageBox::information(this,"Login Error","Enter the Valid Credentials");
    }
}

