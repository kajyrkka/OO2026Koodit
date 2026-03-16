#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pReader = new Reader(this);
    pReader->readInfo();
    connect(pReader,&Reader::sendData,
            this,&MainWindow::handleCardNumber);
    qDebug()<<"Aukesiko portti "<<pReader->open();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCardNumber(QByteArray A)
{
    //qDebug()<<"MainWindow handleCardNumber";
    //qDebug()<<"CardNumber = "<<A;
    ui->lineEdit->setText(QString::number(A.toInt()));
}
