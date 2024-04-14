#ifndef ARRAYLIMIT_H
#define ARRAYLIMIT_H

#include <stdexcept>
using std::runtime_error;


class ArrayLimit:public runtime_error
{

public:
    ArrayLimit():
    runtime_error("Array esta fora do limit..")//cosntrutor do runtime_erro
    {
        //vazio
    }

};

#endif // ARRAYLIMIT_H
