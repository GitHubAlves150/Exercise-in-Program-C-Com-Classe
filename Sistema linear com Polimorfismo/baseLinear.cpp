#include <iostream>
using namespace std;
#include "baseLinear.hpp"
#include <cmath>
using std::sqrt;//importa raiz quadrada

//construtor
sarrus::sarrus(int vetorLinear[])
{
    Det=0;
    vet[16]=vetorLinear[];
}


void sarrus::setEq(int vetorLinear[])
{
    int Tamanho=sizeof(vetorLinear)/sizeof(int);
    int raiz=sqrt(Tamanho);

    if(raiz==2)
    {
        set2x2(vetorLinear);
    }
    else if(raiz==3)
    {
        //set2x2(vetorLinear);
    }
    else if(raiz==4)
    {
        //set2x2(vetorLinear);
    }

}




void sarrus::set2x2(int vetor[])
{
     Det=(vetor[0] * vetor[4] * vetor[8]);

}
int sarrus::get2x2()
{
    return Det;
}

void sarrus::display()
{
    cout<<"Det: "<<Det<<endl;
}







