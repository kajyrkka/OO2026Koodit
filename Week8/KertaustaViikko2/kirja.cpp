#include "kirja.h"
#include <iostream>



Kirja::Kirja(string s1, string s2, int n)
{
    nimi = s1;
    tekija = s2;
    sivumaara = n;
}

void Kirja::tulostaTiedot()
{
    cout<<"Kirjan nimi = "<<nimi<<endl;
    cout<<"Kirjan tekija = "<<tekija<<endl;
    cout<<"Kirjan sivumaara = "<<sivumaara<<endl;
}
