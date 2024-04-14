/*
    Ponteiro para funcoes
    Exercicio do módulo 4- aula 4.4
    Autor: Lucas Lorenço Alves
    Data: janeiro de 2023
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void func(int(*argFunc)(int), int val);
int soma10(int a);

void PrintThis( void(*message)());
void Hellow();
void wrkits();
int main()
{
    func(soma10, 45);
    PrintThis(Hellow);
    PrintThis(wrkits);
    system("PAUSE");
    return 0;
}


void func(int(*argFunc)(int), int val)
{
    cout<<"valor inteiro +20>> "<<(*argFunc)(val)<<endl;
}

int soma10(int a)
{
    return a+=20;
}

void PrintThis(void(*message)())
{
    (*message)();
}

void Hellow()
{
    cout<<"hellow"<<endl;
}

void wrkits()
{
    cout<<"wrkits"<<endl;
}
