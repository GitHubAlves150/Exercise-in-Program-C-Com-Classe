#include <iostream>     //Biblioteca padrão do C++
#include <cstdlib>
#include "library.hpp"  //biblioteca local

using namespace std;    //Inclusão de funções padrões



void Aniversario::input()
{
	cout<<"DIGITE O MES EM QUE ESTA USANDO ESTE SISTEMA: ";
	cin>>month;
	cout<<"DIGITE O DIA EM QUE ESTA USANDO ESTE SISTEMA: ";
	cin>>day;

	if( (day<1) || (day >31)  || (month>12) ||  (month<1)   ) {
		cout<<"DATAS FORA DE ESPERADO!";
		exit(1);
	}
}

void Aniversario::out()
{
	switch(month) {
		case 1:
			cout<<"Janeiro";
			break;
		case 2:
			cout<<"Fevereiro";
			break;
		case 3:
			cout<<"Março";
			break;
		case 4:
			cout<<"Abril";
			break;
		case 5:
			cout<<"Maio";
			break;
		case 6:
			cout<<"Junho";
			break;
		case 7:
			cout<<"Julho";
			break;
		case 8:
			cout<<"Agosto";
			break;
		case 9:
			cout<<"Setembro";
			break;
		case 10:
			cout<<"Outubro";
			break;
		case 11:
			cout<<"Novembro";
			break;
		case 12:
			cout<<"Dezembro";
			break;
		default:
			cout<<"Erro! entre em contato com o forncedor do software:";
	}
	cout<<" "<<day;
}


//==========================================Utiliza iostream e cstdlib
void Aniversario::Set(int newMonth, int newDay)
{
	if( (newMonth >=1) && (newMonth<=12)  ) {
		month=newMonth;  //variavel membro é privado;
	} else {
		cout<<"valor ilegal para mês!";
		exit(1);
	}
	if( (newDay >=1) && (newDay <=31)) {
		day=newDay;
	} else {
		cout<<"valor ilegal para dia!";
		exit(1);
	}
}

//===========================================sobrecarga de funcao
void Aniversario::Set(int newMonth)
{
	if( (newMonth>=1) && (newMonth<=12) ) {
		month=newMonth;
	} else {
		cout<<"Valor ilegal para mes! programa finalizando!";
		exit(1);
	}
	day=1;
}


//==============================================Funcoes de acesso
int Aniversario::getMonthNumber()
{
	return month;
}

int Aniversario::getDay()
{
	return day;
}


