#include "mittari.h"
#include <iostream>
using namespace std;


void Mittari::mittaus()
{
    float temp = readTemperature();
    string s = floatToString(temp);
    print(s);
}

void Mittari::setup()
{
    cout << "mittari setup funktio"<<endl;
    beginDHT();
    beginLCD();

}
