//Exemplo  com Makefile
//programa exemplificando o uso de sobrecarga de operadores


#include "sobrecarga.hpp"
#include	<cmath>
#include	<iostream>
using	std::cout;
using	std::endl;


Sobrecarga::Sobrecarga(int a, int b, int c){
	setsoma(a, b, c);
}


void Sobrecarga::setsoma(int a, int b)
{
	resultado=a + b;

}

void Sobrecarga::setsoma(int a, int b, int c)
{
	resultado=a + b + c;
}

int Sobrecarga::getsoma()
{
	return resultado;
}

void Sobrecarga::show()
{
	cout<<"Resultado: "<<resultado<<endl;

}



