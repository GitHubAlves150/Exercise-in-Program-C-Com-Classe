#include <iostream>
using namespace std;

#include "TemplateStack.hpp"

int main()
{
    const int SizeObjctInt=5;
    const int SizeObjctDouble=5;

    cout << "DRIVER PARA TESTAR O TEMPLATE STACK" << endl;
   //objetos templates
    Stack<double> StackDouble(SizeObjctDouble);
    Stack<int> StackInt(SizeObjctInt);


    double doubleValue;
    int intvalue;

    cout<<"Com valores double"<<endl;
    for( int i=0; i<SizeObjctDouble; i++ )
    {
        cout<<"Insere um valor double>>";
        cin >>doubleValue;
        StackDouble.push(doubleValue);
    }
    cout<<"Agora com valores interios:"<<endl;
     for( int i=0; i<SizeObjctInt; i++ )
    {
        cout<<"Insere um valor int>>";
        cin >>intvalue;
        StackInt.push(intvalue);
    }

    //Mostrar os valores
    StackDouble.Display();
    cout<<"..................."<<endl;
    StackInt.Display();

cout<<"Apos desempilhar"<<endl;
    StackDouble.pop(3);
    StackInt.pop(3);
    //Mostrar os valores após desempilhar itens
    StackDouble.Display();
    cout<<"..................."<<endl;
    StackInt.Display();

    return 0;
}
