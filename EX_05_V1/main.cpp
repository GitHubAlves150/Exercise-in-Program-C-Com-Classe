/*
    class criada em novembro de 2022
    ->Programa que pede ao usuário para entrar com 5 valores inteiros
    ->Amazene os valores em um array e após organize os dados em ordem decrescente
    ->Depois, entra em loop infinito que solicita ao usuário para consultr uma posição desejada do vetor
    e mostra qual o contepudo está armazenado na posição digitada
    ->Crie uma classe chamada "Descrescente" que contenha o construtor, uma função para organizar o array passado 
    para ela em ordem descrescente e outra para efetuar 
    a busca pelos conteúdos do array do loop infinito.
    
    versao do programa: V.0.0
    Autor: Lucas Lorenço Alves
    Ano: Dezembro de 2022
    
*/


#include <iostream>

using namespace std;
#include "library.hpp"






int main()
{

Descrescente ordena;
 
int vet[4];
int Number=0;

cout<<"Entre com 5 valores: \n";
for(int i=0; i<5; i++){
    cout<<" Numero["<<i<<"]: ";
    cin>>vet[i];
}
ordena.original(vet);
cout<<"\n====== ordenando =================\n";
ordena.ordVector(vet);

cout<<"\nDigite um numero a ser encontrado dentro do vetor: ";
cin>>Number;
cout<<"\n=======Numero encontrado===========\n";

    Number=ordena.searchVector(vet, Number);
if(Number == 0){
    cout<<"Nao encontrado";
}
else
    cout<<"\nEncontrado na posicao "<<Number<<endl;
    
    while(1);
    return 0;
}
