#ifndef SENSCURRENT_H
#define SENSCURRENT_H

//Bibliotecas
#include <iostream>

#include <string>
using std::string;


//Por estarmos fazendo herdar classes e funções de outra lib, devemos chamar a outra lib
#include "SensVolt.hpp"


//---------- Indicação de Heranca ------------
class sensCurrent : public sensvolt //SensCurrente vai herdar senVolt
{

public:
//------construtor-----
    sensCurrent(const string &senstype, int valorADC,
                unsigned sensID, double Vref, double Res);


 //Deletado do programa devido ao uso da herança.
   /* void setSenType(const string &sensType);
    string getSensType() const;
    void setValorADC(int valorADC);
    int  getValorADC() const;
    void setSensID(unsigned sensID);
    unsigned getSensID() const;
    void setVref(double Vref);
    double getVref() const;
    */
//-----Funções adicionadas para classe de corrente----

    void setRes(double Res);
    double getRes() const;


//-----Função que retorno o valor do cálculo-------
    double currentVal() const;
    void dispResults() const;

private:
//será herdado da outra classe
//    string _sensType;
//    int _valorADC;
//    unsigned _sensID;
//    double _Vref;
//Deixo esta variavel membro por ser de uso proprio para esta classe
    double _Res;
};


#endif // SENSCURRENT_H


/*
A palavra-chave "const" na declaração de uma função em C++ indica que a função não modifica o estado interno do objeto no qual ela é chamada.

No caso específico da declaração "double getsRes() const;", a função "getsRes" retorna um valor do tipo "double" e é declarada como "const",
o que significa que essa função não pode modificar os dados do objeto no qual é chamada. Isso garante que a função não altere o estado do objeto
e, portanto, é considerada uma função "constante".

O uso da palavra-chave "const" é útil em C++ porque permite que o compilador verifique se uma função é segura para ser chamada em um objeto constante,
ou seja, um objeto que não deve ser modificado. Além disso, o uso de funções constantes pode melhorar a eficiência do código, já que o compilador pode
fazer otimizações adicionais com base na garantia de que a função não modifica o estado do objeto.*/
