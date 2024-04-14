#include <iostream>
using namespace::std;
#include "stm32.hpp"



stm::stm(const string &reset, const string &clock, const string &hall )://reset, clock, hall
    _Reset(reset),
    _Clock(clock),
    _Hall(hall)
{
//vazio
}
void  stm::setReset(const string &reset)
{
    _Reset=reset;
}
string stm::getReset()const
{
    return _Reset;
}

void   stm::setClock(const string &clock)
{
    _Clock=clock;
}
string stm::getClock()const
{
    return _Clock;
}

void   stm::setHall(const string &hall)
{
    _Hall=hall;
}
string stm::getHall()const
{
    return _Hall;
}

void stm::display()
{
    cout<<"\nPinos do stm32"
        <<getReset()
        <<"\n"
        <<getClock();

}







