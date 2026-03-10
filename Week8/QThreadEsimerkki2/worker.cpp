#include "worker.h"
#include <QFile>
#include <QThread>
#include <QDebug>



void Worker::processFile(QString path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        emit error("Cannot open file");
        return;
    }

    qint64 totalSize = file.size();
    qint64 processed = 0;
    int lineCount = 0;

    while (!file.atEnd()) {
        QThread::msleep(10);
        QByteArray line = file.readLine();
        processed += line.size();
        lineCount++;

        if (line.contains("ERROR"))
            emit errorFound(QString(line));

        emit progress((processed * 100) / totalSize);
        qDebug()<<"WORKER THREAD number"<<QThread::currentThreadId();
    }

    emit finished(lineCount);
}
