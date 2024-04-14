#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{

    vector<int>V;
    vector<double>DoubleValue;
    vector<string>sringValue;
    string stringVa;
    cout<<"Forneca uma lista de números positivos\n"
        <<"Coloque um numero negativo no final"<<endl;


    int    next=0;
    double nextDouble=0.0;
    cin >> next;

    while(next>0)
    {
        V.push_back(next);
        cout<<next <<" acrescentado"<<endl;
        cout<<"V.size()=" << V.size()<<endl;
        cin >> next;
    }

    //==========================================
    cout<<"Agora coloque numeros com virgula"<<endl;
    cin >> nextDouble;
    while(nextDouble>0)
    {
        DoubleValue.push_back(nextDouble);
        cout<<nextDouble
         <<" acrescentado"<<endl;
        cout<<"doubleValue.size()=" << DoubleValue.size()<<endl;
        cin >> nextDouble;
    }

    //==========================================
    cout<<"Agora coloque string"<<endl;
    cin >> stringVa;
    while(stringVa !="sair")
    {
        sringValue.push_back(stringVa);
        cout<<nextDouble
         <<" acrescentado"<<endl;
        cout<<"stringvalue.size()=" << sringValue.size()<<endl;
        cin >> stringVa;
    }

    cout<<"Vector de interio"<<endl;
    for(int i=0; i<V.size(); i++)
    {
        cout <<".."<<V[i]<<endl;
    }
    cout<<"Vector de double"<<endl;
    for(int i=0; i<DoubleValue.size(); i++)
    {
        cout <<".."<<DoubleValue[i]<<endl;
    }

    cout<<"Vector de string"<<endl;
    for(int i=0; i<sringValue.size(); i++)
    {
        cout <<".."<<sringValue[i]<<endl;
    }
    return 0;
}
