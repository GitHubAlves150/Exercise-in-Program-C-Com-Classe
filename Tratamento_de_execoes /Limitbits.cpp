#include <iostream>
using std::cout;
using std::endl;
#include "Limitbits.hpp"

processador_16::processador_16()
{
}

int processador_16::Mult(int A, int B)
{
    return A/B;
}

void processador_16::Analize(int16_t numero)
{
    if(numero <0)
    throw "Error..";
    cout << "Numero negativo" << endl;

}
