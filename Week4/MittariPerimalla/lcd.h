#ifndef LCD_H
#define LCD_H
#include <string>
using namespace std;

class LCD
{
public:
    void beginLCD();
    void print(string);
    string floatToString(float);

private:
    string text="";

};

#endif // LCD_H
