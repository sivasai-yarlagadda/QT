#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->verticalSliderui->hide();
    ui->uilabel->hide();
    ui->progressBarcode->hide();
    ui->progressBarui->hide();
    ui->horizontalSliderui->hide();
    ui->verticalSlidercode->hide();
    ui->codelabel->hide();
    ui->horizontalSlidercode->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_uibutton_clicked()
{

    // We used the signal sloting here
    // Everything will be done in the ui form only in the signal's tab
    ui->verticalSliderui->show();
    ui->uilabel->show();
    ui->horizontalSliderui->show();
    ui->progressBarui->show();
}


void MainWindow::on_codebutton_clicked()
{
    ui->verticalSlidercode->show();
    ui->codelabel->show();
    ui->horizontalSlidercode->show();
    ui->progressBarcode->show();

    // We use code here to connect using the "Connect in-built function"

    connect(ui->horizontalSlidercode,SIGNAL(valueChanged(int)),
            ui->progressBarcode,SLOT(setValue(int)));

    connect(ui->verticalSlidercode,SIGNAL(valueChanged(int)),
            ui->progressBarcode,SLOT(setValue(int)));

}

