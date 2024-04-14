#ifndef  PRINTVAL_H
#define PRINTVAL_H

#include <iostream>
using std::cout;
using std::endl;



class DivTres{
    public:
       DivTres();
       void setValue(int val);
       void printThis();
    
    private:
        int valToPrint; 

};//end class Divtres

#endif  