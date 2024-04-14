#include <iostream>
#include "Divtres.hpp"


using std::cout;
using std::cin;
using std::endl;


//===========================================
//------construtor---
DivTres::DivTres(){

    for(int i=0; i<totalnumbers; i++){
        numbers[i]=0;   //inicializa todos os numeros em 0
        found[i]='0';   //inicializa toda a string em '0'
    }//end for
}//end DivTres

//=========================
//--Coleta e entrada de usuário--
void DivTres::getNumbers()
{
    for(int i=0; i<totalnumbers; i++){
        cout<<"Digite o numero: "<<i+1<<'/'<<totalnumbers<<" : ";
        cin>> numbers[i];
        
    }//end for
    numDivtres(numbers);        //verifica os valores divisiveis por 3
    
}//end getNumber
//=======================================
//--Imrpime os resultados--

void DivTres::printResults()
{
    cout<<"\nOs numeros com \'Y'\" sao divisiveis por 3\n"<<endl;
    for(int i=0; i<totalnumbers; i++)
    {
       cout<<setw(4)<<numbers[i] <<' '<<found[i]
       <<( (i+1)%2 ==0 ? '\n' : '\t');         
    }
    //end printResults
}


void DivTres::numDivtres(int num[totalnumbers])//função utilitária
{
    for(int i=0; i<totalnumbers; i++)
    {
        if(num[i]%3 == 0)
           found[i]='Y';
        else
           found[i]='N'; 
    }//end for
}//end numDivtres

//=======================================
//--Fim.--































