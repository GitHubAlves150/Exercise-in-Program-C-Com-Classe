

#ifndef CALCULACAPACITOR_H
#define CALCULACAPACITOR_H
#include "CalculaComponente.hpp"
class capacitor:public componente
{
public:
    capacitor();
    virtual double getComponente(double=0.0, double=0.0);

};
#endif // CALCULACAPACITOR_H
