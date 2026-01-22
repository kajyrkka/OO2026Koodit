#include <iostream>

using namespace std;
#include "mittari.h"

int main()
{
    cout << "Mittari example!" << endl;

    Mittari mittari;
    mittari.setup();
    mittari.mittaus();

    return 0;
}
