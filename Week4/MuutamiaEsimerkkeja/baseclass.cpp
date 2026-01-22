#include "baseclass.h"
#include <iostream>
using namespace std;

BaseClass::BaseClass()
{
    cout<<"Base class constructor allocates lots of memory"<<endl;
}
BaseClass::~BaseClass()
{
    cout<<"Base class destructor frees all memory Base constructor allocated."<<endl;
}

void BaseClass::test()
{
    cout<<"Base test funktion!!"<<endl;
}
void BaseClass::staattinenTest()
{
    cout<<"Base Staattinen funktio ei saa kayttaa luokan ei staattisia muuttujia!!"<<endl;
    cout<<"staattinen lukumaara = "<<lukumaara++<<endl;
}
