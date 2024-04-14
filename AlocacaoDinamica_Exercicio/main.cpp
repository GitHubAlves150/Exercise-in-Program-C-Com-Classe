#include <iostream>
using namespace std;

#include <new>
using std::set_new_handler;

#include <cstdlib>
using std::abort;
#include "newAlloc.hpp"

double *Alloc(const int valor);

void msg();

int main()
{
    cout << "Hello REAA!" << endl;


    double *newAlloc = Alloc(2000000000.0);


    cout <<"Alocado com sucesso" <<endl;


    return 0;
}

double *Alloc(const int valor)
{

    set_new_handler(msg);

    double *vetor[30];
    for(int i=0; i<30; i++)
    {
        vetor[i]= new double[valor];
        cout << "Sucesso..." << endl;
    }
    return *vetor;

}

void msg()
{

    cerr << "ops!...."<<endl;
    abort();
}
