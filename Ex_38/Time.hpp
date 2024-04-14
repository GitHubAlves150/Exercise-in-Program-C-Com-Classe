//Arquivo lib .hpp

//Encapsulamento de diretivas
#ifndef TIME_H
#define TIME_H

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;


class Time
{
	public:
	Time(int=0, int=0, int=0);				//Qunado não for dito nada como argumento, então é setado para zero	
//fuunçoes  setting
	void setTime(int h, int m, int s); 			//consgura hora, minuto, segundo
	void setHour(int h);					//configura a hora
	void setMin(int m);					//consfigura os minutos
	void setSec(int s);					//configura os segundos
//funções gettiing
	int getHour();						//retorna hora
	int getMin();						//retorna minutos
	int getSec();						//retorna segundos
//funçoes que apresentam informações para usuário
	void show();						//mostra a hora no formato data e hora universal
	void Standard();					//mostra a hora no formata padrao
//dados privados, acessados somete por funções
	private:
	int _hour,						//Hora 0-23
	    _min,						//Minutos 0-59
            _sec;						//segundos 0-59


};


#endif //TIME_H
