/*

    programa que verifica a data de nascimento de um indivíduo 
    com a data atual fornecida pelo usuário, se forem iguais -> Feliz aniversário cara
    Autor: Lucas Lorenço Alves
    Ano: Dezembro de 2022
    Versão: V.0.0

*/
#include <iostream>     //inclusão de funcões padrão do C++
#include "library.hpp"  //biblioteca local

using namespace std;

int main()
{


    //CRIA OBJETOS
    Aniversario Today, Birthday;
    cout<<"BEM VNDO AO SISTEMA QUE CALCULA SEU ANIVERSARIO:\n"<<endl;
    
    cout<<"\nDIGITE A DATA EM QUE VOCE ESTÁ USANDO ESTE SISTEMA: \n";    
    Today.input();
    cout<<"\nVOCE ESTA USANDO ESTE SISTEMA EM: ";
    Today.out();  
     
    cout<<endl;
    
    Birthday.Set(3, 21);//PEGA A DATA DE ANIVERSARIO
    cout<<"\nO ANIVERSARIO DE J.S EH: ";
    Birthday.out();
    cout<<endl;
       
    if(Today.getMonthNumber() == Birthday.getMonthNumber()  && Today.getDay() == Birthday.getDay() )
        cout<<"Feliz aniversário! ";
    else
        cout<<"\nAINDA NAO EH SEU ANIVERSARIO: ";
   
    //chama a funcao

    while(1);
    return 0;
}
