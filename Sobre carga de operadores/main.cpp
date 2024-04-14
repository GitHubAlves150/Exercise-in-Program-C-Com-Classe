#include <iostream>
using namespace std;

#include "Operadores.hpp"

int main()
{
    cout << "Bem vindo sobrecarga de operadores" << endl;
    Vetor3d VetA(3,2,5);
    Vetor3d VetB(1, 2, 3);
    Vetor3d VetC=VetA+VetB;
    VetC.Display();
    return 0;
}
