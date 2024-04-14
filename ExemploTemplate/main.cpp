#include <iostream>

using namespace std;


//=========================================
//--Template--
//--protótipo--
template<typename P>
void printArray(const P *Array, int cnt);

int main()
{
     int     a[6] ={0, 1, 2, 3, 4};
     double  b[10]={0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
     char    c[21]="lucas lorenco alves";
    cout<<"Tipo int>>";
    printArray(a, 5);
    cout<<"Tipo double>>";
    printArray(b, 10);
    cout<<"Tipo char>>";
    printArray(c, 21);



    return 0;
}


template<typename P>
void printArray(const P *Array, int cnt)
{

    for(int i=0; i<cnt; i++)
    {
        cout<<' '<< Array[i];
    }
cout<<endl;
}
