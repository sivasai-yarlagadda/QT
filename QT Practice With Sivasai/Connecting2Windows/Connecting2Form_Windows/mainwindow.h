#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<secondwindow.h>


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
    void on_secondwindowbutton_clicked();

private:
    Ui::MainWindow *ui;
    secondwindow *nextpage; // Creating a pointer Object for the second Page
};
#endif // MAINWINDOW_H
