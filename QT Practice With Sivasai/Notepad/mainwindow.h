#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMessageBox>
#include<QFile>
#include<QFileDialog>
#include<QDebug>
#include<QTextStream>
#include <QMainWindow>
#include<QInputDialog>
#include <QRegularExpression>
#include <QTabWidget>

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
    QString filepath;
    int tabCounter;
    // QTabWidget *centralTabWidget;

private slots:
    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionNew_File_triggered();

    void on_actionOpen_File_triggered();

    void on_actionAbout_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionExit_3_triggered();

    void on_actionClear_triggered();

    void on_screen_textChanged();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
