#include "auto.h"

#include <iostream>
using namespace std;

Auto::Auto() {
    cout<<"kaynnistan etumoottorin"<<endl;
    etuMoottori.kaynnista();

    pTakaMoottori = new Moottori;
    cout<<"kaynnistan takamoottorin"<<endl;
    pTakaMoottori->kaynnista();

    delete pTakaMoottori;

}
