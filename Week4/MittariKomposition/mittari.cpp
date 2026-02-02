#include "mittari.h"
#include <iostream>
using namespace std;

Mittari::Mittari()
{
    // mitä tänne tulee???
    lcdPtr = new LCD;
}


Mittari::~Mittari() {
    // mitä tänne tulee???
    delete lcdPtr;
    //lcdPtr = nullptr;

}

void Mittari::mittaus()
{

    float temp =dht.readTemperature();
    string s = lcdPtr->floatToString(temp);
    lcdPtr->print(s);
}

void Mittari::setup()
{
    cout << "mittari setup funktio"<<endl;
    dht.begin();
    lcdPtr->begin();

}
