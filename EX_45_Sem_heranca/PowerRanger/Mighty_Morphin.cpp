#include <iostream>
using std::cout;
using std::endl;


#include <cstring>
using std::strcpy;
using std::strcmp;

#include "Mighty_Morphin.hpp"

//----Inicia construtor----
Zordon::Zordon(string CorArmadura, string NomeAnimal, string SexoRanger, string NomeEscolhido)
{
    _CorArmadura=CorArmadura;
    _NomeAnimal=NomeAnimal;
    _SexoRanger=SexoRanger;
    _NomeEscolhido=NomeEscolhido;
}
//----Destrutor-----
Zordon::~Zordon()
{
    cout<<"A rita nao destruiu os Rangers, mas este programa sim.";
}
//-----Funções setting-----------

void Zordon::setCorArmadura(string CorDaArmadura)
{

    _CorArmadura=CorDaArmadura;

}




void Zordon::setNomeAnimal(string NomeAnimal)
{
    _NomeAnimal=NomeAnimal;
}

void Zordon::setSexoRanger(string sexo)
{
    _SexoRanger=sexo;
}

void Zordon::setNomeEscolhido(string NomeEscolhido)
{
    _NomeEscolhido=NomeEscolhido;
}

//-------Funçoes getting-----

string Zordon::getCorArmadura()
{
    return _CorArmadura;
}

string Zordon::getNomeAnimal()
{
    return _NomeAnimal;
}

string Zordon::getSexoRanger()
{
    return _SexoRanger;
}

string Zordon::getNomeRanger()
{
    return _NomeEscolhido;
}


//------Display-------
void Zordon::ToShow()
{

    cout<<"\n          Armadura: "<<_CorArmadura
        <<"\n            Animal: "<<_NomeAnimal
        <<"\n              Sexo: "<<_SexoRanger
        <<"\n Nome do escolhido:"<<_NomeEscolhido<<endl;
}










