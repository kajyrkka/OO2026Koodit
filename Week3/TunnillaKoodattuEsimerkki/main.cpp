//#include <iostream>
//#include "father.h"
//#include "son.h"
#include "sonson.h"
using namespace std;

int main()
{

    SonSon poika("PojanPoika","Teppo","Matti");
    //poika.printFatherName();
    poika.printEducation();
    poika.Son::printEducation();
    poika.Son::Father::printEducation();



    return 0;
}
