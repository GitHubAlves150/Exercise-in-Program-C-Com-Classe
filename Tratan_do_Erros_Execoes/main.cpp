/*
Tratando de exxeçoes


*/
//=======================================================
//--Bibliotecas--

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include "ArrayLimit.h"
//=======================================================
//--Protótipos--

int enterIndex(int index);



//=======================================================
//--Func. Principal--
int main()
{
    int SizeArray=10;
    int Array[SizeArray]= {0};
    int index, content;


    while(1)
    {
        cout<<"digite um numero dentre (0-9)"<<endl;
        cin>>index;

        try
        {
            index=enterIndex(index);
        }
        //content=2; --> Ocorre um erro ao compilar  por que não é permitido ter alguma coisa entre o try e o catch
        catch(ArrayLimit &newIndex)
        {
            cout<< "Error: "<< newIndex.what() <<endl;
            continue;
        }

        cout<<"\nDigite o conteudo do array[" << index <<"]:";
        cin>>content;
        Array[index] = content;

        cout << "\nCoonteudo atual do array :\n";
        for(int i=0;  i<SizeArray; i++)
        {
            cout<<' '<<Array[i];
        }
        cout<<endl;

    }//end while




    cout<<"..Fim..\n";
    while(1);
    return 0;
}



//=======================================================
//--Desenvolvimento das funçoes--

int enterIndex(int index)
{
    //teste
    if(index < 0 || index >9)
        throw ArrayLimit();//lanço a exeção

    return index;

}









