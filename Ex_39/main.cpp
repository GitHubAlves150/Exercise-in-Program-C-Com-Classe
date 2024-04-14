#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "destrutor.hpp"

//Protótipo da função
void funcao();

//Objeto global
Destrutor objeto1(1);

int main()
{
	cout<<"inicio da funcao principal"<<endl;
	Destrutor objeto2(2);
	static Destrutor objeto3(3);

	funcao();
	cout<<"Fm da função principal"<<endl;
return 0;
}



void funcao()
{
	cout<<"inicio da funcao auxiliar"<<endl;
	Destrutor objeto4(4);
	static Destrutor objeto5(5);
	cout<<"Fim da funcao auxiliar"<<endl;

}
