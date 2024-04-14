#include <iostream>
using std::cout;
using std::endl;

#include "Increment.hpp"

//===========================================Inicio Construtor
Increment::Increment(int c, int i):
	Count(c),  //inicializa count e increment com valores 'c' e 'i'.
	increment(i)//inicializa  o membro const com i
{
	//------Corpo vazio

}
//===========================================Fim Construtor
void Increment::addIncrement()
{
    Count+=increment;
}


//===========================================Inicio Imprime valores de cont e Increment
void Increment::print()const
{
    cout<<" count = "<< Count <<" Increment = "<< increment<<endl;

}
//===========================================Fim Imprime valores de cont e Increment
