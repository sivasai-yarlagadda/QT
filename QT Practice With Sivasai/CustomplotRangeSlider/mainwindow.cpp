#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QCursor>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    customPlot = new QCustomPlot(this);
    setCentralWidget(customPlot);
    setupPlot();
    setupLines();
    setupTracers();
    setupConnections();
    customPlot->setMouseTracking(true);

    dataTimer = new QTimer(this);
    connect(dataTimer, &QTimer::timeout, [=]() {
        dataIndex++;
        double yNew = rand() % 100;
        xData.append(dataIndex);
        yData.append(yNew);
        updatePlot();
    });
    dataTimer->start(50);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupPlot()
{
    customPlot->addGraph();
    customPlot->xAxis->setLabel("Time");
    customPlot->yAxis->setLabel("Value");
    customPlot->xAxis->setRange(0, 200);
    customPlot->yAxis->setRange(0, 100);
    customPlot->setInteractions(QCP::iRangeZoom | QCP::iSelectItems);
}

void MainWindow::setupLines()
{
    topLine = new QCPItemStraightLine(customPlot);
    topLine->setPen(QPen(Qt::red, 2, Qt::DashLine));
    topLine->point1->setCoords(0, 80);
    topLine->point2->setCoords(1, 80);

    bottomLine = new QCPItemStraightLine(customPlot);
    bottomLine->setPen(QPen(Qt::blue, 2, Qt::DashLine));
    bottomLine->point1->setCoords(0, 20);
    bottomLine->point2->setCoords(1, 20);
}

void MainWindow::setupTracers()
{
    topTracer = new QCPItemTracer(customPlot);
    topTracer->setStyle(QCPItemTracer::tsCircle);
    topTracer->setPen(QPen(Qt::red));
    topTracer->setBrush(Qt::red);
    topTracer->setSize(10);

    bottomTracer = new QCPItemTracer(customPlot);
    bottomTracer->setStyle(QCPItemTracer::tsCircle);
    bottomTracer->setPen(QPen(Qt::blue));
    bottomTracer->setBrush(Qt::blue);
    bottomTracer->setSize(10);

    updateTracers();
}

void MainWindow::updateTracers()
{
    double midX = (customPlot->xAxis->range().lower + customPlot->xAxis->range().upper) / 2;
    QPoint mousePos = customPlot->mapFromGlobal(QCursor::pos());
    double topY = customPlot->yAxis->coordToPixel(topLine->point1->coords().y());
    double bottomY = customPlot->yAxis->coordToPixel(bottomLine->point1->coords().y());
    topTracer->setSize(qAbs(mousePos.y() - topY) < 10 ? 14 : 10);
    bottomTracer->setSize(qAbs(mousePos.y() - bottomY) < 10 ? 14 : 10);
    topTracer->position->setCoords(midX, topLine->point1->coords().y());
    bottomTracer->position->setCoords(midX, bottomLine->point1->coords().y());
}

void MainWindow::updatePlot()
{
    QVector<double> xVisible, yVisible;
    double yMin = bottomLine->point1->coords().y();
    double yMax = topLine->point1->coords().y();
    for(int i=0; i<yData.size(); i++){
        if(yData[i] >= yMin && yData[i] <= yMax){
            xVisible.append(xData[i]);
            yVisible.append(yData[i]);
        }
    }
    customPlot->graph(0)->setData(xVisible, yVisible);
    if(!xData.isEmpty() && xData.size() > 200)
        customPlot->xAxis->setRange(xData.last() - 200, xData.last());
    updateTracers();
    customPlot->replot(QCustomPlot::rpQueuedReplot);
}

// -- Essential part: interact using QCustomPlot signals
void MainWindow::setupConnections()
{
    connect(customPlot, &QCustomPlot::mousePress, [=](QMouseEvent *event) {
        double topY = customPlot->yAxis->coordToPixel(topLine->point1->coords().y());
        double bottomY = customPlot->yAxis->coordToPixel(bottomLine->point1->coords().y());
        if(qAbs(event->pos().y() - topY) < 10) draggingTop = true;
        else if(qAbs(event->pos().y() - bottomY) < 10) draggingBottom = true;
    });

    connect(customPlot, &QCustomPlot::mouseMove, [=](QMouseEvent *event) {
        double topY = customPlot->yAxis->coordToPixel(topLine->point1->coords().y());
        double bottomY = customPlot->yAxis->coordToPixel(bottomLine->point1->coords().y());
        if(qAbs(event->pos().y() - topY) < 10 || qAbs(event->pos().y() - bottomY) < 10)
            customPlot->setCursor(Qt::OpenHandCursor);
        else
            customPlot->setCursor(Qt::ArrowCursor);

        if(draggingTop || draggingBottom) {
            double yVal = customPlot->yAxis->pixelToCoord(event->pos().y());
            double yLower = customPlot->yAxis->range().lower;
            double yUpper = customPlot->yAxis->range().upper;
            // Clamp to axis range
            yVal = std::max(yVal, yLower);
            yVal = std::min(yVal, yUpper);
            if(draggingTop && yVal > bottomLine->point1->coords().y() + 1){
                topLine->point1->setCoords(0, yVal);
                topLine->point2->setCoords(1, yVal);
            } else if(draggingBottom && yVal < topLine->point1->coords().y() - 1){
                bottomLine->point1->setCoords(0, yVal);
                bottomLine->point2->setCoords(1, yVal);
            }
            updatePlot();
        }
    });

    connect(customPlot, &QCustomPlot::mouseRelease, [=](QMouseEvent *) {
        draggingTop = false;
        draggingBottom = false;
    });
}
