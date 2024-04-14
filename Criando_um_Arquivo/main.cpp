/*
----------Criando um Arquivo-----
Data: Setembro 2023
Lucas Lorenço ALves


*/



#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;//netrada e saido de stream
using std::cerr;

#include <fstream>
using std::ofstream;//classe de fluxo de saida para operar em arquivos


#include <cstdlib>
using std::exit;//tratamento de exeção



int main()
{
        ofstream Arq("Logtest.txt", ios::app);//cria o arquivo txt
        if(!Arq)
        {
            cerr <<"Error Arq:"<<endl;
            exit(1);
        }
    Arq<< "Meu primeiro arquivo em C+"<<endl;
    Arq.close();

    cout<<"...FIM...\n";
    while(1);

    return 0;
}
