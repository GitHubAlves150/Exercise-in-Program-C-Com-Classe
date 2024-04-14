#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Animal.hpp"

#include <string>
using std::string;

int main()
{

string nome;
string pele;
int idade;
float altura;

animal Animal;//Objeto Animal do tipo classe animal
cout<<"Este programa mostra o mecanismo de sobrecarga de operadores em C++\n"
	"com arquivos header"<<endl;
cout<<"\n=========================================================="<<endl;
cout<<"Digite o nome do animal: ";
cin>>nome;

cout<<"Tipo de pele do animal: ";
cin>>pele;


cout<<"Digite a idade do animal: ";
cin>>idade;

cout<<"Digite a altura do animal";
cin>>altura;

//--------------------------jogando os valores para as funções---------------------------
Animal.setAnimal(nome, pele, altura, idade);

fflush(stdin);
cout<<"\n-------------------------------------------\n";
fflush(stdin);
cout<<"Digite o nome do animal: ";
cin>>nome;

cout<<"Tipo de pele do animal: ";
cin>>pele;


Animal.setAnimal(pele, nome);

//Animal.Toshow();

return 0;
}

