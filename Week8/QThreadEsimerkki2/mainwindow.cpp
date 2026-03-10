#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQThread = new QThread;
    pWorker = new Worker;

    pWorker->moveToThread(pQThread);

    // Käynnistys
    connect(pQThread, &QThread::started, [=]() {
        pWorker->processFile("log.txt");
    });

    // UI päivitykset
    connect(pWorker, &Worker::progress,
            ui->progressBar, &QProgressBar::setValue);

    connect(pWorker, &Worker::errorFound,
            this, [](const QString& line){
                qDebug() << "Virhe:" << line;
            });


    // Valmistuminen
    connect(pWorker, &Worker::finished, this, [=](int lines){
        ui->statusbar->showMessage(
            QString("Valmis. Rivejä: %1").arg(lines));
        pQThread->quit();  // lopettaa säikeen => finished signaali
    });                    // joka on kytketty deleteLater() funktioon
                           // lopettaa säikeen turvallisesti
                           // ja oikeassa säikeessä.


    // Siivous
    connect(pQThread, &QThread::finished, pWorker, &QObject::deleteLater);
    connect(pQThread, &QThread::finished, pQThread, &QObject::deleteLater);

    connect(ui->pushButton,&QPushButton::clicked,
            this,[this](){

        ui->lineEdit->setText("Nappia painettu "+QString::number(count)+" kertaa");
        count++;
        qDebug()<<"MAINTHREAD number"<<QThread::currentThreadId();
    });

    pQThread->start();


}

MainWindow::~MainWindow()
{

    delete ui;

}
