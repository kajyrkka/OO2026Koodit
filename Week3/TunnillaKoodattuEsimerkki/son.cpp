#include "son.h"
#include <iostream>

Son::Son(string isa,string poika) : Father(isa)
{
    // Isä pitää olla hengissä jo nyt!!!
    sonName = poika;
    cout<<"Son = "<<sonName
         <<" created"<<endl;
    FatherNickName = "Isukki";
}

Son::~Son()
{
    cout<<"Son = "<<sonName
         <<" deleted"<<endl;
}

void Son::printEducation()
{
    cout<<"Son education = koodari"<<endl;
}
