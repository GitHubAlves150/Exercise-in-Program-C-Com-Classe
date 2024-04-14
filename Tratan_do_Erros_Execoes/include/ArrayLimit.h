#ifndef ARRAYLIMIT_H
#define ARRAYLIMIT_H

#include <stdexcept>
using std::runtime_error;

class ArrayLimit: public runtime_error
{
    public:
        ArrayLimit():runtime_error("Array fora do limite 0 a 9")
        {


        }



    private:
};

#endif // ARRAYLIMIT_H
