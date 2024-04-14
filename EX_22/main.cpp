/*

    Exercicio envolvendo a funcao friends em C++
    Exercicio proposto no cruso C++ do WRKits de Wagner Rambo
    Autor: Lucas Alves
    Data: janeiro de 2023      
*/


#include <iostream>
using std::endl;
using std::cout;


#include <cstdlib>
using std::system;

#include "Potencia.hpp"


int main()
{
    pot Potencia;
    
    PVI(Potencia, 12, 2);
    Potencia.results();
    
    system("PAUSE");
    return 0;
}
