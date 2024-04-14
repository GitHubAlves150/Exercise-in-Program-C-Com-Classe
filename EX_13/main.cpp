<<<<<<< HEAD
=======
/*
   Programa que demostra a passagem de parametros por referencia e por valor

*/
>>>>>>> 5c9f4bf01caf51902efe6adb7a162e79da3cda2c


#include <iostream>
#include "DivTres.hpp"

using namespace std;

int main()
{

   DivTres valor;                  //declara um objeto valor
   DivTres *valorPtr= &valor;       //decalra um ponteiro para valor
   DivTres &valorRef= valor;      //declara referencia para valor

   valor.setValue(4);              //acesso ao objeto
   valor.printThis();

   valorRef.setValue(2);            //acesso por referencia
   valorRef.printThis();

   valorPtr->setValue(5);           //acesso por ponteiro
   valorPtr->printThis();


   while(1);
    return 0;
}
