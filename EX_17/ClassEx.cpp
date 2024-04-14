#include "ClassEx.hpp"

ClassEx::ClassEx(int a1, int b1, int c1)
{
      a=a1;
      b=b1;
      c=c1;
}//end fim do construtor

void ClassEx::printThis()
{
    cout<<"\na = "<< a <<endl;
    cout<<"\nb = "<< b <<endl;
    cout<<"\nc = "<< c <<endl;
}