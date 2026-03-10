#ifndef AUTO_H
#define AUTO_H
#include "moottori.h"

class Auto
{
public:
    Auto();
private:
    Moottori etuMoottori;
    Moottori * pTakaMoottori;
};

#endif // AUTO_H
