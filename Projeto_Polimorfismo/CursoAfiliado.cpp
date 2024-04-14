
#include <iostream>
using namespace::std;

#include "CursoAfiliado.hpp"

CursoAfiliado::CursoAfiliado(const string &curso, const string &empresa, double taxa, int quantidade):
    Cursos(curso, empresa)//construtor da classe básica
{
    setTaxa(taxa);
    setQuantidade(quantidade);
}

void    CursoAfiliado::setTaxa(double taxa)
{
    taxaPercent=taxa;
}
double  CursoAfiliado::getTaxa()const
{
    return taxaPercent;
}

void    CursoAfiliado::setQuantidade(int quantidade)
{
    quantidadeVendas=(quantidade<0)? 0:quantidade;
}
int     CursoAfiliado::getQuantidade()const
{
    return quantidadeVendas;
}
double CursoAfiliado::calculaLucro()const
{
    return getTaxa() * getQuantidade();
}

void CursoAfiliado::mostraValores()const
{
    cout<<"\nCurso ";
        Cursos::mostraValores();//reutiliza mostravalores da classe básica bastrata
    cout<<"\nTaxa: "<<getTaxa()
        <<"\nQuantidade: "<<getQuantidade()<<endl;
}

