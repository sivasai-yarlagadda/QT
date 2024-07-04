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

    time->start(1000); // it will execute the slot function for every 1 Sec;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printingbytime()
{
    QTime currenttime = QTime::currentTime();\
        QString timetext = currenttime.toString("hh 'Hr' : mm Min : ss 'Sec' : ms 'Ms'");
    QString timedisplaytext= currenttime.toString("hh 'Hr' : mm Min : ss 'Sec'");



    //Getting the system time zone Using QTimeZone
    QTimeZone localzone = QTimeZone::systemTimeZone();
    QString timezonetext = localzone.displayName(QTimeZone::StandardTime, QTimeZone::OffsetName);


    ui->timedisplay->setText("Current Time & Region \n" +
                             timedisplaytext + "\n" +
                             timezonetext);

    qDebug().noquote()<<timetext<<timezonetext<<" The Timer Started and this is the "<< count <<" time of the Running this Slot/Function" ;
    count++;



}
