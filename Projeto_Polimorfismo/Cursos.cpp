
#include <iostream>
using namespace::std;

#include "Cursos.hpp"

Cursos::Cursos(const string &curso, const string &Empresa ):
    nomeCurso(curso), nomeEmpresa(Empresa)
{
    //vazio
}

void   Cursos::setNomeCurso(const string &curso)
{
    nomeCurso=curso;
}
string Cursos::getNomeCurso()const
{
    return nomeCurso;
}

void   Cursos::setNomeEmpresa(const string &empresa)
{
    nomeEmpresa=empresa;
}

string Cursos::getNomeEmpresa()const
{
    return nomeEmpresa;
}

/*virtual double calculaLucro()const=0//funçao virtual pura
{


}*/
 void Cursos::mostraValores()const
{
    cout<<getNomeCurso()<< " da empresa "
        <<getNomeEmpresa()<<endl;
}
