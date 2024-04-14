#include <iostream>
using namespace std;
//Incluo todas as libs das classes
#include "CalculaComponente.hpp"
#include "Resisitor.hpp"
#include "Capacitor.hpp"


int main()
{
    cout << "Hello REAA" << endl;
    resistor  res;  //Crio um objeto da classe Resisitor
    capacitor cap;  //Crio um objeto da classe capacitor
    componente *component;
    componente *res_=&res; //Como a classe basica é virtual pura, é eceita apenas um ponteiro para os objetos

    cout<<" Resistor: "<<res_->getComponente(10.0, 2.0)<<endl;
    res_=&cap;
    cout<<"Capacitor: "<<res_->getComponente(10.0, 2.0)<<endl;

    return 0;
}
