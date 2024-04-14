#include "Vet3D.h"

Vet3D::Vet3D(int a, int b, int c):x(a), y(b), z(c)
{

}

Vet3D Vet3D::operator+(Vet3D P)
{
    x=x+P.x;
    y=y+P.y;
    z=z+P.z;

    return Vet3D(x, y, z);
}

int Vet3D::getX()const
{
    return x;
}

int Vet3D::getY()const
{
    return y;
}

int Vet3D::getZ()const
{
    return z;
}


Vet3D::~Vet3D()
{
    //dtor
}
