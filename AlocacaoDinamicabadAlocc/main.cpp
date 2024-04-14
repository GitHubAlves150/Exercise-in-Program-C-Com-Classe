#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new>
using std::bad_alloc;


int main()
{
    cout << "Hello REAA!" << endl;

    double *P_alloc=0;//Inicia em zero o vetor de double

    try
    {
        P_alloc= new double[20000000000000];//aumenta o valor para ver o que acontece
        cout <<"memoria alocada corretamente.." << endl;

    }
    catch(bad_alloc &memoryError)
    {
        cout << "Error: " << memoryError.what() << endl;
    }


    return 0;
}
