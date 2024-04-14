#include <iostream>

using namespace std;

int main()
{
    cout << "Hello REAA!" << endl;

    int var=9;
    int *PonteiroAlocado=new int[4]{14, 02, 37, 4};//0x7ffd20abffb0
    cout << "valor de PonteiroAlocado:" << *(PonteiroAlocado+2) << endl;
    cout << "valor de PonteiroAlocado:" << PonteiroAlocado[1] << endl;






    delete[] PonteiroAlocado;

    return 0;
}
