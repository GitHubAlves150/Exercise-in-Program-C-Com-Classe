/*
        Este programa demostra o uso  de iteração do laço for
*/



#ifndef  RECURSAO_H
#define  RECURSAO_H

#include <iostream>
using std::cout;
using std::endl;

#include "recursao.hpp"


recursao::recursao()
{
	for(int i=0; i<=10; i++){
		_number[i]=0;
	}
	_numero=0;
}

void  recursao::setRecursao(int numero)
{
	//usado para debugar ----cout<<" "<<numero<<endl;
	_numero=numero;
	for(int i=0; i<=10; i++)
	{
		_number[i]=(_numero*i);
	}
}


int recursao::getRecursao()
{
  	
return _number[10];
}


void recursao::Toshow()
{

	for(int i=0; i<=10; i++)
	{
		cout<<" "<< i <<" x "<< _numero <<" = "<<_number[i]<<endl;
	}

}

#endif



