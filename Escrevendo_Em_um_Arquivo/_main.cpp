#include <iostream>
using std::cin;
using std::endl;
using std::cout;
using std::ios;
using std::cerr;
using std::fixed;
using std::left;
using std::right;
using std::showpoint;

#include <fstream>//fluxo de entrada de arquivo
using std::ifstream;//insere fluxo de arquivo

#include <iomanip>
using std::setw;
using std::setprecision;

#include <string>
using std::string;

#include <cstdlib>
using std::exit;

void outputLine(int, const string, double);//protótipo




int main()
{
    ifstream inClientFile("clientes.dat", ios::in);//abre arquivo para leitura
    if(!inClientFile)
    {
        cerr << "Erro ao ler arquivo\n.....";
        exit(1);

    }

    int     account=0;
    char    name[30]={'\0'};
    double  balance=0.0;
/*
    while( inClientFile >> account >> name >> balance)
    {
        outputLine(account, name, balance);
    }
*/

    while(!inClientFile.eof())
    {
        inClientFile >> account >> name >> balance;
        cout  <<setw(10)<<left<< account <<setw(16)<<left<< name <<setw(10)<<left<< balance<<endl;
        if(account==1006)
        {

            cout << "------- Id encontratado: " << account << " de " << name << endl;
        }

    }

    return 0;
}

//exibe o registro do arquivo

void outputLine(int account, const string name, double balance)
{
    cout << left << setw(10) << account
                 << setw(13) << name
                 << setw(7)  << balance
                 << endl;
}//Fim da função outPutLine


