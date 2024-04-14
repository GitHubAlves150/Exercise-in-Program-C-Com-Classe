/*
O programa a baixo faz uma soma de horas, minutos e segundos com a hora atual.
*/
#include <iostream>
using namespace std;
#include "sobrecargaOperadores.hpp"

int main()
{
    cout << "Hello REAA!" << endl;

    operador Relogio(2, 50, 0),
             Daqui(3, 0, 0),
             horaAtual;


    cout<<"Hora atual: "
        <<Relogio.getHora()
        <<":"
        <<Relogio.getMinutos()
        <<":"
        <<Relogio.getSegundos()
        <<"mim"
        <<endl;

    horaAtual=Relogio+Daqui;

    cout<<"Hora atual: "
        <<horaAtual.getHora()
        <<":"
        <<horaAtual.getMinutos()
        <<":"
        <<horaAtual.getSegundos()
        <<"mim"
        <<endl;



    return 0;
}
