#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTimer>
#include "qcustomplot/qcustomplot.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QCustomPlot *customPlot;
    QVector<double> xData, yData;
    int dataIndex = 0;
    QCPItemStraightLine *topLine;
    QCPItemStraightLine *bottomLine;
    QCPItemTracer *topTracer;
    QCPItemTracer *bottomTracer;
    QTimer *dataTimer;
    bool draggingTop = false;
    bool draggingBottom = false;
    void setupPlot();
    void setupLines();
    void setupTracers();
    void updatePlot();
    void updateTracers();
    void setupConnections();
};
#endif // MAINWINDOW_H
