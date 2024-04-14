#include <iostream>
using namespace std;
//=====================
//- estrutura--
struct Aluno
{
    string anome;
    int matricula;
    int notas[3];

};
//=====================
//- Fim da estrutura--


int main()
{

    cout << "Hello REAA!" << endl;
    int *P_inteiro   = new int[4];   //Aloca memoria para 4 inteiros
    int *P_variavel  = new int;
    double *P_double = new double[4];//Aloca memoria para 4 double

    Aluno *P_struct  = new Aluno[4]; //Aloca memoria para 4 estruturas do tipo Aluno

    //Insersão de valores para P_inteiro
    //Insersão de valores para P_double
    //Insersão de valores para P_struct

    delete[] P_inteiro;//Naturalmente
    delete[] P_double; //Naturalmente
    delete[] P_struct; //Naturalmente
    //OBS!  Se eu uso new <tipo>[]. Então eu uso delete[]<tipo>
    //      Se eu uso apenas new. Então eu uso apenas delete
    delete P_variavel; //Não usei colchetes por que aloquei apenas uma variável

    return 0;
}
