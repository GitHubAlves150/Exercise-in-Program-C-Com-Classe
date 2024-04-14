//Arquivo Time.cpp

#include <iostream>
using std::cout;
using std::endl;

#include "Time.hpp"

Time::Time(int hour, int min, int sec)
{
	setTime(hour, min, sec); //È passado para a própria função set pra configurar os dados privados 
}

//=================================Funções setting==================================
//Funçãoque configura as horas;
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMin(m);
	setSec(s);
}
//Fim da funçao configura as horas

void Time::setHour(int h)  //Consigura a hora para que esteja dentro do range das 24hs previstas
{
	_hour = (h>=0 && h<24)?h:0;
}//Fim da função

//Função que configura os minutos
void Time::setMin(int m)
{
	_min = (m>=0 && m<60)?m:0; //a variavel m esta dentro do range de zeroa á 60? Se está _min recebe o valor de m senão recebe zero 
}//Fim da funçao  que configura os mintos

void Time::setSec(int s)
{
	_sec = (s>=0 && s<60) ? s : 0; 
}
//Fim da função que configura os segundos

//=================================Inico das funções getting=============================>
//Função que retorna as horas
int Time::getHour()
{
	return _hour;
}
// da função que retorna as horas

//Função que retorna os minutos
int Time::getMin()
{
	return _min;
}
//Fim da funação que retorna os mintos


//inicio da função que retorna os segundos
int Time::getSec()
{
	return _sec;
}
//Fim da função que retorna os segundos

//=================================Inicio das funções que informam dados para o usuário===================>

void Time::show()
{
	cout<<getHour()<<":"<<getMin()<<":"<<getSec()<<endl;
}







