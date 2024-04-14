#include <iostream>

using namespace std;

#include <cstring>
using std::string;


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
    cout << "Hello Reaa!" << endl;



    Aluno *ponteiro=new Aluno[3];//Aloco um vetor de 3 posições que contém um estrutura de um aluno
                                 //O ponteiro me retorna a referência de onde começa a alocação na memória
    ponteiro[0].anome="Lucas";
    ponteiro[0].matricula=1234;
    ponteiro[0].notas[0]=5;
    ponteiro[0].notas[1]=8;
    ponteiro[0].notas[2]=10;

    ponteiro[1].anome="Ana Julia";
    ponteiro[1].matricula=6532;
    ponteiro[1].notas[0]=6;
    ponteiro[1].notas[1]=2;
    ponteiro[1].notas[2]=9;

    ponteiro[2].anome="Roberta";
    ponteiro[2].matricula=582;
    ponteiro[2].notas[0]=4;
    ponteiro[2].notas[1]=9;
    ponteiro[2].notas[2]=10;
cout << endl;

    cout << "Aluno 0: " << endl;
    cout << "     Nome: " << ponteiro[0].anome << endl;
    cout << "matricula: " << ponteiro[0].matricula << endl;
    cout << "   nota 1: " << ponteiro[0].notas[0] << endl;
    cout << "   nota 2: " << ponteiro[0].notas[1] << endl;
    cout << "   nota 3: " << ponteiro[0].notas[2]<< endl;

cout << endl;
    cout << "Aluno 1: " << endl;
    cout << "     Nome: " << ponteiro[1].anome << endl;
    cout << "matricula: " << ponteiro[1].matricula << endl;
    cout << "   nota 1: " << ponteiro[1].notas[0] << endl;
    cout << "   nota 2: " << ponteiro[1].notas[1] << endl;
    cout << "   nota 3: " << ponteiro[1].notas[2]<< endl;

cout << endl;

    cout << "Aluno 2: " << endl;
    cout << "     Nome: " << ponteiro[2].anome << endl;
    cout << "matricula: " << ponteiro[2].matricula << endl;
    cout << "   nota 1: " << ponteiro[2].notas[0] << endl;
    cout << "   nota 2: " << ponteiro[2].notas[1] << endl;
    cout << "   nota 3: " << ponteiro[2].notas[2]<< endl;



delete[] ponteiro;//Uso colchetes porque usei colchetes junto com new
if(!ponteiro)   //crio á unha, um sistema de proteção
    cout << "desalocado\n";//não usei chaves no if, por que não é um bloco de códigos e sim apenas uma linha
cout << "nao desalocado\n";//tem um else escondido aqui

    return 0;
}
