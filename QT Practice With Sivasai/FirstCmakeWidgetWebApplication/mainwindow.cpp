#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pbGetTypedData,&QPushButton::clicked,this,&MainWindow::displayInLabel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayInLabel()
{
    ui->lblTypedData->setText("Typed : "+ui->plainTextEdit->toPlainText());
}

