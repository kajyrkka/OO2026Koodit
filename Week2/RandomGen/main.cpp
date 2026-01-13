#include <iostream>
#include "lcd.h"

using namespace std;

int main()
{

    LCD olio;
    olio.begin();

    for(int i = 0;i<10;i++)
    {
        cout<<"Lampotila = ";
        olio.print("jep");
        cout<<endl;
    }
    return 0;
}
