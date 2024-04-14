#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::cerr;


#include <cstdlib>
using std::exit;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <string>
using std::string;

int main()
{

    string NameArq;
    char comp1[20];
    char comp2[20];
    char comp3[20];
    char comp4[20];


    cout << "Digite o nome do arquivo: ";
    cin  >> NameArq;

    NameArq= NameArq+".dat";//concatena a extensão do arquivo

    cout << NameArq;

    //Abre arquivo apra leitura
    ifstream ArqR(NameArq, ios::in);

    if(!ArqR)
    {
        cerr << "Erro ao abrir o arquivo..";
        exit(1);
    }//end if

cout<<'\n';
while(ArqR)
{
ArqR >> comp1 >>comp2>> comp3>> comp4;
cout << comp1 << ' ' << comp2 << ' ' <<' '<< comp3<<' ' << comp4<< endl;

}




cout << "\n Lido "<< endl;


while(1);

    return 0;

} //end main


















