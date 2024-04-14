#include <iostream>
using std::cout;
using std::endl;

#ifndef  CLASSEEXEMPLO_H
#define  CLASSEEXEMPLO_H

class ClassExemplo{

public:
ClassExemplo(int=0, int=0, int=0);
void setNumbers(int=0, int=0, int=0);

void PrintThis();
private:
int a, b, c;


};



#endif // CLASSEEXEMPLO_H

