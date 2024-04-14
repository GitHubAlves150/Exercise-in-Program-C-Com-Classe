#include <iostream>
using namespace std;

int main()
{
    int top=-1;
    int popvalue;
    int tam=4;
    cout << "Stack" << endl;
    int Stack[6];


    for(int i=0; i<=6; i++)//push
    {
        Stack[++top]=i*2;

    }

    for(int i=0; i<=6; i++)//Display
    {
        cout<<","<<Stack[i];
    }


    cout<<"\nTop vale:"<<top<<endl;
    cout<<"\nDesempilhar"<<endl;


    //desempilhar
    for(int i=0; i<2; i++)//pop
    {
        popvalue=Stack[--top]=0;
        cout<<"desempilhar:"<<Stack[top]<<endl;

    }
    cout<<"\nTop vale:"<<top<<endl;
    for(int i=0; i<=6; i++)//Display
    {
        cout<<","<<Stack[i];
    }





    return 0;
}
