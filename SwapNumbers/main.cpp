#include <iostream>
using namespace std;
#include <string>
using std::string;

template<typename T>
T swapNumbers(T& variavel1, T &variavel2);



int main()
{
    int intVar1=20;
    int intvar2=10;
    int intV3=100;
    int *intvar3=&intV3;

    double doublevar1=30.66;
    double doublevar2=55.98;
    double doublevar3=88.69;

    char  charvar1='A';
    char  charvar2='B';
    char  charvar3='C';


    swapNumbers(intVar1, intvar2);
    cout <<"intvar1: "<<intVar1<<"\n"
         <<"intvar2: "<<intvar2;

cout<<endl;

    swapNumbers(doublevar1, doublevar2);
    cout <<"doublevar1: "<<doublevar1<<"\n"
         <<"doublevar2: "<<doublevar2;

cout<<endl;

swapNumbers(charvar1, charvar2);
    cout <<"charvar1: "<<charvar1<<"\n"
         <<"charvar2: "<<charvar2;




    return 0;
}
template<typename T>
T swapNumbers(T& variavel1, T &variavel2)
{
    T auxiliar;
    auxiliar=variavel1;
    variavel1=variavel2;
    variavel2=auxiliar;

}


















