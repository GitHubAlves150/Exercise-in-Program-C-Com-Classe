#include <iostream>
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ios;

//Adicionando novas std para leitura do arquivo binario
using std::left;
using std::right;
using std::fixed;
using std::showpoint;

#include <fstream>
using std::ostream;
using std::ifstream;


#include "Temperatura.hpp"

#include <cstdlib>
using std::exit;

#include <iomanip>
using std:: setw;
using std::setprecision;

//============================================
//--Protótipo da função
void imprimeResultado(ostream& saida, const Temperatura &registro);

int main()
{
    ifstream RegTemp("registros.dat", ios::in);
    if(!RegTemp)
    {
        cerr << "Erro ao ler o arquivo\n..";
        exit(1);
    }
    cout << "Arquivo acessado\n...";

    Temperatura S1;

     RegTemp.read(reinterpret_cast<char *>(&S1), sizeof(Temperatura));

     while(RegTemp && !RegTemp.eof())
     {
         if(S1.getRegNum() != 0)
            imprimeResultado(cout, S1);
        RegTemp.read(reinterpret_cast<char *>(&S1), sizeof(Temperatura));
     }
RegTemp.close();
cout << "Registros lido com sucesso\n...";
while(1);
    return 0;
}









//============================================
//--Desenvolvimento das função--
void imprimeResultado(ostream& saida, const Temperatura &registro)
{
    saida << left      <<  setw(8)                << registro.getRegNum()
          << setw(11)  <<  setprecision(2)        << right                << fixed
          << showpoint <<  registro.getIntTemp()
          << setw(11)  <<  setprecision(2)        <<  right               << fixed
          << showpoint <<  registro.getExpTemp()
          << setw(11)  <<  setprecision(2)        << right                << fixed
          << showpoint <<  registro.getAvgTemp()
          << setw(6)   <<  registro.getNivel()    << endl;
}//end imprimeResultado














