#include <iostream>

using namespace std;
#include "kirja.h"
int main()
{
    cout << "Hello World!" << endl;

    Kirja kirja("Punarutto","Ilkka Remes",543);
    kirja.tulostaTiedot();
    return 0;
}
