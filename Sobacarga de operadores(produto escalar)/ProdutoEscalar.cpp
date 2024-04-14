#include<iostream>
using namespace::std;

#include "ProdutoEscalar.hpp"

prodEscalar::prodEscalar(int x, int y, int z)
{
    _x=x;
    _y=y;
    _z=z;
}

prodEscalar prodEscalar::operator*(int k)
{
    _x=_x*k;
    _y=_y*k;
    _z=_z*k;

    return prodEscalar(_x, _y, _z);
}

//Lista de funçoes
int prodEscalar::getX()
{
    return _x;
}


int prodEscalar::getY()
{
    return _y;
}


int prodEscalar::getZ()
{
    return _z;
}


