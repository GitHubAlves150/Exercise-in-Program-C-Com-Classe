/*
    Programa demostrativo de herança
    Problema;
    . Você foi encarregado de desenvolver uma classe  em C++ para a leitura de um sensor analógico que informe o valor da tensão elétrica

    . Na classe básica, cada objeto deverá conter o tipo de sensor utilizdo em formato de string. Além disso, também deverá guardar a informação da leitura de um conversor AD
      de 10 bits. Também deverá ser possivél armazenar um valor inteiro que consistirá no ID do sensor e um real que consistirá na tensão de referência do conversor.

    . Também deve ser desenvolvida uma classe derivada que irá informar o valor da corrente o valor elétrica, de acordo com o valor de tensão e um resistor utilizado no hardware.


    Autor: Lucas Lorenço ALves
    Data: Fev 2023

*/
//---Bibliotecas-----
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;//para trabalhar com ponto flutuante

#include <iomanip> //Trabalhar com casas decimais
using std::setprecision;

#include "SensVolt.hpp"


int main()
{
    //----sensvolt(const string &senstype, int valorADC, unsigned sensID, double Vref)----
    sensvolt sensor("voltage", 267, 1, 5.0);//criando um objeto com inicialização
    cout<<fixed<<setprecision(4);

    cout<<"\nConfigurações iniciais: "<<endl;
    sensor.dispResults();
    cout<<"Voltage= "<<sensor.voltsVal()<<'V'<<endl;

    cout<<"\nNovas Configurações: "<<endl;
    sensor.setSensID(4);
    sensor.setValorADC(743);
    sensor.setSenType("pressao");
    sensor.setVref(3.3);
    sensor.dispResults();
    cout<<"Voltage= "<<sensor.voltsVal()<<'V'<<endl;

    return 0;
}








