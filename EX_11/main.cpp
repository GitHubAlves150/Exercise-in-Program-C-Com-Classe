/*
Desenvolver uma função em C++ para receber como parametro funcçoes para 
soma, subtração, e multiplicação, alpem de apresentar o caractere pertinente a operação
'*', '+', '-', '\'.
Esta função receberá os dois caracteres inteiros a serem processados e vai imprimir o 
resultado em um dos formatos
a + b=res (se receber a função soma como parametro)
a - b=res (se receber a função subtraçao como parametro)
a * b=res (se receber a função multiplicação como parametro)
*/

//==========================================BIBLIOTECAS
#include <iostream>
#include <cstdlib>
using namespace std;
//==========================================PROTÓTIPO DAS FUNÇÕES
int soma(int a, int b, char &sym);
int subt(int a, int b, char &sym);
int mult(int a, int b, char &sym);

void calc( int(*operation)(int, int, char &), int a, int b);//ponteiro de funções


//===========================================FUNÇÃO PRINCIPAL
int main()
{
    
    calc(soma, 5, 8);
    calc(subt, 10, 1);
    calc(mult, 3, 10);
    system("PAUSE");
    return 0;
}
//===========================================FUNÇOES DESENVOLVIDAS


//===============================
int soma(int a, int b, char &sym)
{
    sym= '+';
    return a + b;

}//end soma

//==============================
int subt(int a , int b, char &sym)
{
    sym='-';
    return a - b;
}//end subt

//==============================
int mult(int a , int b, char &sym)
{
    sym='*';
    return a * b;
}//end mult


void calc( int(*operation)(int, int, char &), int a, int b )
{
    char sym= '.'; //armazena o simbolo de referencia da operção
    int res=(*operation)(a, b, sym);
    
    cout<<a<< sym << b <<" = "<< res <<endl;



}//end calc


























