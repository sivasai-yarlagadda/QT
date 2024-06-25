#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <homepage.h> // Importing or Inheriting the Homepage header file.

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
    void on_loginbutton_clicked();

private:
    Ui::MainWindow *ui;
    Homepage *home; // Initlizing the Object for the Homewindow
};
#endif // MAINWINDOW_H
