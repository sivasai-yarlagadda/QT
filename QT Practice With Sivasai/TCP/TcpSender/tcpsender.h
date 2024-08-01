#ifndef TCPSENDER_H
#define TCPSENDER_H
#include<QTcpSocket>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TCPSender; }
QT_END_NAMESPACE

class TCPSender : public QMainWindow
{
    Q_OBJECT

public:
    TCPSender(QWidget *parent = nullptr);
    ~TCPSender();

private slots:
    void on_ConnectButton_clicked();

    void on_SendButton_clicked();

    void handleSocketError(QAbstractSocket::SocketError socketError);

private:
    Ui::TCPSender *ui;
    QTcpSocket *tcpsender;
};
#endif // TCPSENDER_H
