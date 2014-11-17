#include "mpucalib.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mpucalib w;
    w.show();

    return a.exec();
}
