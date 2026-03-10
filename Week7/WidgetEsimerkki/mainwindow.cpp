#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Nappi,&QPushButton::clicked,
            this,&MainWindow::handleClick);

    connect(ui->B1,&QPushButton::clicked,
            this,&MainWindow::buttonClick);
    connect(ui->B2,&QPushButton::clicked,
            this,&MainWindow::buttonClick);
    connect(ui->B3,&QPushButton::clicked,
            this,&MainWindow::buttonClick);

    connect(ui->enter,&QPushButton::clicked,
            this,[this](){handleNapit(ui->enter);});

    connect(ui->B1,&QPushButton::clicked,
            this,[this](){handleNapit(ui->B1);});



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    ui->naytto->setText("Pelittaa!!!");
    qDebug()<<"Nappia painettu";
}

void MainWindow::buttonClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    qDebug() << "Painike:" << button->text();

    QString teksti = ui->naytto->text();
    ui->naytto->setText(teksti+button->text());

}

void MainWindow::handleNapit(QPushButton * ptr)
{
    qDebug() << "Painike:" << ptr->text();
}
