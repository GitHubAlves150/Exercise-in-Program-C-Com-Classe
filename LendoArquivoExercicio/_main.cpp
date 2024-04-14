//Referências https://docente.ifrn.edu.br/brunogurgel/disciplinas/2012/fprog/aulas/cpp/aula11arquivos.pdf


#include <iostream>
#include <fstream>
using namespace std;
int main ()
{

    char str;

    ifstream ArquivoR("ArquivoTeste.txt", ios::in);
    if(!ArquivoR)
    {
        cerr << "Erro ao abrir o aquivo para leitura...\n";
        exit(2);
    }

    while(ArquivoR.get(str))
     cout << str;








    return 0;
}
