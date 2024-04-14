#include <iostream>
using std::cout;
using std::ios;

#include <fstream>
using std::ostream;//gera saida de fluxo
using std::ofstream;


int main()
{

        ofstream Arquivo("Arquivo.dat", ios::app);
        Arquivo << "\narquivo gerado";

    return 0;
}
