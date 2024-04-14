#ifndef  PRINTVALORES_HPP
#define  PRINTVALORES_HPP

#include <iostream>
using std::cout;
using std::endl;


//Definição de classe
class PrintValor{

public:
    PrintValor();                        //Declaração do construtor
    void setValor(int valor);            //Boa prática de programação usnado funçoes set e get
    void PrintThis();                    //Função para iprimir o valor
private:
    int ValorParaPrintar;                //variável-Membro

};

#endif // PRINTVALORES_HPP
