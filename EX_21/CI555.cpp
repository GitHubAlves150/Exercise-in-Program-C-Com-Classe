#include "CI555.hpp"

FriendsDemo::FriendsDemo():
f(0.00)
{

}

void FriendsDemo::results()
{
    cout<<" 555 freq = "<< f << endl;

}

void calcFreq(FriendsDemo &ne555, double Ra, double Rb, double C)
{
    ne555.f=1.44/( (Ra+2*Rb)*C);

}//end calcFreq