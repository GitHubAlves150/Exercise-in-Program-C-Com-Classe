#include <iostream>
using std::cout;
using std::endl;

#include "Potencia.hpp"

pot::pot():
W(0.0)
{

}

void pot::results()
{
    cout<<W<<" Wats de potencia"<<endl;
}

void PVI(pot &Potencia, double V, double I)
{
    Potencia.W=V*I;

}