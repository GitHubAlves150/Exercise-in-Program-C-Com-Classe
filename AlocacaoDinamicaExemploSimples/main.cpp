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

    int *P_inteiro=new int[4];//Aloca memoria para 4 inteiros
    double *P_double=new double[4];//Aloca memoria para 4 double
    Aluno *P_struct=new Aluno[4];//Aloca memoria para 4 estruturas do tipo Aluno

    //Insersão de valores para P_inteiro
    //Insersão de valores para P_double
    //Insersão de valores para P_struct

    delete[] P_inteiro;
    delete[] P_double;
    delete[] P_struct;


    return 0;
}
