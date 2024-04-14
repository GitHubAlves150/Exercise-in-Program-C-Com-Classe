#include <iostream>
using namespace::std;

#include "CursosProprio.hpp"

CursoProprio::CursoProprio(const string &curso, const string &empresa, double valor):
    Cursos(curso, empresa)//construtor da classe básica
{
    setValorCurso(valor);//do parametro derivada
}

void    CursoProprio::setValorCurso(double valor)
{
    valorCurso=(valor < 0.0)? 0.0:valor;
}
double  CursoProprio::getValorCurso()const
{
    return valorCurso;
}

double CursoProprio::calculaLucro()const
{
    return getValorCurso();
}

void   CursoProprio::mostraValores()const
{
    cout<<"\nCurso: ";
        Cursos::mostraValores();
    cout<<"\nValor do cruso $ "<<getValorCurso();
}
