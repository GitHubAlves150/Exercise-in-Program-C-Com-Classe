#include <iostream>
using namespace std;

template<typename NewType1>
void imprimi(NewType1 A, NewType1 B, NewType1 C, NewType1 D);

template<typename NewType1>
void imprimi(NewType1 A, NewType1 B, NewType1 C);

template<typename NewType1>
void imprimi(NewType1 A, NewType1 B);

template<typename NewType1>
void imprimi(NewType1 A);

int main()
{
    cout << "Hello REAA!" << endl;
    imprimi("Lucas", "Lorenco", "Alves", "Ok");
    imprimi(1.5, 3.54, 0.2);
    imprimi('A', 'r');
    imprimi("Top");


    return 0;
}



template<typename NewType1>
void imprimi(NewType1 A, NewType1 B, NewType1 C, NewType1 D)//imprimi 4 numeros
{

    cout<<A<<","<<B<<","<<C<<","<<D<<endl;


}


template<typename NewType1>
void imprimi(NewType1 A, NewType1 B, NewType1 C)//imprimi 3 numeros
{
    cout<<A<<","<<B<<","<<C<<endl;
}


template<typename NewType1>
void imprimi(NewType1 A, NewType1 B)//imprimi 2 numeros
{
    cout<<A<<","<<B<<endl;
}


template<typename NewType1>
void imprimi(NewType1 A)//imprimi 1 numeros
{
    cout<<A<<endl;

}






















