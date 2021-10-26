#ifndef ANYWINDOW_H
#define ANYWINDOW_H

#include <QMainWindow>

namespace Ui {
class anyWindow;
}

class anyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit anyWindow(QWidget *parent = nullptr);
    ~anyWindow();

private:
    Ui::anyWindow *ui;
};

#endif // ANYWINDOW_H
