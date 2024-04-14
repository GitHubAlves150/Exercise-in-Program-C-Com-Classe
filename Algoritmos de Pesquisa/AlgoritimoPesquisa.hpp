
#ifndef ALGORITMOPESQUISA_H
#define ALGORITMOPESQUISA_H
//=======================================
//--Bibliotecas---
#include <vector>
using std::vector;


//=======================================
//--Classe---
class searchBinary
{

public:
    searchBinary(int sizevec);     //construtor gera do vetor

    int  pesquisa(int chave)const; //faz a pesquisa binaria e retorna o indice da chave encontrada
    void Printvector()const;       //imprime o conteudo do vetor

private:
    int  _sizeVec;                 //armazena o tamanho do vetor
    vector<int>dados;              //declara um vetor de inteiros

};//end class

#endif // ALGORITMOPESQUISA_H
