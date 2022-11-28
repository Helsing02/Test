#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    // инициализация счетчика нажатий
    count=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // при нажатии счетчик увеличивается и выводится
    count+=1;
    ui->label->setText(QString::number(count));
}

