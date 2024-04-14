#include <iostream>
#include "DivTres.hpp"


DivTres::DivTres()
{
    valToPrint=0;  //valor padrao ao iniciar

}

void DivTres::setValue(int val)
{
    valToPrint=val;
}//end setValue


void DivTres::printThis()
{
    cout<< "Valor recebido: " << valToPrint<<endl;
}//end printThis