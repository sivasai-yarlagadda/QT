#include "tcpreceiver.h"
#include "ui_tcpreceiver.h"

TcpReceiver::TcpReceiver(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TcpReceiver)
{
    ui->setupUi(this);

    tcpserver = new QTcpServer(this);

}

TcpReceiver::~TcpReceiver()
{
    delete ui;
}


void TcpReceiver::on_ConnectButton_clicked()
{
    QHostAddress ipaddress("127.0.0.1");
    tcpserver->listen(ipaddress, 8088);//Listening using TcpServer
    qDebug() << "Listening ........... ";

    connect(tcpserver, &QTcpServer::newConnection, this, &TcpReceiver::checkingdata);
}


void TcpReceiver::checkingdata(){


    QTcpSocket *clientSocket = tcpserver->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, [this, clientSocket]() {
        QByteArray data = clientSocket->readAll();
        qDebug() << "Received data:" << data;
        ui->datadisplay->setPlainText(data);
    });

}


