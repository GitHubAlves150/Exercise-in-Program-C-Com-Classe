//Classe senseVolt
#ifndef CURRENTE_H
#define CURRENTE_H

#include<string>
using std::string;


//classe sensevolt
class sensCurrent
{
public:
    sensCurrent(const string &, int =0, unsigned=0, double=0.0, double=0.0);

    void     setSensType(const string &sensType);
    string   getSensType()const;

    void     setValorADC(int valorADC);
    int      getValorADC()const;

    void     setSensID(unsigned sensID);
    unsigned getSensID()const;

    void     setVref(double Vref);
    double   getVref();

    void     setRes(double);
    double   getRes()const;

    //retorna o calculo
    double   currentVal()const;
    void     dispResults()const;

private:
    string   _sensType;
    int      _valorADC;
    unsigned _sensID;
    double   _Vref;
    double   _Res;
};
#endif // CURRENTE_H
