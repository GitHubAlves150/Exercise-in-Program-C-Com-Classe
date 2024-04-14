#include <iostream>

using namespace std;

#include "ProdutoEscalar.hpp"

int main()
{
    cout << "Hello REAA!" << endl;

    prodEscalar P1(2, 2, 2),
                P2;
    int k=10;

    P2=P1*k;

    cout<<"("
        <<P1.getX()
        <<", "
        <<P1.getY()
        <<", "
        <<P1.getZ()
        <<")"
        <<endl;


    return 0;
}
