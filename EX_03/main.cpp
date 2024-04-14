/*
    programa para mostrar como é a passagem por referência para uma função
    o programa faz a troca inversa dos numeros digitados
    o objetivo é demonstrar que a alteração é feita na origem do valor da variavel 
    
    Autor: Lucas Alves
    Referência: Retirado do livro: C-Absoluto
    Ano: Dezembro de 2022
*/


#include <iostream>

using namespace std;

void getNumbers(int input_1, int &input_2);
void swapValues(int& value_1, int &vlue_2);
void showResults(int outPut_1, int outPut_2);

int main()
{
    int firstNumber, secondNumber;
    getNumbers(firstNumber, secondNumber);
    swapValues(firstNumber, secondNumber);
    showResults(firstNumber, secondNumber);
    while(1);
    return 0;
}



void getNumbers(int input_1, int &input_2){
    
    cout<<"Fornece o primeiro numero; ";
    cin>>input_1;
    cout<<"Forneca o segundo numero: ";
    cin>>input_2;
    
}
void swapValues(int& value_1, int &value_2){
    int auxiliar=0;
    auxiliar=value_1;
    value_1=value_2;
    value_2=auxiliar;
}
void showResults(int outPut_1, int outPut_2){
    cout<<"Em ordem inversa, os numeros sao "<<outPut_1<<" "<<outPut_2<<endl;
}























