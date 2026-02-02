#ifndef BASECLASS_H
#define BASECLASS_H

class BaseClass
{
public:
    BaseClass();
    virtual ~BaseClass();
    static void staattinenTest();
    virtual void test();
    inline static int lukumaara = 0;
};

#endif // BASECLASS_H
