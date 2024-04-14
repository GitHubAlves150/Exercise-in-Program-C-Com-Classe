

//===============================================
//--Inclusao das bibliotecas---

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;

#include <iomanip>
using std::setw;
using std::right;
using std::left;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

#include <string>
using std::string;

//===============================================
//--Protótipos das funções---

void SaveFile(string, int, double, float);//nome, quant, valor, subtotal
//===============================================
//--Abertura do arquivo global---
ofstream Arquivo("tabelaProd.txt", ios::out);

//===============================================
//--Programa principal---
int main()
{
    string Nome;
    int    quantidade  = 0;
    int    quant_Prod  = 0;
    double valor       = 0.0;
    double valor_quant = 0.0;
    float subTotal     = 0.0;




    //sistema de segurança na abertura do arquivo
    if(!Arquivo)
    {
        cerr << "Erro ao abrir o arquivo...."<<endl;
        exit(1);//primeiro erro
    }

    cout << "Informe a quantidade de produtos: " ;
    cin  >> quantidade;

    system("CLS");
    cout <<setw(20)<<right<<"Nome"<<" Qtd,  Valor,  Sub Total" << endl;
    cout <<"---------------------------------------------\n";


    Arquivo <<"NOME"<<"  |  QUANTIDADE | VALOR  | SUBTOTAL"<<endl;
    Arquivo <<"\n---------------------------------------\n"<<endl;
    for(int counter=1; counter<= quantidade; counter ++)
    {
        cout << "Produto: [" << counter << "/" << quantidade<<"]: " ;
        cin  >> Nome >> quant_Prod >> valor ;


        valor_quant=valor*quant_Prod;
        SaveFile(Nome, quant_Prod, valor, valor_quant);

        subTotal+=valor_quant;
        valor_quant=0;

        cout<<"\n";

    }
Arquivo <<"\n---------------------------------------\n"<<endl;
Arquivo <<"TOTAL GERAL"<< setw(26)<< right << subTotal<<endl;






    Arquivo.close();
    cout << "...Fim..."<<endl;

    while(1);


    return 0;
}


void SaveFile(string _Nome, int _Qnt, double _valor, float _SubTotal)
{
    Arquivo <<left  << setw(10)<<_Nome
            <<right << setw(9)<<_Qnt
            <<right << setw(9)<<_valor
            <<right << setw(9)<<_SubTotal << endl;
}





















