#include "mittari.h"
#include <iostream>
using namespace std;


void Mittari::mittaus()
{
    float temp = dhtolio.readTemperature();
    string s = lcdolio.floatToString(temp);
    lcdolio.print(s);
}

void Mittari::setup()
{
    cout << "mittari setup funktio"<<endl;
    dhtolio.begin();
    lcdolio.begin();

}
