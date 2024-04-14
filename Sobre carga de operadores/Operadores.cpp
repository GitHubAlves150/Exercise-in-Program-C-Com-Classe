#include "Operadores.hpp"
#include <iostream>
using std::cout;
using std::endl;

//Construtor inicializado por lista de inicialização
Vetor3d::Vetor3d(int A, int B, int C):
PontoX(A),
PontoY(B),
PontoZ(C)
{

}

Vetor3d Vetor3d::operator+(Vetor3d P)
{
    PontoX=PontoX+P.PontoX;
    PontoY=PontoY+P.PontoY;
    PontoZ=PontoZ+P.PontoZ;

    return Vetor3d(PontoX, PontoY, PontoZ);
}


//===============================
//--retorna o vsalor de X
int Vetor3d::getX()const
{
    return PontoX;
}

//===============================
//--retorna o vsalor de X
int Vetor3d::getY()const
{
    return PontoY;
}
//===============================
//--retorna o vsalor de Z
int Vetor3d::getZ()const
{
    return PontoZ;
}

void Vetor3d::Display()
{
    cout<<"P("<<getX()<< ", " << getY() << ", " << getZ() << ")" <<endl;
}

