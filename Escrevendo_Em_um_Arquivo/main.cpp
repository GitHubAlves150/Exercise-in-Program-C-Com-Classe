#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;// Biblioteca para processamento de entrada e saida de arquivos
using std::cerr;//saido protótipo de função.
#include <fstream> //Fluxo de arquivo
using std::ofstream;//gera fluxo do arquivo

#include <cstdlib>
using std::exit;



int main()
{
    //construtor ofstream abre arquivo
    ofstream outClientFile("clientes.dat", ios::app);

    //fecha o programa se não conseguir criar o arquivo
    if(!outClientFile)
    {
        cerr << "Fail: To create file of clients.dat" << endl;
        exit(1);
    }
    cout << "Created sucesses\n.." <<endl;

    int    account;
    char   name[30];
    double balance;

    //Lê a conta, nome e saldo de cin, então coloca no arquivo
    while(cin >> account >>  name >>  balance )
    {
        cout << "Conta numerica, Nome, Saldo\n";
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        //cout << 'N';
    }//Fim do while

    cout << "Saiu do while\n..";







    return 0;//destrutor  ofstream fecha o arquivo

}//fim do main

