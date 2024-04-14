#include <iostream>
using namespace::std;
#include "senCurrent.hpp"





    sensCurrent::sensCurrent(const string &sensType, int valorADC, unsigned sensID, double Vref, double res):
    sensVolt(sensType, valorADC, sensID, Vref)
    {
        setRes(res);
    }



    //retorna o calculo
    double   sensCurrent::currentVal()const
    {

        return sensVolt::voltsVal()/getRes()*1000.0;
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
        sensVolt::dispResults();
        cout<<"Resistor: "<<getRes()<<endl;

    }



