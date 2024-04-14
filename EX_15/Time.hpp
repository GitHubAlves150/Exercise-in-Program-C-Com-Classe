#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <iomanip>


class Time{

    public:
        Time(int h=0, int m=0, int s=0);//Construtor
        void setTime(int h, int m, int s); //consfigura hora, minuto, segundo
        void setHour(int h);               //Conofigura hora
        void setMinute(int m);             //Configura minuto
        void SetSegundo(int s);            //Configura segundo
        int getHour();                     //Retorna Hora
        int getMinute();                   //Retonra minuto
        int getSecond();                   //Retorna Segundo
        void printUniversal();             //Imprime a hora no formato data/hora universal
        void printStandard();              //imprime hora no formato-padrao data /hora
      
    private:
        int hour,                          //horas      0-23
            minute,                        //minutos    0-59
            seconds;                       //segundos   0-59


};
#endif