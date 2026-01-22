#include "sonson.h"
#include <iostream>

SonSon::SonSon(string ss, string s, string f):Son(s,f)
{
    sonsonName = ss;
    cout<<"Sonson = "<<sonsonName
         <<" created"<<endl;
}

SonSon::~SonSon()
{
    cout<<"Sonson = "<<sonsonName
         <<" deleted"<<endl;
}

void SonSon::printEducation()
{
cout<<"Sonson education = taivaanrannan maalari "<<endl;
}
