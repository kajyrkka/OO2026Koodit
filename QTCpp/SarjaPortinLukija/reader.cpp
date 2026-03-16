#include "reader.h"
#include <QDebug>
#include <QSerialPortInfo>





Reader::Reader(QObject * parent):QObject(parent)
{
    qDebug("Reader luotu");
    port = new QSerialPort(this);
}



Reader::~Reader()
{
    qDebug("Reader tuhottu");
}

void Reader::readInfo()
{
    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &portInfo : serialPortInfos) {
        qDebug() << "\n"
                 << "Port:" << portInfo.portName() << "\n"
                 << "Location:" << portInfo.systemLocation() << "\n"
                 << "Description:" << portInfo.description() << "\n"
                 << "Manufacturer:" << portInfo.manufacturer() << "\n"
                 << "Serial number:" << portInfo.serialNumber() << "\n"
                 << "Vendor Identifier:"
                 << (portInfo.hasVendorIdentifier()
                         ? QByteArray::number(portInfo.vendorIdentifier(), 16)
                         : QByteArray()) << "\n"
                 << "Product Identifier:"
                 << (portInfo.hasProductIdentifier()
                         ? QByteArray::number(portInfo.productIdentifier(), 16)
                         : QByteArray());
    }
    qDebug("Infon lopussa");
}

bool Reader::open()
{
    qDebug()<<"open funktiossa";
    // 856343137393519122A0
    bool returnValue = false;
    //port->setPortName("COM15");
    port->setPortName("COM42");
    returnValue = port->open(QIODeviceBase::ReadOnly);
    qDebug()<<"returnValue = "<<returnValue;
    if(returnValue == true)
    {
        connect(port,&QSerialPort::readyRead,
                this,&Reader::handleInterrupt);
    }
    qDebug()<<"open funktiossa lopussa";
    return returnValue;
}

void Reader::handleInterrupt()
{
    //qDebug("Luettavaa sarjaportissa");
    //static QByteArray buffer;
    QByteArray luettu = port->readAll();
    qDebug()<<(QString::fromUtf8(luettu));
    emit sendData(luettu);

    /*
    buffer.append(luettu);
    if(buffer.contains('\n'))
    {
        //qDebug()<<(QString::fromUtf8(buffer));
        emit sendData(buffer);
        buffer = "";
    }
*/
}

