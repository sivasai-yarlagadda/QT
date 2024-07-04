#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QTimer>
#include<QDebug>
#include<QMessageBox>
#include <QDateTime>
#include <QMainWindow>
#include <QTimeZone>
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

public slots:
    void printingbytime();// Creating a slot/function to use it in the .cpp file


private:
    Ui::MainWindow *ui;
    QTimer *time; // Initilizing the time pointer object to use dynamically;
};
#endif // MAINWINDOW_H
