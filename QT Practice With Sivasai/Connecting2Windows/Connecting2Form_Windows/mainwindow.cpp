#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nextpage = new secondwindow(this); // Re-Using the Object in this Class file
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_secondwindowbutton_clicked()
{
    hide(); // Hiding the Present UI page (Main window)
    qDebug()<<"Requeting to go to Second Window"; // Printing a Message in Console
    nextpage->show(); // To show the next window UI Page

}

