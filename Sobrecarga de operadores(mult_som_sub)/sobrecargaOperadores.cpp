#include <iostream>
using namespace::std;


#include "sobrecargaOperadores.hpp"
//Atualiza os membros de dados
operador::operador(int h, int m, int s)
{
    hora    =h;
    minutos =m;
    segundos=s;
}
//sobrecarrega o operador +
operador operador::operator+(operador Time)
{
    hora      =hora+Time.hora;
    minutos   =minutos+Time.minutos;
    segundos  =segundos+Time.segundos;
    return operador(hora, minutos, segundos);
}


int operador::getHora()
{
    return hora;
}
int operador::getMinutos()
{
    return minutos;
}
int operador::getSegundos()
{
    return segundos;
}
