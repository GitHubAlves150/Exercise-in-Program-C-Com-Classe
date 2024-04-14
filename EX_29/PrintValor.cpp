#include "PrintValor.hpp"

PrintValor::PrintValor()         //Cnstrutor para inicializar os membros de dados da classe
{
    ValorParaPrintar=0;

}//end ValorparaPrintar


void PrintValor::setValor(int val)
{
    ValorParaPrintar=val;         //Função setValor, seta a função  com mecanismos de segurança

}//end setValor

void PrintValor::PrintThis()
{
    cout<<"Valor recebido: "<<ValorParaPrintar<<endl;   //a função mostra o valor que foi armazenado na variavel membro
}

