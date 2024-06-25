#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>

namespace Ui {
class Homepage;
}

class Homepage : public QDialog
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();

private slots:
    void on_returntologinpagebutton_clicked();

private:
    Ui::Homepage *ui;
};

#endif // HOMEPAGE_H
