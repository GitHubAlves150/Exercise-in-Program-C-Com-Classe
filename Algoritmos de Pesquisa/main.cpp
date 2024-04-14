#include <iostream>

using namespace std;
#include "AlgoritimoPesquisa.hpp"
int main()
{
    int minhachave; //chave a ser pesquisada no vetor
    int indice;     //localização da chave no vetor
    int tamanho;    //tamanho do vetor a ser gerado

    cout << "\n Informe o numero de elementos do vetor" << endl;
    cin  >> tamanho;

    searchBinary myvector(tamanho);
    myvector.Printvector();


    while(1)
    {
        cout << "\n Entre com o valor da chave para pesquisar no vetor " << endl;
        cin  >> minhachave;
        cout << endl;

        indice= myvector.pesquisa(minhachave);
        if(indice!=-1)
            cout << "Chave Pesquisada" << minhachave
                 << "no indice "       << indice     << endl;
        else
            cout << "Chave pesquisada" << minhachave
                 << "inexistente."     << endl;

    }//end while

    cout << "\n\nFIM" << endl;
    while(1);

    return 0;
}
