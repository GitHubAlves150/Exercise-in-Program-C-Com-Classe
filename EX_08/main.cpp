/*
    Aula array do curso C++ do Wagner Rambo
    Programa que embaralha cartas
<<<<<<< HEAD

=======
>>>>>>> 5c9f4bf01caf51902efe6adb7a162e79da3cda2c
*/


#include <iostream>
#include "library.hpp"

using namespace std;

int main()
{

    char choose='y';
    unsigned counter=0;
    cout <<"iniciando..."<<endl;
    do
    {
        counter++;

        Cartas BaralhodeCartas;

        BaralhodeCartas.sorteia();

        cout<< "Cartas distribuidas " << counter << "vez(es).\n"<<endl;
        BaralhodeCartas.distribui();
        cout<< "Novo sorteio? (y) sim (n) nao."<<endl;
        cin>>choose;



    }while(choose=='y' || choose=='Y');

    cout << "Programa Encerrado." <<endl;

    while(1);
    return 0;
}
