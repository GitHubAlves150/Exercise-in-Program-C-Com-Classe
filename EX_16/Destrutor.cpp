#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Destrutor.hpp"

Destrutor::Destrutor(int numero) //desclarando um construtor
{
    cout<<"construtor gerou o objeto>> "<<numero<<endl;
    NumeroId=numero;
}//end DestrutorTeste

Destrutor::~Destrutor()          //desclarando um destrutor
{

    cout<<"O destrutor Limpou o objeto>> "<<NumeroId<<endl;

}





