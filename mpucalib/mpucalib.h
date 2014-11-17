#ifndef MPUCALIB_H
#define MPUCALIB_H

#include <QMainWindow>

namespace Ui {
class mpucalib;
}

class mpucalib : public QMainWindow
{
    Q_OBJECT

public:
    explicit mpucalib(QWidget *parent = 0);
    ~mpucalib();

private:
    Ui::mpucalib *ui;
};

#endif // MPUCALIB_H
