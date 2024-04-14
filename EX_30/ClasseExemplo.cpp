#include "ClasseExemplo.hpp"


ClassExemplo::ClassExemplo(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

void ClassExemplo::PrintThis()
{
    cout<<"\na= "<<a<<endl;
    cout<<"\nb= "<<b<<endl;
    cout<<"\nc= "<<c<<endl;
}

void ClassExemplo::setNumbers(int a1, int b1, int c1)
{
    if(a1<10){
        a=a1;
        b=b1;
        c=c1;
    }

    else{
        cout<<"a é maior que 10\n"<<endl;
    }

}

