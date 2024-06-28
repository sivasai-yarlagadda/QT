#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpsocketobj = new QTcpSocket(this); // Re initiliizng the TcpSocketObj to use it here in the File

    // Declaring the Host ipAddress , where we want to send the data
    QHostAddress ipAdd("127.0.0.1");  // 127.0.0.1 is nothing but localhost


    // Binding the connection between the sender and the receiver with specific port 5004
    tcpsocketobj->connectToHost(ipAdd,5004);

    // Adding the Styles to the Tabwidget and the Buttons.


    ui->wholetabwidget->setStyleSheet(
        "QTabWidget {"
        "    background-color: Red;"
        "}"
        "QTabBar::tab {"
        "    background-color: LightRed;"
        "    border: 1px solid Grey;"
        "    padding: 8px;"
        "    margin-top: 2px;"
        "}"
        "QTabBar::tab:selected {"
        "    background-color: LightSkyBlue;"
        "    border-bottom: 2px solid Black;"
        "    border-top-left-radius: 12px;"
        "    border-top-right-radius: 12px;"
        "    padding-top: 12px;"

        "}"
        "QTabBar::tab:!selected {"
        "    background-color: IndianRed;"
        "    border-top-left-radius: 6px;"
        "    border-top-right-radius: 6px;"
        "    padding-top: 6px;"
        "    margin-top: 2px;"
        "}"
        "QTabWidget::pane {"
        "    border: 1px solid black;"
        "    background-color: Grey;"
        "}"
        );
    ui->firsttabbutton->setStyleSheet(
        "QPushButton:hover {"
        "    background-color: LightGreen;"  // Change color when hovered
        "}"
        );
    ui->secondtabbutton->setStyleSheet(
        "QPushButton:hover {"
        "    background-color: LightGreen;"  // Change color when hovered
        "}"
        );


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_firsttabbutton_clicked()
{
    // Collecting the data from the UI and storing in the String format.
    QString Message = ui->firsttabtextedit->toPlainText();

    QByteArray data = Message.toUtf8(); // Converting the data into Bytes


    //Writing or sending the data through 5004;
    tcpsocketobj->write(data);
    ui->firsttabtextedit->clear();

}


void MainWindow::on_secondtabbutton_clicked()
{
    // Collecting the data from the UI and storing in the String format.
    QString Message = ui->secondtabtextedit->toPlainText();

    QByteArray data = Message.toUtf8(); // Converting the data into Bytes


    //Writing or sending the data through 5004;
    tcpsocketobj->write(data);
    ui->secondtabtextedit->clear();
}

