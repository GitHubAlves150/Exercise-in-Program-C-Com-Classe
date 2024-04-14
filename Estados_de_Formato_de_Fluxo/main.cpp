#include <iostream>
using std::showpoint;
using std::noshowpoint;
using std::noshowpos;
using std::cout;
using std::endl;
using std::right;
using std::left;
using std::internal;
using std::showpos;
using std::scientific;
using std::fixed;
using std::uppercase;
using std::showbase;
using std::hex;
using std::noshowbase;
using std::boolalpha;
using std::noboolalpha;



#include <iomanip>
using std::setw;
using std::setfill;


int main()
{
    float numfloat=90.7;

    cout<<"\n----------------------------------------\n";
    cout<<"\nColocando zeros nos finais...\n";

    cout<<showpoint << numfloat <<endl;//adiciona zeros finais
    cout<<noshowpoint;//cancela o showpoint
    cout<<"\n----------------------------------------\n";
    cout<<"\nCancelando os zeros finais...\n";
    cout<<numfloat;

    //---------------------------------------------------------------

    cout<<"\n----------------------------------------"<<endl;
    cout<<"\nDeslocando para a direita, o último caracter fica na posicao do argumento de setw()..."<<endl;
    cout<<"0123456789"<<endl;
    cout<<setw(5)<<numfloat<<endl;//desloca 5 caracteres para a direita
    cout<<right<<setw(10)<<numfloat<<endl;//mesma coisa: desloca 5 caracteres para a direita

    //---------------------------------------------------------------

    cout<<"\n----------------------------------------"<<endl;
    cout<<"\nColocando sinal positivo no valor..."<<endl;

    cout<<internal <<showpos <<setw(6)<< numfloat <<endl;//adiciona o sinal positivo
    cout<<setw(6)<<numfloat<<endl;//mesma cooisa: adiciona o sinal positivo
    cout<<noshowpos<<endl;//cancela o sinal positivo

    cout<<"\n----------------------------------------\n";
    cout<<"\nPreenchendo com caracteres nos espaços...\n";

    cout<< setfill('*') << setw(15) << numfloat<<endl;
    cout.fill('&');
    cout<<setw(10)<<numfloat<<endl;
    cout<< setw(10)<<numfloat<<endl;

    cout<<"\n----------------------------------------\n";
    cout<<"\nImprimindo em notacao cientifica...\n";

    cout<<scientific << 0.002 << endl;
    cout<<"\n----------------------------------------\n";
    cout<<"\nImprimindo normalmente com fixed...\n";
    cout<<fixed<<0.002<<endl;


    cout<<"\n----------------------------------------\n";
    cout<<"\nColocanod caixa alta na letras...\n";

    cout<<uppercase;
    cout<<scientific << 0.002 << endl;

    cout<<"\n----------------------------------------\n";
    cout<<"\nMostrando a base do numero...\n";
    cout<< hex <<showbase << 10 <<endl;
    cout<<90<<endl;

    cout<<"\n----------------------------------------\n";
    cout<<"\nCancelando a base...\n";
    cout<<noshowbase;
    cout<<90<<endl;

    cout<<"\n----------------------------------------\n";
    cout<<"\nManipulador booalpha...\n";

    cout<<boolalpha;//imprime verdadeiro ou falso na tela
    cout<<(3<4)<<endl;
    cout<<(4>7)<<endl;
    cout<<noboolalpha;//stop o manipulador boolalpha

    cout<<"\n----------------------------------------\n";
    cout<<"\nsem o boolapha, imprime 0 ou 1...\n";
    cout<<(3<4)<<endl;
    cout<<(4>7)<<endl;



    return 0;
}



















