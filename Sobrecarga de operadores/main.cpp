#include <iostream>
using namespace::std;

#include "Geometria.hpp"


int main()
{
    cout << "Hello REAA!" << endl;
    Geometria P1(2, 3, 4),
              P2(1, 2, 3),
              P3;

    P3=P1+P2;
   cout<<"P3("
       <<P3.getX()
       <<','
       <<P3.getY()
       <<','
       <<P3.getZ()
       <<")" <<endl;


    return 0;
}
