#include "tcpreceiver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpReceiver w;
    w.show();
    return a.exec();
}
