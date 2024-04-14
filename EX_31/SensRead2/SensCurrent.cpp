#include <iostream>
using std::cout;
using std::endl;
//--Bibliotecas--
#include "SensCurrent.hpp"

//---Desenvolvimento das funções membros----

//Construtor: inicializo as variaveis membros da seção private
sensCurrent::sensCurrent(const string &sensType, int valorADC,
                         unsigned sensID, double Vref, double Res)
{
    _sensType  = sensType;
    _valorADC = valorADC;
    _sensID   = sensID;
    _Vref     = Vref;
    _Res      =Res;

}//end construtor

//---Função
void sensCurrent::setSenType(const string &sensType)
{
    _sensType=sensType;
}

//---Função
string sensCurrent::getSensType() const
{
    return _sensType;
}

//---Função
void sensCurrent::setValorADC(int valorADC)
{
    _valorADC=(valorADC>=0 && valorADC<1024) ? valorADC : 512;
}

//---Função
int  sensCurrent::getValorADC() const
{
    return _valorADC;
}

//---Função
void sensCurrent::setSensID(unsigned sensID)
{
    _sensID= sensID;
}

//---Função
unsigned sensCurrent::getSensID() const
{
    return _sensID;
}

//---Função
void sensCurrent::setVref(double Vref)
{
    _Vref=Vref;
}

//---Função
double sensCurrent::getVref() const
{
    return _Vref;
}

//-------------Função que retorno o valor do cálculo-----------------
double sensCurrent::currentVal() const
{
    double voltage =
        _valorADC*_Vref/static_cast<double>(1024); //faz um casting do inteiro 1024 para double
        return voltage/_Res*1000.0;
}

//---Função: setRes
void sensCurrent::setRes(double Res)
{
    _Res=Res;
}
double sensCurrent::getRes()const
{
        return _Res;
}

void sensCurrent::dispResults() const
{
    cout<<"\nTipo de sensor:         "<<_sensType
        <<"\nValor do ADC:           "<<_valorADC
        <<"\nID do sensor:           "<<_sensID
        <<"\nValor de tensao de ref: "<<_Vref
        <<"\nResistor:               "<<_Res<<endl;
}
