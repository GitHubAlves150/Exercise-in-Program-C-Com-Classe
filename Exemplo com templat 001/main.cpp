#include <iostream>

using namespace std;
template<class T>
T mymax(T A, T B);
template<class T>
T mymax(T A, T B, T C);
template<class T>
T mymax(T A);

int main()
{
    cout << "Bem vindo" << endl;
    int a=90,
        b=10;
    int   intretorno=0;
    float floatRetorno=0.0;
    //floatRetorno=mymax<float>(2.2, 3.3);
    cout << mymax(2.65, 2.2);
    cout<<endl;
    cout << mymax('A', 'Z');
    cout<<endl;
    cout << mymax(50, 10);
    cout<<endl;
    cout << mymax(5, 10, 80);
    cout<<endl;
    cout << mymax('f');

    return 0;
}


template<class T>
T mymax(T A, T B)
{
    return (A>B)? A:B;

}

template<class T>
T mymax(T A, T B, T C)
{
    return (A>B)? A:C;

}

template<class T>
T mymax(T A)
{

    return (A != 'f')? A:'y';

}
