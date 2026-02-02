#include "lcd.h"
#include <iostream>
using namespace std;

void LCD::beginLCD()
{
    cout << "LDC begin"<< endl;
    text = "LCD alustettu";

}

void LCD::print(string s)
{
    cout<<"LCD printtaa string = "<<s<<endl;
}

string LCD::floatToString(float luku)
{
    string s = to_string(luku);
    return s;
}
