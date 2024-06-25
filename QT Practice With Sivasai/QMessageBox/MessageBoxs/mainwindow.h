#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMessageBox>
#include<QDebug>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_aboutmessage_clicked();

    void on_criticalmessage_clicked();

    void on_informationmessage_clicked();

    void on_questionmessage_clicked();

    void on_warningmessage_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
