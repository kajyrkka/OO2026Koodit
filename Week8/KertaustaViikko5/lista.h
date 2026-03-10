#ifndef LISTA_H
#define LISTA_H
#include "solmu.h"

class Lista
{
public:
    void lisaa(Solmu *);
    void poista(Solmu *);
    void tulosta();
private:
    Solmu * alku = nullptr;
};

#endif // LISTA_H
