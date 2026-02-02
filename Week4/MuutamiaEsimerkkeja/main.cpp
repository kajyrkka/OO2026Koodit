#include "baseclass.h"
#include "derivedclass.h"
#include <iostream>
using namespace std;

int main()
{

    BaseClass * basePtr = new BaseClass;  // allokoidaan muistia BaseClass luokan tarvitsema määrä
                                          // ja kutsutaan BaseClass luokan konstruktoria.
                                          // luotiin olio keosta = heap
    DerivedClass * derivedPtr = new DerivedClass;

    cout<< endl;
    cout<<endl;
    BaseClass * ptr = derivedPtr;
    ptr->staattinenTest();

    delete ptr;
    cout<< endl;
    cout<<endl;
    delete basePtr;   // vapauttaa muistin ja kutsuu destructoria.
    cout<< endl;
    cout<<endl;

    BaseClass olio;
    olio.staattinenTest();
    basePtr->staattinenTest();



    BaseClass::staattinenTest(); //HOX kutsuttiin luokan metodia tekemättä olioa
    BaseClass::staattinenTest();
    BaseClass::staattinenTest();




    return 0;

}
