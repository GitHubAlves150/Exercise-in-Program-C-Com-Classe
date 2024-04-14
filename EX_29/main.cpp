/*
    Exercicios propostos do módulo 5 do curso CPP do Wagner Rambo
    Escopo  e acesso a Membros de classe
    ->Por referência
    ->Por passagem de parametro
    ->Por valor

*/

#include <iostream>
using std::cout;
using std::endl;
#include "PrintValor.hpp"
int main()
{
    //crio um objeto
    PrintValor valor;             //declaro um objeto valor do tipo classe PrintValor
    PrintValor *valorPTR=&valor;  //declaro um ponteiro do tipo classe PrintValor que armazena o endereço de memória do objeto valor
    PrintValor &valorREF=valor;   //decalro um objeto do tipo classe PrintValor que armazena a referência do objeto valor

    //Acesso por objeto
    valor.setValor(10);            //acesso as funções membros por objeto
    valor.PrintThis();
    //Acesso por referência
    valorREF.setValor(100);         //acesso as funções membros por referência
                                    //ou seja, já que tenho a referência do objeto valor

    valorREF.PrintThis();
    //Acesso por ponteiro
    valorPTR->setValor(1000);        //acesso as funções membros por ponteiro para modificar o objeto valor
    valorPTR->PrintThis();
cout<<"\n\nFim"<<endl;
while(1);
    return 0;
}







