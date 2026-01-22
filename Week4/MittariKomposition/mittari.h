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
    // DHT luokka otetaan muuttujana = oliona tämän luokan sisälle
    // LCD luokka pointterina LCD olioon.
};

#endif // MITTARI_H
