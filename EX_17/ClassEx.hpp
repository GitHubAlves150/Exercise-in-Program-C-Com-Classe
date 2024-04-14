#include <iostream>
using std::cout;
using std::endl;


#ifndef CLASSEX_H
#define CLASSEX_H

class ClassEx
{
    
    public:
        ClassEx(int=0, int=0, int=0);
        void printThis();
    private:
        int a, b, c; 


};
#endif //CLASSEX_H