#ifndef TCPRECEIVER_H
#define TCPRECEIVER_H
#include<QTcpSocket>
#include <QMainWindow>
#include<QTcpServer>
QT_BEGIN_NAMESPACE
namespace Ui { class TcpReceiver; }
QT_END_NAMESPACE

class TcpReceiver : public QMainWindow
{
    Q_OBJECT

public:
    TcpReceiver(QWidget *parent = nullptr);
    ~TcpReceiver();

private slots:
    void on_ConnectButton_clicked();
    void checkingdata();
//    void handleSocketError(QAbstractSocket::SocketError socketError);
//    void handleDisconnected();

private:
    Ui::TcpReceiver *ui;
    QTcpSocket *tcpreceiver;
    QTcpServer *tcpserver;
};
#endif // TCPRECEIVER_H
