#include "myclass.h"
#include <iostream>
using namespace std;

myClass::myClass() {
    cout<<"myClass constructor allocates lots of mem"<<endl;
}

myClass::myClass(const myClass& other)
{
    cout<<"kopio konstruktori"<<endl;
}

myClass::~myClass()
{
    cout<<"myClass destructor deallocates lots of mem"<<endl;
}

void myClass::print() {
   cout<<"myClass prints"<<endl;
}
