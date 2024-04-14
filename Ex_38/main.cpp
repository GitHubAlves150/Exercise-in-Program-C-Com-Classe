//Arquivoprincipal

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Time.hpp"

int main()
{
	int horas, minutos, segundos;

	Time Wach(0,0,2);
	Time Wach1(2);
	Wach.show();
	cout<<"\n\nRelogio da hora\n\n";
	Wach.setHour(20);
	Wach.setMin(33);
	Wach.setSec(12);
	Wach.show();
	cout<<"relogio 2"<<endl;
	Wach1.show();
	//Setando as horas de acordo com o usuario
	cout<<"Digite as horas:"<<endl;
	cin>>horas;

	cout<<"Digite os minutos: "<<endl;
	cin>>minutos;

	cout<<"Digite os segundos: "<<endl;
	cin>>segundos;
	Wach.setHour(horas);
	Wach.setMin(minutos);
	Wach.setSec(segundos);
	//Mostras as horas no formato padrão
	Wach.show();

	
return 0;
}

