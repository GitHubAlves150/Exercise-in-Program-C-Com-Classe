#include <iostream>
using namespace std;

#include <cstdlib>
using std::exit;

#include <fstream>
using std::ofstream;//para trabalhar com arquivos

#include <iomanip>
using std::setprecision;
using std::setw;

int main()
{
    cout << "Hello REAA!" << endl;
float resultado=32.443432;
    ofstream Arquivo("Teste.csv", ios::out);

    if(!Arquivo)
        exit(1);
    cout << "Arquivo aberto com sucesso: " << endl;
    Arquivo << resultado<<";"<< resultado << endl;

    Arquivo.close();//Fecha o arquivo
    return 0;
}
