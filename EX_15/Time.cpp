#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.hpp"

//===================================================Construtor
Time::Time(int h, int m, int s)
{
	setTime(h, m, s);//Configura a hora inicial
}//end Time

//===================================================
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	SetSegundo(s);

}//end setTime

//===================================================
void Time::setHour(int h)               //Conofigura hora
{
	hour=( h>=0 && h<24) ? h : 0;    //validacão das horas

}//end setHour

//===================================================
void Time::setMinute(int m)             //Configura minuto
{
	minute=(m>=0 && m < 60) ? m : 0;  //validação dos minutos
}//end setMinute
//===================================================

void Time::SetSegundo(int s)            //Configura segundo
{

	seconds=(s>=0 && s < 60) ? s : 0; //validação dos segundos
}//end setSegundo

//===================================================
int Time::getHour()                     //Retorna Hora
{
	return hour;

}//end getHour

//===================================================
int Time::getMinute()//Retonra minuto
{
	return minute;
}//end Minutos

//===================================================
int Time::getSecond()                   //Retorna Segundo
{
    return seconds;
}
void Time::printUniversal()             //Imprime a hora no formato data/hora universal
{
    cout<<setfill('0')<<setw(2)<<getHour() <<':'
                      <<setw(2)<<getMinute() <<':'
                      <<setw(2)<<getSecond();
}//end printuniversal

//===================================================
//Imprime no formato padrao HH:MM:SS
void Time::printStandard()              //imprime hora no formato-padrao data /hora
{
   cout<< setfill('0')<<setw(2)<<( ( getHour()==0 || getHour()==12) ? 12 : (getHour()%12) ) <<':'
                      <<setw(2)<< getMinute()<< ':'
                      <<setw(2)<< getSecond()<< (getHour()<12 ? " AM " : " PM ");
}//end printStandard







