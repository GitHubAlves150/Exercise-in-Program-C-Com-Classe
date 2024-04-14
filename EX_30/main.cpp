/*
Programa demostrativo sobre inicialização de Objetos
Autor: Lucas Alves
Data: Março 2023

*/


#include <iostream>

using namespace std;
#include "ClasseExemplo.hpp"

int main()
{
    cout << "Bem vindo\n" << endl;
    ClassExemplo Objeto_1(15, 16, 17);
    ClassExemplo Objeto_2(22, 44, 32);
    ClassExemplo Objeto_3(0, 0, 0);
    Objeto_1.PrintThis();
    cout<<"==============================\n";
    Objeto_2.PrintThis();
    cout<<"======================================\n";
    Objeto_3.setNumbers(2,2,2);
    Objeto_3.PrintThis();


    return 0;
}
