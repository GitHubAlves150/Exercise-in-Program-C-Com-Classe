#ifndef HIPO_H
#define HIPO_H
#include <cmath>
using std::sqrt;

//===================================================================================
//---calc---
class Hipotenuza
{
    public:
        Hipotenuza(double =3.0, double=4.0);//construtor inicializa com valores do triângulo de pitagoras
        void triRect()const;
    private:
        double pitagoras(double, double);
        double Hipo;
        double _ca;
        double _cb;

};


#endif 