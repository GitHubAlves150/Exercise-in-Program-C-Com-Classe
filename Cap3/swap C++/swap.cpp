/*
Lucas Alves
Data janeiro de 2021
Troca os numeros do primeiro para o segundo
*/


#include <iostream>
using namespace std;

void getnumber(int& number1, int& number2); //lê dois numeros apartir do teclado
void swap(int& number1, int& number2);      //faz a troca entre eles
void show(int& number1, int& number2);      //Mostra os valores trocados

int main(){
    int firstNumber, SecondNumber;

    getnumber(firstNumber, SecondNumber);
    swap(firstNumber, SecondNumber);
    show(firstNumber, SecondNumber);


    return 0;
}


void getnumber(int &number1, int &number2)//lê dois numeros apartir do teclado
{
    cout <<"DIGITE UM NUMERO: ";
    cin >> number1;
    cout <<"DIGITE OUTRO NUMERO: ";
    cin >> number2;

}

void swap(int &number1, int &number2)     //faz a troca entre eles
{
    int auxiliar=NULL;
    auxiliar=number1;
    number1=number2;
    number2=auxiliar;
}
void show(int &number1, int &number2)      //Mostra os valores troca
{
    cout<< number1;
    cout<<"\n";
    cout<< number2;
}
