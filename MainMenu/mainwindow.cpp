#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Hello QT Widgets!!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

// button

void MainWindow::on_btnHello_clicked()
{
    ui->btnHello->setText(ui->lineEdit->text());
    ui->lineEdit->text();
    ui->btnHello->setDisabled(true);

}

