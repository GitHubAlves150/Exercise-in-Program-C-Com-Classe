#ifndef SENSVOLTS_H
#define SENSVOLTS_H

//Bibliotecas
#include <iostream>

#include <string>
using std::string;


class sensvolt{


public:
    //construtor
    sensvolt(const string &senstype, int valorADC, unsigned sensID, double Vref);

    void setSenType(const string &sensType);
    string getSensType() const;
    void setValorADC(int valorADC);
    int  getValorADC() const;
    void setSensID(unsigned sensID);
    unsigned getSensID() const;
    void setVref(double Vref);
    double getVref() const;

    //Função que retorno o valor do cálculo
    double voltsVal() const;
    void dispResults() const;

private:
    string _sensType;
    int _valorADC;
    unsigned _sensID;
    double _Vref;

};


#endif // SENSVOLTS_H
