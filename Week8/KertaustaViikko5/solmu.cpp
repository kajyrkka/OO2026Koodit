#include "solmu.h"

Solmu::Solmu(int n) {
    next = nullptr;
    luku = n;
}

int Solmu::getLuku()
{
    return luku;
}
