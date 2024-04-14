#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::ios;

#include <fstream>
using std::ofstream;
using std::ifstream;



int main()
{
    char str[40];


    ofstream ArquivoW("ArquivoTeste.txt", ios::out);//gera um arquivo
    if(!ArquivoW)
    {
        cerr << "Erro ao gerar arquivo:";
        exit(1);
    }

    ArquivoW << "Lendo_Arquivo!!"  << endl;

    ifstream ArquivoR("ArquivoTeste.txt", ios::in);
    if(!ArquivoR)
    {
        cerr << "Erro ao ler arquivo"<< endl;
        exit(2);
    }

    ArquivoR >> str;

    cout << "String lida: " << str << endl;

    ArquivoW.close();//fecha arquivo

    return 0;
}
