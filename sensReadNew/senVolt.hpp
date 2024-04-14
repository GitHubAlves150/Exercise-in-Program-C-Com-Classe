//Classe senseVolt
#ifndef SENSEVOLT_H
#define SENSEVOLT_H

#include<string>
using std::string;


//classe sensevolt
class sensVolt
{
public:
    sensVolt(const string &, int =0, unsigned=0, double=0.0);

    void     setSensType(const string &sensType);
    string   getSensType()const;

    void     setValorADC(int valorADC);
    int      getValorADC()const;

    void     setSensID(unsigned sensID);
    unsigned getSensID()const;

    void     setVref(double Vref);
    double   getVref()const;
    //retorna o calculo
    double   voltsVal()const;
    virtual void     dispResults()const;

private:
    string   _sensType;
    int      _valorADC;
    unsigned _sensID;
    double   _Vref;
};
#endif // SENSEVOLT_H
