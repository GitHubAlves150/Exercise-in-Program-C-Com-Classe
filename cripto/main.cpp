#include <iostream>
using namespace std;

#include "cripto.hpp"

int main()
{
    //int tam=5;
    cout << "Hello world!" << endl;
    int Array[]= {10, 21, 3, 12, 15, 20, 33, 44};
    int dimensao=sizeof(Array)/sizeof(int);
    cout<<"dimensao:"<<dimensao<<endl;

    cripto senha;
    senha.display();
    cout<<endl;
    senha.criptografa(Array, dimensao);
    senha.display();
    return 0;
}
