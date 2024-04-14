#include <iostream>
using namespace std;

template<typename NewType1>
void func1(NewType1 &resultado);


template<typename NewType1>
void func2(NewType1 *resultado);
int main()
{
    cout << "Hello REAA!" << endl;
    int numero=0;

    cout<<"Numero(Antes): "<<numero<<endl;
    func1(numero);
    cout<<"Numero(Depois): "<<numero<<endl;
    cout<<"========"<<endl;
    func2(&numero);
    cout<<"Numero(Depois): "<<numero<<endl;

    return 0;
}




template<typename NewType1>
void func1(NewType1 &resultado)
{
    resultado=resultado+2;

}


template<typename NewType1>
void func2(NewType1 *resultado)
{
    *resultado = *resultado+30;

}
















