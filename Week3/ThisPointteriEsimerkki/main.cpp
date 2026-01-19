#include <iostream>
#include "testi.h"

using namespace std;

int main()
{
    Testi olio1;
    Testi olio2;
    olio1.setText("Olion 1 teksti");
    olio2.setText("Olion 2 teksti");
    cout << olio1.getText() << endl;
    cout << olio2.getText() << endl;
    return 0;
}
