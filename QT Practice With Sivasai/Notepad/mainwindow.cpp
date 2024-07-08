#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->screen);

    // Trying New
    // centralTabWidget = new QTabWidget(this);
    // setCentralWidget(centralTabWidget);

    statusBar()->showMessage(tr("Word Count: 0")); // Initial status message

    setWindowTitle(tr("Simple NotePad"));
    resize(600, 400);

    tabCounter = 1;

}

MainWindow::~MainWindow()
{
    delete ui;
}

// New File
void MainWindow::on_actionNew_File_triggered()
{
    //Declaring the file path
    filepath="";
    ui->screen->setText(""); // Setting the screen with no data;
    QString newfile = QInputDialog::getText(this, "Enter Filename", "Please enter the new filename along with Extension: ");
    if (!newfile.isEmpty()) {
        QMessageBox::information(this, "Filename", "You entered is : " + newfile);
        QString filePath = QFileDialog::getSaveFileName(this, "Save File", newfile, "Text Files (*.txt);;All Files (*)");

        QFile file(filePath);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            //Taking input data using QInputDialouge
            QString newfiledata = QInputDialog::getText(this,newfile,"Enter the data");
            out << newfiledata;
            file.close();
            QMessageBox::information(this, "Success", "File saved successfully: " + filePath);
        } else {
            QMessageBox::warning(this, "Error", "Failed to open the file for writing.");
        }


    } else {
        QMessageBox::information(this, "Filename", "No filename entered.");
    }


    // TryingSomeThing New;

    // QString tabTitle = "Untitled " + QString::number(tabCounter);
    // ui->tabs->addTab(ui->screen, tabTitle);
    // // Select the newly created tab
    // ui->tabs->setCurrentWidget(ui->screen);

    // tabCounter++;

}




// Open File
void MainWindow::on_actionOpen_File_triggered()
{

    QString FileName = QFileDialog::getOpenFileName(this,"Open the File");
    QFile file(FileName);
    filepath = FileName;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this,"Not Found","File is Not Found");
        return;
    }

    QTextStream in(&file);
    QString dataread = in.readAll();
    ui->screen->setPlainText(dataread);
    file.close();

}

// Copy content

void MainWindow::on_actionCopy_triggered()
{
    // To Copy the content;
    ui->screen->copy();
}

// Cut the Content

void MainWindow::on_actionCut_triggered()
{
    // To cut the content;
    ui->screen->cut();
}

// Paste the content
void MainWindow::on_actionPaste_triggered()
{
    // To paste the content;
    ui->screen->paste();
}



// Undo
void MainWindow::on_actionUndo_triggered()
{
// To Undo the content;
    ui->screen->undo();
}


// Redo

void MainWindow::on_actionRedo_triggered()
{
// To Redo the content;
    ui->screen->redo();
}

//About

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this,"About","This is a notepad designed by QT Framework");
}

// Save data
void MainWindow::on_actionSave_triggered()
{
    QFile file(filepath);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::information(this,"Not Found","File is Not Found");
        return;
    }

    QTextStream out(&file);
    QString datasave = ui->screen->toPlainText();
    out<<datasave;
    out.flush();
    file.close();
}

// Save As
void MainWindow::on_actionSave_As_triggered()
{
    QString FileName = QFileDialog::getSaveFileName(this,"Open the File");
    QFile file(FileName);
    filepath=FileName;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::information(this,"Not Found","File is Not Found");
        return;
    }

    QTextStream out(&file);
    QString datasave = ui->screen->toPlainText();
    out<<datasave;
    out.flush();
    file.close();
}


void MainWindow::on_actionExit_3_triggered()
{
    QCoreApplication::exit();
}

//To clear the Screen
void MainWindow::on_actionClear_triggered()
{
    ui->screen->clear();
}


void MainWindow::on_screen_textChanged()
{
    QString text = ui->screen->toPlainText();
    // Split the text into words (using whitespace as separator)
    QStringList words = text.split(QRegularExpression("\\W+"), Qt::SkipEmptyParts);
    int wordCount = words.size();

    // Update status bar with word count
    statusBar()->showMessage(tr("Word Count: %1").arg(wordCount));
}

