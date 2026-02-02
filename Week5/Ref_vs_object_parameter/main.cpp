#include "myclass.h"
#include <iostream>
using namespace std;

void test1(myClass);
void test2(myClass *);
void test3(myClass &);
void aliohjelmaTesti(int);

int main()
{
    myClass olio;  // suoritetaan konstruktori
    myClass * ptr = &olio;
    myClass & ref = olio;

    test1(olio);
    test2(ptr);
    test3(ref);
    int luku = 1;
    aliohjelmaTesti(luku);
    cout<<"luvun arvo paaohjelmassa = "<< luku << endl;


    return 0;
}

void test1(myClass M)
{
    M.print();
}
void test2(myClass * ptr)
{
    ptr->print();
}
void test3(myClass & R)
{
    R.print();
}
void aliohjelmaTesti(int luku)
{
    luku = luku + 10;
    cout<<"luvun arvo aliohjelmassa = "<< luku << endl;
}
