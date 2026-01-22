#include <iostream>
#include "mittari.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Mittari mittari;
    mittari.setup();
    mittari.mittaus();
    return 0;
}
