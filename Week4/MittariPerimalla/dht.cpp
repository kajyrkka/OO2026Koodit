#include "dht.h"
#include <iostream>
#include <ctime>
using namespace std;



void DHT::beginDHT()
{
    cout<<"DHT, begin()"<<endl;
    setSeed(time(0));
    cout<<"gen alustettu "<<endl;
}

float DHT::readTemperature()
{
    long long temp = rand();
    temp = (temp%20) + 10;
    temperature = temp;
    return (float)temp;
}
