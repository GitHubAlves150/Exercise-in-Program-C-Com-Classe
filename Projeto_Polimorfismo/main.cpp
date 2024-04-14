#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;


#include "Cursos.hpp"
#include "CursosProprio.hpp"
#include "CursoAfiliado.hpp"
#include "CursoCoproduzido.hpp"


//protótipo das funções
void chamadaComPonteiro(const Cursos *const);


int main()
{
    cout << "Hello REAA!" << endl;

    cout<<fixed <<setprecision(2);//precisão de duas casas deicimais

    //--------------------------------------------------------------
    //cria objetos para as classes desenvolvidas
    CursoProprio      cursoProgramacao("Aprenda a Programar", "HDB3", 129.99);
    CursoAfiliado     cursoIngles("Ingles Completo", "Language Inc", 0.3, 150);
    CursoCoproduzido  cursoMecatronica("Construa Robôs", "WR e RW", 0.5, 220, 227.0);

    //--------------------------------------------------------------
    //cria ponteiros que apontam para os objetos
    CursoProprio      *ProgramacaoPtr =0;
    CursoAfiliado     *InglesPtr      =0;
    CursoCoproduzido  *MecatronicaPtr =0;

    //--------------------------------------------------------------
    //vinculação estatica
    cursoProgramacao.mostraValores();
    cout <<"\nLucro Curso Produzido $: "<<cursoProgramacao.calculaLucro();
    cout <<endl;

    cursoIngles.mostraValores();
    cout <<"\nLucro Curso Afiliado $: " <<cursoIngles.calculaLucro();
    cout<<endl;

    cursoMecatronica.mostraValores();
    cout<<"\nLucro Curso Coproduzido $: " <<cursoMecatronica.calculaLucro();
    cout<<endl;

    cout<<"\n--------------------------------------"<<endl;


    //--------------------------------------------------------------
    //ponteiros apontam para os objetos
    ProgramacaoPtr= &cursoProgramacao;
    InglesPtr     = &cursoIngles;
    MecatronicaPtr= &cursoMecatronica;

    //--------------------------------------------------------------
    //utiliza vinculação dinamica(polimorfismo)
    chamadaComPonteiro(ProgramacaoPtr);
    chamadaComPonteiro(InglesPtr);
    chamadaComPonteiro(MecatronicaPtr);

    cout <<"\n\nFim.."<<endl;
    while(1);




    return 0;
}


void chamadaComPonteiro(const Cursos *const classeBasicaPtr)
{
    classeBasicaPtr->mostraValores();
    cout<<"\nLucro do Curso $: "<<classeBasicaPtr->calculaLucro()<<"\n";
}












