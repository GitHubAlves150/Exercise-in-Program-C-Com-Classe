#include <cctype>
#include <cstdio>
#include <iostream>
using namespace std;
#include <string>
using std::string;

#include "TemplatePilha.hpp"
#include "EfeitoMenu.hpp"

int main()
{
    int intElementes=4;
    int DoubleElements=4;
    double doubleValue=0.0;
    int opc=0;
    int cnt=4;
    double vetorAux[cnt];
    char flag='\0';
    char *menu[]= {"Inserir", "Verificar", "Desempilhar", "Sair"};
    StackDate<double> StackDouble(cnt);





    while(opc!=4)
    {
        cout << "***********************************" << endl;
        cout << "* Menu" << endl;
        cout << "* [1]"<<menu[0]<<endl;
        cout << "* [2]"<<menu[1]<< endl;
        cout << "* [3]"<<menu[2]<< endl;
        cout << "* [4]"<<menu[3]<< endl;
        cout << "***********************************" << endl;
        cout<<"Digite a opcao"<<endl;
        cin >>opc;
        system("clear");//linux
        system("CLS");//windows

//menu de escolha
        switch(opc)
        {
        case 1://inserir dados
            system("clear");//linux
            system("CLS");//windows
            menu[0]="INSERIR";
            for(int i =0; i<cnt; i++)
            {

                cout << "***********************************" << endl;
                cout << "* Menu" << endl;
                cout << "* [1]"<<menu[0] << "-----------"<< i << "/" << cnt<<endl;
                cout << "* [2]"<<menu[1]<< endl;
                cout << "* [3]"<<menu[2]<< endl;
                cout << "* [4]"<<menu[3]<< endl;
                cout << "***********************************" << endl;
                cin>>doubleValue;
                StackDouble.push(doubleValue);
                system("clear");//linux
                system("CLS");//windows
            }


            break;
        //Fim da inserção

        case 2://verificar dados na pilha

            cout << "***********************************" << endl;
            cout << "* Menu" << endl;
            cout << "* [1]"<<menu[0]<<endl;
            cout << "* [2]"<<menu[1]<<"-----------";
            StackDouble.Display();
            cout<<endl;
            cout << "* [3]"<<menu[2]<< endl;
            cout << "* [4]"<<menu[3]<< endl;
            cout << "***********************************" << endl;
            cout<<"\nprecione qualquer tecla.";
            cin>>flag;
            system("clear");//linux
            system("CLS");//windows


            break;

        case 3://desempilhar
            cout << "***********************************" << endl;
            cout << "* Menu" << endl;
            cout << "* [1]"<<menu[0]<<endl;
            cout << "* [2]"<<menu[1]<< endl;
            cout << "* [3]"<<menu[2]<<"-----------";
            StackDouble.pop(3);

            //StackDouble.Display();
            cout<<endl;
            cout << "* [4]"<<menu[3]<< endl;
            cout << "***********************************" << endl;
            cout<<"\nprecione qualquer tecla.";
            cin>>flag;
            system("clear");//linux
            system("CLS");//windows

            break;
        case 4:

            break;

        default:
            break;

        }

    }

   cout<<"...Fim..."<<endl;

    return 0;
}
