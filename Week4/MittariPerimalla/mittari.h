#ifndef MITTARI_H
#define MITTARI_H
#include "lcd.h"
#include "dht.h"


class Mittari : public DHT,LCD
{
public:
    void mittaus();
    void setup();

private:
    int varoitusvalo;
    //LCD lcdolio;
    //DHT dhtolio;

};

#endif // MITTARI_H


