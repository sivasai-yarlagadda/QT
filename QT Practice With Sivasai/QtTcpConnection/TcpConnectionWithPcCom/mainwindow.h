#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTcpSocket>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_firsttabbutton_clicked();

    void on_secondtabbutton_clicked();

private:
    Ui::MainWindow *ui;

    // Creating the TCP Socket Object as a Pointer so that we can use it dynamically anywhere.
    QTcpSocket *tcpsocketobj;


};
#endif // MAINWINDOW_H
