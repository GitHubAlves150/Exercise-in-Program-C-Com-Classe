/*
Data: Setembro 2023
Manipuladores de fluxos
configuraçao de preciso
organização dos dados na tela para visualização na tela
Mais referências:  https://acervolima.com/manipuladores-em-c-com-exemplos/
                   https://cplusplus.com/reference/iomanip/
*/



#include <iostream>
using std::hex;
using std::oct;
using std::dec;
using std::fixed;
using std::cin;
using std::cout;
using std::endl;
using std::showpos;

#include <iomanip>
using std::setbase;
using std::setprecision;
using std::setw;
using std::setfill;
using std::right;
#include <ios>
using std::showbase;

#include "Manip.hpp"




int main()
{
    int numero1=600;
    int numero2=490;
    cout<<hex;
    cout<<"O numero 600 em hexdecimal: "<<numero1<<endl;
    cout<<"O numero 600 em octal: "     <<oct<< numero1<<endl;
    cout<<"Retornando o numero na forma decimal: "<<dec<<numero1<<endl;
    cout<<"\nUsando o setbase()..\n";
    cout<<"Numero usado para este teste... 490:\n";
    cout<<setbase(16)<<endl;
    cout<<"Numero 490 em hexadecimal: "<<numero2<<endl;
    cout<<setbase(8);
    cout<<"Numero 490 em octal: "<<numero2<<endl;
    cout<<setbase(10);
    cout<<"Numero 490 em decimal: "<<numero2<<endl;
    cout<<"\nManipulando precisão...\n";
    double Pi=3.14159265359;
    cout<<fixed;//utiliza notaçao de pointo fixo;
    cout<<setprecision(2)<<Pi<<endl;
    cout<<Pi<<endl;
    //---------------------------------------------------
    cout.precision(6);//coonfigura para 6 casas de precisao
    cout<<Pi<<endl;//imprime as 6 casas que foi configurada em cout.precision
    //---------------------------------------------------

    cout<<"\nLargura de campo...\n";
    int teste1=123456789;
    int teste2=123456;
    int teste3=12345;
    int teste4=123;

    //cout<<teste1<<endl;
    cout<<"0123456789"<<endl;
    cout<< setw(10) <<teste4<<endl;//o último caractere ocupa a décima coluna
    cout<< setw(10) <<teste3<<endl;
    cout<< setw(10) <<teste2<<endl;
    cout<< setw(10) <<teste1<<endl;
    //criar seus próprios manipuladores de fluxos....ostream &insereTab(ostream &manip)
    cout<<insereTab <<"A1"<<insereTab<<"A2"<<insereTab<<endl;
    cout<<Pipe<<"A1"<<Pipe<<"A2"<<endl;
    cout<<"A5\v"<<endl;
    cout<<"\vA9"<<endl;

    //------------------
    int inteiro1=0;
    int inteiro2=0;
    int resul=0;
    cout<<"Digite um inteiro: "<<endl;
    cin>>inteiro1;
    cout<<"Digite mais um inteiro: "<<endl;
    cin>>inteiro2;
    resul=inteiro1+inteiro2;
    cout<<"\v";
    cout<<setw(10)<<inteiro1<<"\n"<<showpos<<setw(10)<<inteiro2<<endl;
    cout<<right<<setw(13)<<underscore<<endl;
    cout<<setw(10)<<resul;


    cout<<"\n\n....Fim...\n";
    while(1);
    return 0;
}












