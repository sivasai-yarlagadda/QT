#include "mainwindow.h"
#include "ui_mainwindow.h"
// Defining the count to check the iternations;
qint16 count = 1;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Reinitalize the timer Object here;
    time = new QTimer(this);


    // To run the function use the "Connect"

    connect(time,SIGNAL(timeout()),this,SLOT(printingbytime()));


    // Timeout will be taken in "MilliSeconds" so 1 sec = 1000ms

    time->start(10000); // it will execute the slot function for every 10 Sec;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printingbytime()
{

    qDebug()<<"The Timer Started and this is the "<< count <<"time of the Running this Slot/Function";

    count++;

}
