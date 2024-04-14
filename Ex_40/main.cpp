//Exemplo  com Makefile
//programa exemplificando o uso de sobrecarga de operadores

#include "sobrecarga.hpp"

#include <iostream>
using	std::cout;
using	std::endl;

int main()
{

cout<<"Bem vindo ao progrma de calcular funcao de primeiro e segundo grau"<<endl;

Sobrecarga operador(1, 1, 1);
operador.show();

operador.setsoma(2, 2);
operador.show();


operador.setsoma(3, 3, 30);
operador.show();


return 0;
}

