// sobrecarga de operadores
// Lucas Lorenço Alves
// Data: setembro de 2023

#include <iostream>
using namespace std;
#include "Vet3D.h"

int main()
{
    Vet3D P1(10, 4, 5),
          P2(4, 6, 5),
          P3;

    P3=P1 + P2;

    cout<<"P3(" << P3.getX() << ',' << P3.getY() << ',' << P3.getZ() << ")" << endl;

    cout<<"...Fim.."<<endl;
    while(1);

    return 0;
}
