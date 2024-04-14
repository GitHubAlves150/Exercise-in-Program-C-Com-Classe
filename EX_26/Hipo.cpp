#include <iostream>
using std::cout;
using std::endl;


#include "Hipo.hpp"



Hipotenuza::Hipotenuza(double ca, double cb):
_ca(ca),
_cb(cb)
{
    Hipo=pitagoras(_ca, _cb);
}//end Hipotenuza

//--------calc Hipotenuza
double Hipotenuza::pitagoras(double _ca, double _cb)
{
    return sqrt(_ca*_ca + _cb*_cb);
}//-------calc Hipotenuza


void Hipotenuza::triRect()const
{
    cout<<"        Hipo= "<<Hipo<<endl;
    cout<< "  this->Hipo= "<< this->Hipo<<endl;
    cout<<"(*this).Hipo= "<<(*this).Hipo<<endl;
}//end triRect









