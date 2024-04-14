#include <iostream>
using std::endl;
using std::cout;

#include "destrutor.hpp"

Destrutor::Destrutor(int number)
{
	cout<<"O construtor criou um objeto:"<<number<<endl;
	NumId=number;
}

Destrutor::~Destrutor()
{
	cout<<"O destrutor limpor o objeto: "<<NumId<<endl;
}
