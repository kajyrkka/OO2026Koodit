#include "derivedclass.h"
#include <iostream>
using namespace std;

DerivedClass::DerivedClass()
{
    cout<<"Derived class constructor allocates lots of memory"<<endl;
}
DerivedClass::~DerivedClass()
{
    cout<<"Derived class destructor frees all memory Derived constructor allocated."<<endl;
}
void DerivedClass::test()
{
    cout<<"Derived test funktion!!"<<endl;
}
