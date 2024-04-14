#include <iostream>
using namespace std;


#include <stdexcept>
using std::runtime_error;






int main()
{
    int numero1=0;
    int numero2=0;
    int resultado=0;

    while(1)
    {

    cout<<"Digite dois operandos para multiplicar: ";
    cin>>numero1>>numero2;
    resultado=numero1*numero2;

        try
        {

            if (resultado >= 65535)
            {
                cout << "\nErro: Ocorreu um overflow de memoria..\n";
            }
            else
            {
                throw 505;
            }
        }
        catch (...)
        {
            cout << "Resultado: "<<resultado<<endl;
        }



    }






    return 0;
}



