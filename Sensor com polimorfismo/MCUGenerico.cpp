
#include <iostream>
using namespace::std;
#include "MCUGenerico.hpp"


mcu::mcu(const string &vcc, const string &gnd):
    _Vcc(vcc),
    _Gnd(gnd)
{
//vazio
}

void  mcu::setVcc(const string &vcc)
{
    _Vcc=vcc;
}

string mcu::getVcc()const
{
    return _Vcc;
}

void  mcu::setGnd(const string &gnd)
{
    _Gnd=gnd;
}
string mcu::getGnd()const
{
    return _Gnd;
}

void mcu::print()
{
    cout<<"\nSensor Generico: "
        <<getVcc()
        <<"\n"
        <<getGnd()<<endl;
}



