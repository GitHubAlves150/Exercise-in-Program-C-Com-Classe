/*
        Este programa demostra o uso  de iteração do laço for
	Para exemplificar o uso da recursividade.
Autor: Lucas Lorenço Alves
	Data: Maio de 2023
*/




#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "recursao.hpp"



int main()
{
system("clear");
int num=0;
char sair='a';

cout<<"Programa testado:"<<endl;
recursao sistem;

while(1)
{
	cout<<"Qual numero da tabuada quer gerar? "<<endl;
	cin>>num;

	sistem.setRecursao(num);
	sistem.Toshow();
	cout<<"Continuar? \n<sS>para sair do programa"
		<<"\n<nN>para continuar"<<endl;
	cin>>sair;
	if(sair=='S' || sair=='s')
		break;
	system("clear");
}
system("clear");
cout<<"--------OBRIGADO-------"<<endl;
return 0;
}
