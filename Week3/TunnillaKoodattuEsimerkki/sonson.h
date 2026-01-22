#ifndef SONSON_H
#define SONSON_H
#include <string>
#include "son.h"

using namespace std;

class SonSon : public Son
{
public:
    SonSon(string,string,string);
    ~SonSon();
    void printEducation() override;
private:
    string sonsonName;
};

#endif // SONSON_H
