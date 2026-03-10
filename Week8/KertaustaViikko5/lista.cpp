#include "lista.h"
#include <iostream>

using namespace std;


void Lista::lisaa(Solmu * ptr)
{
    if(alku == nullptr)
    {
        alku = ptr;
        return;
    }
    Solmu * tempPtr = alku;
    alku = ptr;
    alku->next = tempPtr;
}

void Lista::poista(Solmu * ptr)
{
    Solmu * edellinen = alku;
    Solmu * seuraava = edellinen->next;
    if(alku == ptr) // poistettava on eka
    {
        alku = alku->next;
        return;
    }
    while(seuraava)
    {
        if(seuraava == ptr)
        {
            edellinen->next = seuraava->next;
        }
        edellinen = seuraava;
        seuraava = seuraava->next;
    }
}

void Lista::tulosta()
{
    Solmu * temp = alku;
    while(temp)
    {
        cout<<temp->getLuku()<<endl;
        temp = temp->next;
    }
}
