
#ifndef CALCULARESISTOR_H
#define CALCULARESISTOR_H
#include "CalculaComponente.hpp"
class resistor:public componente
{
public:
    resistor();
    virtual double getComponente(double=0.0, double=0.0);

};
#endif // CALCULARESISTOR_H
