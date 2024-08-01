#include "tcpsender.h"
#include "ui_tcpsender.h"

TCPSender::TCPSender(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TCPSender)
{
    ui->setupUi(this);
    tcpsender = new QTcpSocket(this);

    connect(tcpsender, &QTcpSocket::errorOccurred, this, &TCPSender::handleSocketError);

}

TCPSender::~TCPSender()
{
    delete ui;
}


void TCPSender::on_ConnectButton_clicked()
{
    QHostAddress ipaddress("127.0.0.1");
    tcpsender->connectToHost(ipaddress, 8088);
    qDebug()<<"Connected .......";
}


void TCPSender::on_SendButton_clicked()
{

    if (tcpsender->waitForConnected(3000)) {
        QString data = ui->msgdata->text();
        QString summarymsg = ui->summary->toPlainText();
        QByteArray summarydatagram =summarymsg.toUtf8();
        QByteArray datagram = data.toUtf8();
        tcpsender->write(summarydatagram);
        qint64 bytesWritten = tcpsender->write(datagram);
        if (bytesWritten == -1) {
            qDebug() << "Failed to write data:" << tcpsender->errorString();
        } else {
            qDebug() << "Data sent:" << datagram;
        }
          tcpsender->flush();
    }

    else {
        qDebug() << "Socket is not open. Error:" << tcpsender->errorString();
    }

}

void TCPSender::handleSocketError(QAbstractSocket::SocketError socketError)
{
    qDebug() << "Socket error:" << socketError << tcpsender->errorString();
}

