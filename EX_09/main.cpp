/*
    programa que demonstra o fluxo de Menus.
    mecanismo de acesso de cada menu.
*/

#include <iostream>
#include <cstdlib>
#include "library.hpp"


using namespace std;


int main()
{
	Menu Interface;
	int var_opt=0;
	do {


		cout<<"ESCOLHA UM MENU:"<<endl;
		char *Menu[5]= {"(1)Menu-Hora",
		                "(2)Menu-Temperatura",
		                "(3)Menu-Ajuda",
		                "(4)Menu-Sair"
		               };
		for(int i=0; i<4; i++) {
			cout<<Menu[i]<<endl;
		}



		cin>>var_opt;
		system("cls");
		cout<<endl;
		switch(var_opt) {
			case 1:

				Interface.subMenu();
				break;
			case 2:

				Interface.subMenu();
				break;
			case 3:

				Interface.subMenu();
				break;
			case 4://sair

				break;
			default:
				cout<<"Opcao invalida................"<<endl;

		}
	} while(var_opt !=4);
	cout<<"A equipe de desenvolvimento agradece..........\n";
	system("PAUSE");
	return 0;
}


