#ifndef SEARCHELEMENT_H
#define SEARCHELEMENT_H


//=======================================
//--Bibliotecas---
#include "AlgoritimoPesquisa.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::sort;//ordena os numeros crscente

#include <iomanip>
using std::setw;//largura dos campos

//=======================================
//--Func.Membros---
searchBinary::searchBinary(int sizeVec)
{
    _sizeVec=(sizeVec > 0 ? sizeVec : 2);

    for(int i=0; i< (sizeVec/2); i++)           //cria a metada do vetor
        dados.push_back(i+i/2);
    for(int i=( sizeVec/2); i<sizeVec; i++)    //cria a metada final do vetor
        dados.push_back(i+i/2+i/3);
    sort(dados.begin(), dados.end());          //organiza em ordem crescente

}//end construtor


//=======================================
//--Func.Pesquisa binaria---
int searchBinary::pesquisa(int chave)const
{
    int metadeIni=0;//metade inicial  do vetor para pesquisa
    int metadeFim=_sizeVec-1;//metade final do vetor para pesquisa
    int indice = -1; //indice retornado. Se não localizado, retornara -1
    int centro = (metadeIni+metadeFim+1)/2;

    while( (metadeIni <= metadeFim ) && (indice==-1) )//algoritimo de pesquisa binaria
    {
        if(chave == dados[centro])
            indice = centro;
        else if(chave < dados[centro])
            metadeFim=centro-1;
        else
            metadeIni=centro+1;

        centro = (metadeIni+metadeFim+1)/2;

    }//end while
    return indice;
}



//=======================================
//--Func.print vetor---
void searchBinary::Printvector()const
{
    for(int i=0, cnt=0; i<= (_sizeVec-1); i++ )
    {
        cout << setw(4) << dados[i];
        cnt++;

        if(cnt >19)
        {
            cout << '\n';
            cnt=0;
        }
        else
            cout <<' ';
    }
cout << endl;

}//end printvector












#endif // SEARCHELEMENT_H
