#ifndef MITTARI_H
#define MITTARI_H
#include "dht.h"
#include "lcd.h"

class Mittari
{
public:
    Mittari();
    ~Mittari();
    void mittaus();
    void setup();
private:
    int varoitusvalo;
    DHT dht;       // toinen luokka tämän mittariluokan sisällä muuttujana
    LCD * lcdPtr;
};

#endif // MITTARI_H
