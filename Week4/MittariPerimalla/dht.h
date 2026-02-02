#ifndef DHT_H
#define DHT_H
#include "random.h"

class DHT : public Random
{
public:
    void beginDHT();
    float readTemperature();


private:
    float temperature;
    //Random gen; ei tarvita enää koosteyhteyttä
};

#endif // DHT_H
