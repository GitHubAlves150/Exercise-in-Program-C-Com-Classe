//Classe senseVolt
#ifndef CURRENTE_H
#define CURRENTE_H

#include<string>
using std::string;
#include "senVolt.hpp"//incluindo a lib da classe basica

//classe sensevolt
class sensCurrent:public sensVolt//sensCurrente herda sensVolt
{
public:
    sensCurrent(const string &, int =0, unsigned=0, double=0.0, double=0.0);


    void     setRes(double);
    double   getRes()const;

    //retorna o calculo
    double   currentVal()const;
    void     dispResults()const;

private:

    double   _Res;
};
#endif // CURRENTE_H
