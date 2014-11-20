#ifndef kranfix_playground_mpucalib_h
#define kranfix_playground_mpucalib_h

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

private slots:
    void on_ok_clicked();
    
private:
    Ui::mpucalib *ui;
};

#endif // kranfix_playground_mpucalib_h
