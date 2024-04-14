#include <iostream>

using namespace std;

int main()
{
    cout << "Hello REAA!" << endl;


    int *vetor=new (std::nothrow) int[3000000000000000];//causa um erro
    //int *vetor=new (std::nothrow) int[30]{10, 20, 33};//inicialização de vetor

    if(!vetor)
         cout << "Erro: Ao alocar memoria\n";

    for(int i=0; i<50; i++)
    {
        vetor[i]=i+2;
    }


     for(int i=0; i<6; i++)
    {
        cout << "valor: " << vetor[i] << endl;
    }


    delete[]vetor;

    return 0;
}
