#include "reg.h"
#include "./ui_reg.h"

reg::reg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::reg)
{
    ui->setupUi(this);
}

reg::~reg()
{
    delete ui;
}
