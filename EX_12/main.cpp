/*
    Programa que compara duas strings
    utilizado um sistema de senha
    Autor: Lucas Lorenço Alves
    Data: Janeiro de 2023
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void funcao();


int main()
{
	char senha[21]=".....";
	char entrada[21]=".....";
	int tentativa=3;

	cout<<"Cria uma senha. Nao utilize espaços..."<<endl;
	cout<<">>>";

	cin>>senha;
	cout<<senha<<endl;
	cout<<"senha criada com sucesso!"<<endl;
	for(;;) {
		cout<<"Entre com a sua senha: ";
		cin>>entrada;


		if(strcmp(senha, entrada)==0) {
			cout<<"Senha correta...."<<endl;
			funcao();
			break;
		} else {
			cout<<"Senha incorreta......"<<endl;
			if(tentativa==0) {
				cout<<"----Procure o suporte TI para redefinir sua senha.....\n";
				break;
			}

			cout<<"voce tem mais "<<tentativa<<endl;
			--tentativa;
		}
	}






	system("PAUSE");
	return 0;
}





void funcao()
{
	cout<<"parabens vc entrou na funcao....\n";

}
