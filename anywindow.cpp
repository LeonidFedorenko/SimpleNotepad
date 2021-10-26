#include "anywindow.h"
#include "ui_anywindow.h"

anyWindow::anyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::anyWindow)
{
    ui->setupUi(this);
}

anyWindow::~anyWindow()
{
    delete ui;
}
