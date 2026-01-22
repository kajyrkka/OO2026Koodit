#include "mittari.h"
#include <iostream>
using namespace std;

Mittari::Mittari() {
    // mitä tänne tulee???
}


Mittari::~Mittari() {
    // mitä tänne tulee???
}

void Mittari::mittaus()
{

    float temp =readTemperature();
    string s = floatToString(temp);
    print(s);
}

void Mittari::setup()
{
    cout << "mittari setup funktio"<<endl;
    beginDHT();
    beginLCD();

}
