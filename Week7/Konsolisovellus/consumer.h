#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>

class Consumer : public QObject
{
    Q_OBJECT
public:
    Consumer(QObject * parent);
    ~Consumer();
signals:
    void stopProgram();

public slots:
    // tämä voi olla myös ihan
    // normaali kutsuttava funktio
    void handleProducerSignal();


private slots:
    // jos signaali tulee
    // tämän luokan sisältä



};

#endif // CONSUMER_H
