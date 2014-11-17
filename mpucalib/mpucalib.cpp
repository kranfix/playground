#include "mpucalib.h"
#include "ui_mpucalib.h"

mpucalib::mpucalib(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mpucalib)
{
    ui->setupUi(this);
}

mpucalib::~mpucalib()
{
    delete ui;
}
