#include "father.h"
#include <iostream>

Father::Father(string s) {

    FatherName = s;
    cout<<"Father = "<<FatherName
        <<" created"<<endl;
}

Father::~Father() {
    cout<<"Father = "<<FatherName
         <<" deleted"<<endl;
}

void Father::printFatherName()
{
    cout<<"Father name = "<<FatherName<<endl;
    cout<<"Father nickname = "<<FatherNickName<<endl;
}

void Father::printEducation()
{
    cout<<"Father education = puuseppa "<<endl;
}
