#include <ctime>
#include <stdio.h>
#include <iostream>
using namespace::std;



int main()
{
    cout << "Bem vindo ao programa que lê a hora do sistema" << endl;

    time_t Data_tempo;

    time(&Data_tempo);

    struct tm *tempo = localtime(&Data_tempo);
    struct tm *data  = localtime(&Data_tempo);

    int Dia   = data->tm_mday;
    int mes   = data->tm_mon;
    int week  = data->tm_wday;
    int ano   = data->tm_year;

    int hora = data->tm_hour;
    int minu  = data->tm_min;
    int seg   = data->tm_sec;

    cout << Dia
         << "/"
         << week
         << "/"
         << mes
         << "/"
         <<  ano+1900
         << " - "
         << hora
         << ":"
         << minu
         << ":"
         << seg;


    return 0;

}
