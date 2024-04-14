#ifndef BASE_H
#define BASE_H
#include <cstring>
using std::string;
class base
{
public:

    virtual string NameOf();//função virtual
    virtual void InvokinClass();//NoVirtual function
    virtual double componente()=0;//virtual pura

};


#endif // BASE
