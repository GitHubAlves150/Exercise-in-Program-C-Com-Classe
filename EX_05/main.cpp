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

class Descrescente
{

    public:
               
       // void descrescente(int vetor, int ordena);
        //void searchVector(int val);     
        void original(int vet[]){
            for(int i=0; i<5; i++){
                cout<<" "<<vet[i];
            }        
        }
        
        void ordVector(int vet[]){
            int auxiliar=0;
            
            for(int i=0; i<5; i++){
                for(int j=i; j<5; j++){
                    if(vet[i] > vet[j]){
                        auxiliar=vet[i];
                        vet[i]=vet[j];
                        vet[j]=auxiliar;                        
                    }                
                }
            }
            //mostra a ordenaca
            for(int i=0; i<5; i++){
                cout<<" "<<vet[i];    
            }        
        }
   
  
    
};





int main()
{

Descrescente ordena;
 
int vet[4];
cout<<"Entre com 5 valores: \n";
for(int i=0; i<5; i++){
    cout<<" Numero["<<i<<"]: ";
    cin>>vet[i];
}
ordena.original(vet);
cout<<"\n====== ordenando =================\n";
ordena.ordVector(vet);
    while(1);
    return 0;
}
