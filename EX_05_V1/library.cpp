#include "library.hpp"
#include <iostream>
using namespace std;



void Descrescente::original(int vet[]){
            for(int i=0; i<5; i++){
                cout<<" "<<vet[i];
            }        
        }
        
void Descrescente::ordVector(int vet[]){
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

int Descrescente::searchVector(int vect[], int searchNumber){
    for(int i=0; i<5; i++){
        if(vect[i] == searchNumber){
            return i;
        }    
    }
    return 0;
}








