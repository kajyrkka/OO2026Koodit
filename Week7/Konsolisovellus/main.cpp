#include <QCoreApplication>
#include "consumer.h"
#include "producer.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.


    // luodaan kaikki tarvittavat oliot ja kytketään signaalit
    // Luodaan aloittava signaali

    Consumer * pConsumer = new Consumer(&a);
    Producer * pProducer = new Producer(&a);

    QObject::connect(pProducer,&Producer::signalToConsumer,
            pConsumer,&Consumer::handleProducerSignal);
    //QTimer::singleShot(2000, &a, &QCoreApplication::quit);

    QObject::connect(pConsumer,&Consumer::stopProgram,
                     &a,&QCoreApplication::quit);

    int returnValue = a.exec();

    return returnValue;
}
