#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "Hello REAA!" << endl;

    vector<int>numeros(9);//cria dinamincamente um vetor de inteiros com 4 indices


    try
    {
        numeros.at(5)=10;//pociona o valor 10 no indice 5
        //numeros.at(11)=10;//Gera um erro ao posicionar um elemento no indice 11
        cout << "Resposta: " << numeros[5] << endl;
    }
    catch(exception & e)
    {
        cout << "Atenção!!!:\n " << e.what() << endl;
    }

    return 0;
}
