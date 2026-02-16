#include "producer.h"
#include <QDebug>

Producer::Producer(QObject * p): QObject(p)
{
    qDebug()<<"Producer luotu";
    pQTimer = new QTimer(this);
    //connect(lahettajanOsoite,lahettajaLuokanSignaalinOsoite,
    //        vastaanottajanOsoite, vastaanottajaLuokanSlotFunktionOsoite)
    connect(pQTimer,&QTimer::timeout,
            this,&Producer::handleTimeout);

    pQTimer->start(1000);
}

Producer::~Producer()
{
    qDebug()<<"Producer tuhottu";
}

void Producer::handleTimeout()
{
    qDebug()<<"HandleTimeout()";
    qDebug()<<"Lahetan signaalin Konsumerille";
    emit signalToConsumer();

}
