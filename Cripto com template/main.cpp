/*
Programa:
Escreva uma classe genérica (template) que receba um vetor de dados e encriptografa
esses dados.
A classe deve poder receber um vetor de dados tanto int, float, double, quanto string
*/

#include <iostream>
using namespace std;

#include "cripto.hpp"

int main()
{

    cout << "Hello world!" << endl;
    int Array[]= {1.0, 2.1, 3.2, 1.2, 1.5, 2.0, 3.3, 4.4};
    int dimensao=sizeof(Array)/sizeof(int);
    cout<<"dimensao:"<<dimensao<<endl;

    cripto senha;
    senha.display();
    cout<<endl;
    senha.criptografa(Array, dimensao);
    senha.display();
    return 0;
}
