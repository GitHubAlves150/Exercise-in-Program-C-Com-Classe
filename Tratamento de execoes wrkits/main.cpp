#include <iostream>
#include "ArrayLimit.hpp"
using namespace std;


int enterindex(int index);


int main()
{
    cout << "Hello REAA!" << endl;
    int Array[10]={0};
    int index, contents;
    while(1)
    {

        cout << "\nDigite o indice (0-9) do array";
        cin  >>  index;

        try
        {

            index = enterindex(index);

        }
        catch(ArrayLimit &limit)
        {
                cout <<"\nErro: " << limit.what() << endl;
                continue;
        }

        cout << "\nDigite o conteudo do array: " << endl;
        cin >> contents;
        Array[index]=contents;
        for(int i=0; i<10; i++)
        {
            cout << ' ' << Array[i] ;
        }
    }



while(1);
    return 0;
}



int enterindex(int index)
{
    if(index < 0 || index > 9)
        throw ArrayLimit();//lança a exxeção
    return index;
}
