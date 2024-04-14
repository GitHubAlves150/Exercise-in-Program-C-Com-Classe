#include <iostream>
using namespace::std;
#include "senCurrent.hpp"




    sensCurrent::sensCurrent(const string &sensType, int valorADC, unsigned sensID, double Vref, double res):
    _sensType(sensType),
    _valorADC(valorADC),
    _sensID(sensID),
    _Vref(Vref),
    _Res(res)
    {

    }

    void     sensCurrent::setSensType(const string &sensType)
    {
        _sensType=sensType;
    }
    string   sensCurrent::getSensType()const
    {
        return _sensType;
    }

    void     sensCurrent::setValorADC(int valorADC)
    {
        _valorADC=(valorADC >=0 && valorADC < 1024)? valorADC : 512;
    }
    int      sensCurrent::getValorADC()const
    {
        return _valorADC;
    }

    void     sensCurrent::setSensID(unsigned sensID)
    {
        _sensID=sensID;
    }
    unsigned sensCurrent::getSensID()const
    {
        return _sensID;
    }

    void     sensCurrent::setVref(double Vref)
    {
        _Vref=Vref;
    }
    double   sensCurrent::getVref()
    {
        return _Vref;
    }
    //retorna o calculo
    double   sensCurrent::currentVal()const
    {
        double voltage=(_valorADC * _Vref)/static_cast<double>(1024);
        return (voltage/_Res)*1000;
    }

    void     sensCurrent::setRes(double res)
    {
        _Res=res;
    }
    double   sensCurrent::getRes()const
    {
        return _Res;
    }


    void     sensCurrent::dispResults()const
    {
        cout<<"\nTipo do sensor: "<<_sensType
            <<"\n  valor do ADC: "<<_valorADC
            <<"\n  ID do sensor: "<<_sensID
            <<"\n Tensao de ref: "<<_Vref<<endl;
    }



