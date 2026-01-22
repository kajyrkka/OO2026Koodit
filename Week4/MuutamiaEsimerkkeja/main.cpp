#include "baseclass.h"
#include "derivedclass.h"
#include <iostream>
using namespace std;

int main()
{

    BaseClass *basePtr = new BaseClass;
    DerivedClass * derivedPtr = new DerivedClass;

    cout<< endl;
    cout<<endl;
    BaseClass * ptr = derivedPtr;
    ptr->staattinenTest();

    delete ptr;
    cout<< endl;
    cout<<endl;
    delete basePtr;
    cout<< endl;
    cout<<endl;
    BaseClass::staattinenTest(); //HOX kutsuttiin luokan metodia tekemättä olioa
    BaseClass::staattinenTest();
    BaseClass::staattinenTest();




    return 0;
}
