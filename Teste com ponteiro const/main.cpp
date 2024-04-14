#include <iostream>
using std::cout;
using std::endl;

//========================================
//--Protótipo da(s) funções--



//========================================
//--Corpo do programa--

int main()
{
    cout << "Hello REAA" << endl;
    int x=5, y=1;
    //ptr é ponteiro constante para um inteiro constante.
    //ptr sempre aponte para a mesma posição; o inteiro.
    //nessa posição não pode ser modificado.
    const int *const ptr=&x;
    //int* ptr=&x;

    cout<<*ptr<<endl;
    *ptr=7;//erro: ptr é const; não é possível atribuir novo valor
    ptr =&y;//erro: ptr é const; não é possível atribuir endereço
    cout<<*ptr<<endl;
    return 0;


    return 0;
}//Fim


//========================================
//--Desenvolviemnto da(s) funções--


