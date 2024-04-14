#include <iostream>
using std::cout;
using std::endl;
//--Bibliotecas--
#include "SensVolt.hpp"

//---Desenvolvimento das funções membros----

//Construtor: inicializo as variaveis membros da seção private
sensvolt::sensvolt(const string &sensType, int valorADC, unsigned sensID, double Vref):
    _sensType(sensType), _valorADC(valorADC), _sensID(sensID), _Vref(Vref) //Como retornamos para private ao invés de protected, foi feito uma atualização das funções
{
//    _sensType  = sensType;
//    _valorADC = valorADC;
//    _sensID   = sensID;
//    _Vref     = Vref;

}//end construtor

//---Função
void sensvolt::setSenType(const string &sensType)
{
    _sensType=sensType;
}

//---Função
string sensvolt::getSensType() const
{
    return _sensType;
}

//---Função
void sensvolt::setValorADC(int valorADC)
{
_valorADC=(valorADC>=0 && valorADC<1024) ? valorADC : 512;
}

//---Função
int  sensvolt::getValorADC() const
{
    return _valorADC;
}

//---Função
void sensvolt::setSensID(unsigned sensID)
{
    _sensID= sensID;
}

//---Função
unsigned sensvolt::getSensID() const
{
    return _sensID;
}

//---Função
void sensvolt::setVref(double Vref)
{
    _Vref=Vref;
}

//---Função
double sensvolt::getVref() const
{
    return _Vref;
}

//-------------Função que retorno o valor do cálculo-----------------
double sensvolt::voltsVal() const
{
    //return _valorADC*_Vref/static_cast<double>(1024); //faz um casting do inteiro 1024 para double
    return getValorADC()*getVref()/static_cast<double>(1024);
}//end voltsVal

void sensvolt::dispResults() const
{
    cout<<"\nTipo de sensor: "<<getSensType()
        <<"\nValor do ADC: "<<getValorADC()
        <<"\nID do sensor: "<<getSensID()
        <<"\nValor de tensao de ref: "<<getVref()<<endl;

}
