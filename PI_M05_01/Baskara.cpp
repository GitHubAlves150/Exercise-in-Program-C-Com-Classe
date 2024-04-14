#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <math.h>
using std::sqrt;

#include <iomanip>
using std::setw;
#include "Baskara.hpp"

baskara::baskara()
{
	delta=0;
	Raiz_1=0;
	Raiz_2=0;
	a=0;
	b=0;
	c=0;
	
}//end baskara


int baskara::setDelta(int a, int b, int c)
{
	delta=( (b*b)-4*a*c);
	
	return delta;
}//end setDealta



void baskara::calcBaskara(int a, int b, int c)
{
    char op;
    cout<<"usar valores pre-definidos: (y)Sim (n)Nao>> ";
    
    cin>>op;
    if(op=='n')
        setNewArgumentos();   
        
   //          |
   //caso nao \|/
    
    cout<<"Equacao: "<<endl;
    cout<<a<<"x^2 "<<b<<"x "<<c<<endl;
	if(setDelta(a, b, c)<0)
		cout<<"Delta negativo: Isso gera numero complexo:"<<endl;
	else
	{	    
        Raiz_1= ( -b+(setDelta(a, b, c)) )/2*a;
        Raiz_2= ( -b-(setDelta(a, b, c)) )/2*a;
        printBaskara(Raiz_1, Raiz_2);
	}

}//end calcBaskara

void baskara::printBaskara(int Raiz_1, int Raiz_2)
{
    cout<<"Raiz 1: "<<Raiz_1<<endl;
    cout<<"Raiz 2: "<<Raiz_2<<endl;
}

void baskara::setNewArgumentos()
{
    cout<<"Valor de a>>";
    cin>>a;
    cout<<"Valor de b>>";
    cin>>b;
    cout<<"Valor de c>>";
    cin>>c;
}//end setNewArgumntos









