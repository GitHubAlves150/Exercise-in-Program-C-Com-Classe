
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strcpy;


#include "Components.hpp"


int Componentes::compCnt=0;  //define e inicializa o membro de dados static no corpo do arquivo

//Contrutor: aloca memória dinãmica para as strings e incrementa o número de componentes
Componentes::Componentes(const char* const typeComp, const char *const modelComp)
{
    _typeComp=new char[strlen(typeComp)+1];//invoca o atributo privado da classe e aloca dinamicamente espaço
                                           //do tamanho do primeiro argumento +1 para caracter nulo
    strcpy(_typeComp, typeComp);            //Copia de type... para _type...

    _modelComp=new char[strlen(modelComp)+1];//aloca dinamicamente espaço para _modelComp
                                             //do tamanho do argumento modelComp mais 1
    strcpy(_modelComp, modelComp);
    compCnt++;
    cout<<"Criado: "<<_typeComp<<' '<<_modelComp<<endl;
}//end construtor

//Destrutor: libera memória e decrementa o numero de componentes
Componentes::~Componentes()
{
    cout<<"Removido: "<<_typeComp<<' '<<_modelComp<<endl;
    delete [] _typeComp;
    delete [] _modelComp;

    compCnt--;
}//end construtor

//Retorna o tipo de componente
const char *Componentes::getTypeComp()
{
    return _typeComp;
}//end getTypeComp

//Retorna o o modelo do componente
const char *Componentes::getModelComp()
{
    return _modelComp;
}//end getModelComp


int Componentes::getCompCnt()
{
    return compCnt;

}//end getcompCnt



























