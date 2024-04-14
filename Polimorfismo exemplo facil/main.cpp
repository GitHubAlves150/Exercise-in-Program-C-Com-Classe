//Referência: https://learn.microsoft.com/pt-br/cpp/cpp/virtual-functions?view=msvc-170

#include <iostream>
using namespace std;
#include <cstring>
using std::string;
#include "Derivada1.hpp"
#include "base.hpp"
int main()
{
    cout << "Hello REAA" << endl;
    string retorno;

    Derivada1 Aderivada;
    base Abase;
//base para derivada
    base *basePtr=&Aderivada;
    retorno= basePtr->NameOf();//base que aponta para a derivada
    cout<<":"<<retorno<<endl;
    basePtr->InvokinClass();
    cout<<"\n";
//base para base
    basePtr=&Abase;
    retorno=basePtr->NameOf();//base que aponta para base
    cout<<":"<<retorno<<endl;
    basePtr->InvokinClass();
    cout<<"\n";
//derivada para derivada
    Derivada1 *DerivadaPtr=&Aderivada;//derivada que ponta para derivada
    retorno=DerivadaPtr->NameOf();
    cout<<":"<<retorno<<endl;
    DerivadaPtr->InvokinClass();





    return 0;
}



