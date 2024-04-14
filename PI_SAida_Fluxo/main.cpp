#include <iostream>
using namespace std;

#include <iomanip>
using std::setfill;
using std::setw;
#include "Assento.hpp"


int main()
{

    Assento Ingresso;//Objeto instanciado da classe Assento

    string nome;
    int sizeBuffer=20;
    int sair=0;


    Ingresso.LayOutCinema();
    Ingresso.LayoutTelona();


    while(sair!=1)
    {

        cout << "Digite o nome da pessoa: " <<endl;
        //cin >> nome;
        getline(cin, nome);

        Ingresso.setNomePessoa(nome);

        /*
        você pode usar esta macro
        #if defined(_WIN32) || defined(_WIN64)
                system("cls");
        #else defined(__linux__) || defined(__unix__)
                system("clear");
        #endif*/
        system("cls || clear");// limpa a tela do console tanto para O.S win ou linux
        Ingresso.LayOutCinema();
        Ingresso.LayoutTelona();

        cout << "Digite o nome do filme: " <<endl;
        //cin >> nome;
        getline(cin, nome);
        Ingresso.setNomeFilme(nome);


        system("cls || clear");// limpa a tela do console tanto para O.S win ou linux
        Ingresso.LayOutCinema();
        Ingresso.LayoutTelona();

        cout << "Digite o nome do Lugar: " <<endl;
        //cin >> nome;
        getline(cin, nome);
        Ingresso.setNumeroPoltrona(nome);

        system("cls || clear");// limpa a tela do console tanto para O.S win ou linux
        Ingresso.LayOutCinema();
        Ingresso.LayoutTelona();

        cout << "sair? \n<1>Sair\n<0>Nao\n";
        cin  >> sair;


    }

    return 0;
}
