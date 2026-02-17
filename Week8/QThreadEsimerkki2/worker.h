#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject
{
    Q_OBJECT

    //Worker(); ei tarvita konstruktoria
    // Jos on tarkoitus siirtää säikeeseen, niin
    // ei voi siirtää jos on parent

public slots:
    void processFile(QString);
signals:
    void progress(int);          // prosenttia
    void errorFound(QString);   // line text
    void finished(int);         // number of lines
    void error(QString);        // message
};

#endif // WORKER_H
