#include <iostream>
using namespace::std;
#include "Geometria.hpp"

Geometria::Geometria(int X, int Y, int Z):
    x(X), y(Y), z(Z)
{
//vazio
}

//Posso retornar um objeto também. Pois objeto é um tipo de dados também.
Geometria Geometria::operator+(Geometria P)
{
    x=x+P.x;
    y=y+P.y;
    z=z+P.z;
    return Geometria(x, y, z);
}

int Geometria::getX()//retorna o valor de x
{
    return x;
}



int Geometria::getY()//retorna o valor de y
{
    return y;
}

int Geometria::getZ()//retorna o valor de z
{
    return z;
}
//============================================================
Escalar::Escalar(int X, int Y, int Z):
    _x(X), _y(Y), _z(Z)
{
    //vazio
}

Escalar Escalar::operator*(Escalar K)
{
    _x=_x*K._x;
    _y=_y*K._y;
    _z=_z*K._z;
    return Escalar(_x, _y, _z);

}

int Escalar::_getx()//retorna o valor de x
{
    return _x;
}



int Escalar::_gety()//retorna o valor de y
{
    return _y;
}

int Escalar::_getz()//retorna o valor de z
{
    return _z;
}


































