/*
Autor Lucas Alves
Data Jan/2024
Programa:função polimorfa que calcula sistemas lineares 2x2, 3x3, 4x4
*/


#include <iostream>
using namespace std;

#include "baseLinear.hpp"

int main()
{
    cout << "Hello Reaa" << endl;
    int vetor[9]={2, 3, 4, 5, 3, 6, 7, 8, 6};
    sarrus Eq1(vetor);
    Eq1.display();

    return 0;
}
