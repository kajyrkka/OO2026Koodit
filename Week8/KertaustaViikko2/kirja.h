#ifndef KIRJA_H
#define KIRJA_H

#include <string>
using namespace std;

class Kirja
{
public:
    Kirja(string,string,int);
    void tulostaTiedot();
private:
    string nimi;
    string tekija;
    int sivumaara;
};

#endif // KIRJA_H
