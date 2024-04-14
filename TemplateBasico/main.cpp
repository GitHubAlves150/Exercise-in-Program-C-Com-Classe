#include <iostream>
using namespace std;

#include "TemplateBasico.hpp"

int main()
{
    cout << "Bem vindo a mais um exemplo de templat" << endl;
    par<int>    parInt(90.2,2.6);
    par<double> parDouble(30.4, 2.1);
    //fpar<string> parString("Lucas", "Alves");

    parInt.displayDados();
    parDouble.displayDados();
    //parString.displayDados();

    return 0;
}
