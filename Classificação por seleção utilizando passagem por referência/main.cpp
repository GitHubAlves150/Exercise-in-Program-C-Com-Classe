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

    const int arraySize=10;
    int a[arraySize]= {100,900,80,70,6000, 50, 40, 30, 200, 10};
    cout <<"dados originais do vetor"<<endl;
    for(int i=0; i<arraySize; i++)
    {
        cout<<">>"<<a[i]<<endl;

    }
    selectionSort(a, arraySize);
    cout<<"Dados em ordem crescente do vetor:"<<endl;
    for(int j=0; j<arraySize; j++)
    {
        cout<<a[j]<<", ";

    }
    cout<<endl;

    return 0;
}//Fim


//========================================
//--Desenvolviemnto da(s) funções--
//função para classificar um array
void selectionSort(int *const V, int const SizeVector)
{

    for(int i=0; i<SizeVector; i++)
    {

        for(int j=0; j<SizeVector-1; j++)
        {
            if(V[j+1] < V[j])
                _swap(&V[j+1], &V[j]);
        }//Fim do for interno

    }//fim do for
}//fim da função selctionSort

void _swap(int *const element1ptr, int *const element2ptr)
{
    int auxiliar=0;
    auxiliar= *element1ptr;
    *element1ptr=*element2ptr;
    *element2ptr=auxiliar;
    //cout<<":"<<*element1ptr<<*element2ptr<<endl;
}
