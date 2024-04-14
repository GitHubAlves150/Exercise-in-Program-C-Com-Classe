#include <iostream>

using namespace std;

#include <cmath>
using std::sqrt;


double raiz(double x);


int main()
{

    double x, y;
    cout<<"digite um numero: ";
    cin>>x;


    try
    {
        y=raiz(x);
        cout<<"Raiz: "<< y << endl;

    }
    catch(const char *erro)
    {
        cout<< erro;
    }



    return 0;
}



double raiz(double x)
{
    if(x<0.0)
    {
        throw "Erro da raiz meu chapa\n";
    }
    return sqrt(x);

}
