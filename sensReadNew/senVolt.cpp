#include <iostream>
using namespace::std;
#include "senVolt.hpp"




    sensVolt::sensVolt(const string &sensType, int valorADC, unsigned sensID, double Vref):
    _sensType(sensType),//usa a lista de inicialização para acessar os membros de dados da basica
    _valorADC(valorADC),
    _sensID(sensID),
    _Vref(Vref)
    {

    }

    void     sensVolt::setSensType(const string &sensType)
    {
        _sensType=sensType;
    }
    string   sensVolt::getSensType()const
    {
        return _sensType;
    }

    void     sensVolt::setValorADC(int valorADC)
    {
        _valorADC=(valorADC >=0 && valorADC < 1024)? valorADC : 512;
    }
    int      sensVolt::getValorADC()const
    {
        return _valorADC;
    }

    void     sensVolt::setSensID(unsigned sensID)
    {
        _sensID=sensID;
    }
    unsigned sensVolt::getSensID()const
    {
        return _sensID;
    }

    void     sensVolt::setVref(double Vref)
    {
        _Vref=Vref;
    }
    double   sensVolt::getVref()const
    {
        return _Vref;
    }
    //retorna o calculo
    double   sensVolt::voltsVal()const
    {
        return ( getValorADC() * getVref() ) /static_cast<double>(1024);
    }
    void     sensVolt::dispResults()const
    {
        cout<<"\nTipo do sensor: "<<getSensType()
            <<"\n  valor do ADC: "<<getValorADC()
            <<"\n  ID do sensor: "<<getSensID()
            <<"\n Tensao de ref: "<<getVref() << endl;
    }



