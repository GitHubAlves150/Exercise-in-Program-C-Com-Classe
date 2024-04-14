#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;


//========================================
//--Protótipo da(s) funções--
void selectionSort(int *const, const int);
void _swap(int *const, int *const);


//========================================
//--Corpo do programa--

int main()
{
    cout << "Hello REAA" << endl;
    double vetor[21];

    cout<<"Numero de bytes do array: "<<sizeof(vetor)<<endl;
    cout<<"Numero de elementos do vetor: "<<(sizeof(vetor)/sizeof(double))<<endl;


    return 0;
}//Fim


//========================================
//--Desenvolviemnto da(s) funções--

