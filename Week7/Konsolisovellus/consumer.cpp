#include "consumer.h"
#include <QDebug>

Consumer::Consumer(QObject * p) : QObject(p)
{
   // QObjectin konstruktori pitää kutsua
   // tätä ennen?
   qDebug()<<"Consumer construktor";
   //emit stopProgram();
}

Consumer::~Consumer()
{
    qDebug()<<"Consumer tuhoaja";
}

void Consumer::handleProducerSignal()
{
   qDebug()<<"Vastaanotin Producer signaalin";
    emit stopProgram();

}
