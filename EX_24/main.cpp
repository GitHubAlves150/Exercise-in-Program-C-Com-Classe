/*
    Uso do const
    Exercicio retirado do livro Deitel
    Autor: Lucas Lorenço Alves
    Data: Janeiro 2023
     
*/


#include <iostream>
using std::cout;

#include "Increment.hpp"


int main()
{
    Increment value(10, 5); 
    
    cout<<"Before incrementing: ";
    value.print(); //chama a função print para imprimir count e increment
    
    for(int j=1; j<=3; j++)
    {
        value.addIncrement();
        cout<<"After increment "<< j <<": ";
        value.print();    
    }//fim do for
    
    while(1);
    return 0;
}//fim do main
