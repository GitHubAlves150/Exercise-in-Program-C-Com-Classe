#include <iostream>

using namespace std;

int main()
{
    cout << "Hello REAA!" << endl;
    int N=50;
    int *ponteiro = new int[N+1];

    int i=0;
    int sim=0;
    cout << sim <<endl;
    cout << "Valor de N: " << N << endl;
    while(i != N)
    {

    cout << "Digite um numero: ";
    cin  >> ponteiro[i];
    cout << "indice: " << i << endl;

    i++;


    }
cout << "ok\n";
    i=0;
    while(ponteiro[i]!= '\0')
    {
        cout << "Numero digitado: " << ponteiro[i] << endl;
        i++;
    }


    return 0;
}
