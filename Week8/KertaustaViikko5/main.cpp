#include <iostream>

using namespace std;
#include "lista.h"
#include "solmu.h"

int main()
{
    cout << "Hello World!" << endl;
    Solmu s1(10);
    Solmu s2(20);
    Solmu s3(30);

    Lista lista;
    lista.lisaa(&s1);
    lista.lisaa(&s2);
    lista.lisaa(&s3);
    lista.tulosta();
    lista.poista(&s3);
    lista.tulosta();
    return 0;
}
