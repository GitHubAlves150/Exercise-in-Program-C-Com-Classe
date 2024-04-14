#include <iostream>

using namespace std;

#include "Escalar.hpp"

int main()
{
    cout << "Hello world!" << endl;
    Escalar Ponto(2, 2, 2),
            K(2, 2, 2),
            PK;

    cout<<"Escalar: " << Ponto._getx() << ", " << Ponto._gety() << ", " << Ponto._getz() <<endl;
    PK=K*Ponto;
    cout<<"Escalar: " << PK._getx() << ", " << PK._gety() << ", " << PK._getz() <<endl;

    return 0;
}
