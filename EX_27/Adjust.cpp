#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include "Adjust.hpp"

Adjust::Adjust(int v, int b, int c) //inicializa os membros de dados 
{
    setAdj(v, b, c);
}

Adjust &Adjust::setAdj(int v, int b, int c)
{
    setVolume(v);
    setBrilho(b);
    setContrast(c);
    
    return *this;
}


Adjust &Adjust::setVolume(int volume)
{
    vol=(volume >=0 && volume<=100) ? volume : 50;
    return *this;
}


Adjust &Adjust::setBrilho(int Brilho)
{
    bri=(Brilho >=0 && Brilho<=100) ? Brilho : 50;
    return *this;
}

Adjust &Adjust::setContrast(int Contraste)
{
    con=(Contraste >=0 && Contraste<=100) ? Contraste : 50;
    return *this;
}


void Adjust::dispParam()const
{
    cout<<" Volume is set to: "<<setw(3)<<vol<<"%\n";
    cout<<" Volume is set to: "<<setw(3)<<bri<<"%\n";
    cout<<" Volume is set to: "<<setw(3)<<con<<"%\n";
    cout<<endl;

}





