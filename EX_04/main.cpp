/*
    Programa demostrativo de recursividade
    pede para o usuário para digitar um numero e com recursividade gera a tabuada.
    Autor: Lucas Lorenço Alves
    Ano: dezembro de 2022

*/
#include <iostream>

using namespace std;

void tabuada(int number);

int main()
{
    int resultado, number;
    cout<<"Qual numero vc quer gerar a tabuada? ";
    cin>>number;
    
    tabuada(number);
    
    while(1);
    return 0;
}



void tabuada(int number){
     static int repeticao;
     if(repeticao!=10)
        repeticao++;
     return tabuada(repeticao-1);     
     
}

















