
#include <iostream>
#include "library.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::left;//justificativa dos textos
using std::right;//justificativa dos textos


#include <iomanip>
using std::setw;

#include <cstdlib> //protótipo das rand e srand
using std::rand;
using std::srand;

#include <ctime> //protótipo para time
using std::time;

Cartas::Cartas()//construtor, inicializa o vetor baralho
{
    for(int linha=0; linha<4; linha++)//inicializa a linha
    {
        for(int coluna=0; coluna<13; coluna++)//inicializa as colunas
        {
            baralho[linha][coluna]=0;     //inicializa tudo com zero
        }//fim do laço interno
    }//fim do laço externo
    srand(time(0));//semente para numeros aleatórios
}//end consrutor Cartas

void Cartas::sorteia()//sorteio das cartas
{
    int linhas, colunas;//nipes e valor de cada carta

    for(int carta=1; carta<=52; carta++)
    {
        do
        {
            linhas=rand()%4;//seleciona a linha aleatoriamente
            colunas=rand()%13;//seleciona a coluna aleatoriamente

        }
        while(baralho[linhas][colunas] !=0); //sorteia novamente caso já existe um valor
        //diferente de zeo no slot atual
        baralho[linhas][colunas]=carta;
    }//end for
}//end sorteia


void Cartas::distribui()//distribuiçao das cartas
{
    static const char *nipe[4]= {"Copas",
                                 "Ouros",
                                 "Paus",
                                 "Espadas"
                                };

    static const char *face[13]= {"As",
                                  "Dois",
                                  "Tres",
                                  "Quatro",
                                  "Cinco",
                                  "Seis",
                                  "Sete",
                                  "Oito",
                                  "Nove",
                                  "Dez",
                                  "Valet",
                                  "Dama",
                                  "Rei"
                                 };
    for(int carta=1; carta<=52; carta++)
    {
        for(int linha=0; linha<4; linha++)
        {
            for(int coluna=0; coluna<13; coluna++)
            {
                if(baralho[linha][coluna]==carta)
                {
                    cout<<setw(9)<< right << face[coluna] << " de "
                        <<setw(9)<< left  << nipe[linha]
                        <<(carta %2 == 0 ? '\n' : '\t');
                }//end if
            }//end for mais interno
        }//end for interno do meio
    }//end for for externo


}//end distribui















