//Exemplo de escrita no final do arquivo


#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream arq1;
//ios::app - abre o arquivo no final (depois do último caractere)
    arq1.open ("nomes.txt", ios::app);
    if (arq1.is_open())
    {
//tellp() - retorna a posição atual do apontador para escrita
        long pos = arq1.tellp();
        cout << "Posição atual no arquivo: " << pos << endl;
// Insere nomes no final do arquivo (foi aberto com ios::app)
        arq1 << "Álvares de Azevedo" << endl;
        arq1 << "Machado de Assis" << endl;
        arq1.close();
    }
    else
    {
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}
