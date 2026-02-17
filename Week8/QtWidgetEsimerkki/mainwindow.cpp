#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Nappi1,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);
    connect(ui->Nappi2,&QPushButton::clicked,
            this,&MainWindow::handleNappiClick);
    connect(ui->Nappi1,&QPushButton::clicked,this,[this](){
        handleNapit(ui->Nappi1);
    });
    connect(ui->Nappi2,&QPushButton::clicked,this,[this](){
        handleNapit(ui->Nappi2);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNappiClick()
{
    if (auto button = qobject_cast<QPushButton*>(sender())) {
        qDebug() << "Painike:" << button->text();
    }
}

void MainWindow::handleNapit(QPushButton * ptr)
{
    qDebug() << "Painike handleNapit:" << ptr->text();
}
