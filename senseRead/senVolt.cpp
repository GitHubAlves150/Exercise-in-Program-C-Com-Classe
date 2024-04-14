#include <iostream>
using namespace::std;
#include "senVolt.hpp"




    sensVolt::sensVolt(const string &sensType, int valorADC, unsigned sensID, double Vref):
    _sensType(sensType),
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
    double   sensVolt::getVref()
    {
        return _Vref;
    }
    //retorna o calculo
    double   sensVolt::voltsVal()const
    {
        return (_valorADC * _Vref)/static_cast<double>(1024);
    }
    void     sensVolt::dispResults()const
    {
        cout<<"\nTipo do sensor: "<<_sensType
            <<"\n  valor do ADC: "<<_valorADC
            <<"\n  ID do sensor: "<<_sensID
            <<"\n Tensao de ref: "<<_Vref<<endl;
    }



