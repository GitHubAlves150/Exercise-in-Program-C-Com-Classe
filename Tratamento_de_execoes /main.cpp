#include <iostream>
#include "Limitbits.hpp"
#include <stdexcept>
using std::runtime_error;


using namespace std;

int vetor(int indice);

int main()
{
    cout << "Hello REAA!" << endl;

    processador_16 Atom;
    int num1=0, num2=0, result;

    while(1)
    {
 cout << "Digite um numero: " << endl;
        cin >> num1;
        cout << "Digite outro: " << endl;
        cin >> num2;

        try
        {

            result= num1*num2;
            if(result > 65536)
            {
                throw std::runtime_error("Numero maior que 16bits");

            }

        }

        catch(std::exception& E)
        {
            cout << E.what() << endl;continue;
        }
        cout << "resultado: " << result << endl;

    }


    return 0;
}




