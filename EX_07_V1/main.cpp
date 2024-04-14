/*

    Programa:
    Escreva um programa de notas para uma classe com as seguintes regras:
    a. Existem duas provas, cada uma com nota máxima 10.
    b. Existe um exame no meio do ano e um final, cada um com nota máxima 100.
    c. O exame final vale 50% da nota final, o de meio de ano vale 25% e as duas provas juntas valem um
    total de 25%. (Não se esqueça de normalizar as notas das provas. Elas devem ser convertidas em uma
    porcentagem antes de se fazer a média.)
    Qualquer nota de 90 ou mais equivale a A; entre 80 e 90, B; entre 70 e 80, C; entre 60 e 70, D; e menos de 60, E.
     O programa lerá as notas dos alunos e apresentará como saída o boletim do estudante, que
    consiste nas duas provas e nos dois exames, além da média numérica de todo o curso e da letra final. 
    Defina e utilize uma estrutura para o boletim do aluno.
    
    Exercício 1 do livro C-Absoluto, pagina 175, Walter Savitch
    
    Autor: Lucas Lorenço Alves
    Ano: Dezembro, 2022

*/


#include <iostream>
#include "library.hpp"

using namespace std;

int main()
{

   Avalizacao avaliacao;
   cout<<"BEM VINDO AO SISTEMA DE NOTAS "<<endl;
   cout<<"Nota do primeiro exame: ";
   avaliacao.getNote();//pega as notas
   avaliacao.calculate();
   avaliacao.outNote();
   
   
   while(1);
    return 0;
}
