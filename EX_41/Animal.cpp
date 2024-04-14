#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
#include "Animal.hpp"


animal::animal()
{
	_pele=" ";
	_classificacaoAnimal=" ";
	_idade=0;
	_altura=0;
};

void animal::setAnimal(string pele, string classificacao)
{
	_pele=pele;
	_classificacaoAnimal=classificacao;
//---------------Mostra os valores--------------------------
	cout<<"\nTipo de Pele: "<<_pele
        <<"\nclassificacao animal: "<<_classificacaoAnimal;


}


void animal::setAnimal(string pele, string classificacao, float altura, int idade)
{
	_pele=pele;
	_classificacaoAnimal=classificacao;
	_altura=altura;
	_idade=idade;
//-----------Mostra os valores------------------------------
	cout<<"\nTipo de Pele: "<<_pele
        <<"\nclassificacao animal: "<<_classificacaoAnimal
        <<"\nIdade: "<<_idade
        <<"\naltura: "<<_altura<<endl;
}



void animal::Toshow()
{
	/*
	cout<<"\nTipo de Pele: "<<_pele
	<<"\nclassificacao animal: "<<_classificacaoAnimal
	<<"\nIdade: "<<_idade
	<<"\naltura: "<<_altura<<endl;
	*/
}
