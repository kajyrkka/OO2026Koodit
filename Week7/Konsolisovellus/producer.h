#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>
#include <QTimer>

class Producer : public QObject
{
    Q_OBJECT
public:
    Producer(QObject * parent = nullptr);
    ~Producer();


signals:
    void signalToConsumer();
private slots:
    void handleTimeout();

private:
    QTimer * pQTimer;

};

#endif // PRODUCER_H
