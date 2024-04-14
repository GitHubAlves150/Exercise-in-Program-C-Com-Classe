#include <string>
using std::string;
#include <cstring>
using std::strlen;


#include <stdlib.h>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::right;
using std::left;


#include <iomanip>
using std::setfill;//preenche os espaços vazios
using std::setw;
#include "Assento.hpp"


Assento::Assento(string Pessoa, string Assento, string Filme):
    _NomePessoa(Pessoa), _NumeroPoltrona(Assento), _NomeFilme(Filme)
{
    //vazio
}

Assento::~Assento()
{

}

//========================================================================
void  Assento::setNomePessoa(string cliente)
{
    _NomePessoa = cliente;
}
string Assento::getNomePessoa()
{
    return _NomePessoa;
}


//========================================================================

void  Assento::setNumeroPoltrona(string Lugar)
{
    _NumeroPoltrona= Lugar;
}
string Assento::getNumeroPoltrona()
{
    return _NumeroPoltrona;
}


//========================================================================
void  Assento::setNomeFilme(string Movie)
{
    _NomeFilme= Movie;
}
string Assento::getNomeFilme()
{
    return _NomeFilme;
}


void Assento::LayoutTelona()
{

    cout << setw(45) <<"     _____________ " << endl;
    cout <<setw(45)  << "   /    TELA     \\" << endl;
    cout << setw(48) <<"  /_______________\\  " << endl;


}

//========================================================================
/*
|**********CINE-MA************|
|       Nome: XXXXX XXXXX     |
|      Filme: XXXXXXXXXXXX    |
|   Poltrona: XX              |
|   ---BOM FILME---           |



*/

void Assento::LayOutCinema()
{
    int i=0,
        j=0,
        l=0;


    while(_NomePessoa[i] != '\0' )
    {

        i++;
    }

    while(_NomeFilme[j] != '\0' )
    {

        j++;
    }

    while(_NumeroPoltrona[l] != '\0' )
    {

        l++;
    }
//=================================================
//--Cast char para int---
    int A=_NumeroPoltrona[1] - '0';
    int B=_NumeroPoltrona[2] - '0';
//=================================================
//--Fim da contagem da string--
    for(int cnt_i=0; cnt_i<4; cnt_i++)
    {
        if(cnt_i==0)
        {
            cout << "|" << setfill('*') << setw(17) << "CINE-MA"  <<  setfill('*')    << setw(10)     << "| A " ;
        }
        if(cnt_i==1)
        {
            cout << "|" << setfill(' ') << setw(13) << "NOME: "   <<  _NomePessoa     << setw(14-i)   << "| B " ;
        }
        if(cnt_i==2)
        {
            cout << "|" << setfill(' ') << setw(12) << "FILME:"   <<  _NomeFilme      << setw(15-j)   << "| C " ;
        }
        if(cnt_i==3)
        {
            cout << "|" << setfill(' ') << setw(12) << "ASSENTO:" <<  _NumeroPoltrona << setw(15-l)   << "| D ";
        }


//=================================================
//--Marca o assento--
        for(int cnt_j=0; cnt_j<4; cnt_j++)
        {


            if(A==cnt_i && B==cnt_j)
                cout << "[ X ]";
            else
            {
                //cout << "[" << i << "," << j << "]";
                cout << "[" << cnt_i << ","<< cnt_j << "]" ;
            }
        }
        cout << endl;
    }

}
































