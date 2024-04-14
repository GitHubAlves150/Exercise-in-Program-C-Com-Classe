#include <iostream>
using std::endl;
using std::cout;

#include "Exemplo1.hpp"  //classes diferente
#include "Exemplo2.hpp"  //classes diferente


int main()
{
    Exemplo2 op2;  //objeto op2 da classe Ememplo2
    
    cout<<" Mixer: "<<op2.mix();
    
    cout<<"\n\nFim. "<<endl;
    
    while(1);
    return 0;
}
