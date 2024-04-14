#include <iostream>
#include <cstdlib>
#include "library.hpp"

using namespace std;

Menu::Menu()
{
	opt_var=0;
}


void Menu::subMenu()
{
	do {
		cout<<"ESCOLHA UM SUB-MENU:"<<endl;
		char *Menu[5]= {"(1)SUB-Menu-A",
		                "(2)SUB-Menu-B",
		                "(3)SUB-Menu-C",
		                "(4)VOLTAR"
		               };
		for(int i=0; i<4; i++) {
			cout<<Menu[i]<<endl;
		}


		cin>>opt_var;
		system("cls");
		cout<<endl;
		switch(opt_var) {
			case 1:
				cout<<Menu[0]<<endl;
				break;
			case 2:
				cout<<Menu[1]<<endl;
				break;
			case 3:
				cout<<Menu[2]<<endl;
				break;
			case 4://sair
				break;
			default:
				cout<<"Opcao invalida................"<<endl;

		}
	} while(opt_var !=4);



}
