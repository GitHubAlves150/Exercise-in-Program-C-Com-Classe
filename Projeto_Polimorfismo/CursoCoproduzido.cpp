#include <iostream>
using namespace::std;

#include "CursoCoproduzido.hpp"


CursoCoproduzido::CursoCoproduzido(const string &curso, const string &empresa,//membros da básica
                                   double taxa, int quantidade, double valorFixo)//mombros da derivada
    :CursoAfiliado(curso, empresa, taxa, quantidade)
{
    setValorFixo(valorFixo);
}


void   CursoCoproduzido::setValorFixo(double valorFixo)
{
    cursoValorFixo=(valorFixo<0.0)? 0.0:valorFixo;
}
double  CursoCoproduzido::getValorFixo()const
{
    return cursoValorFixo;
}

double   CursoCoproduzido::calculaLucro()const
{
    return getValorFixo() + CursoAfiliado::calculaLucro();
}

void CursoCoproduzido::mostraValores()const
{
    CursoAfiliado::mostraValores();
    cout<<"\nValor fixo $ "<<getValorFixo();
}
