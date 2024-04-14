#include <iostream>
using std::cout;
using std::endl;


#include "Date.hpp"
//construtor consfirma o valor adquado para month; 
//chama funcao utilitaria checkday para confirmar o valor adequado para day
Date::Date(int mm, int dd, int yy)
{
    if( mm>0 && mm<=12 )
    {
        month=mm;
    }
    else( dd>0 && dd<=31 )
    {
        day=d;
    }
    //ano pode ser qualquer ano
    
    year=yy;
    day=checkDay(dy); //valida o dia
    //Gera a saida do objeto Date para mostrar quando seu construtor é chamado
    cout<<endl;
    
}//fim do construtor

void Date::print()const
{
     cout<<month<< '/' << day << '/'<<'/'<<year<<endl;
     
}//fim da função print



//Gera saida do objeto Date para mostrar quando seu destrutor é chamado

Date::~Date()//descontrutor
{
    cout<< "Date objeto destrutor for date ";
    print();
    cout<<endl;
}//fim do destrutor Date


//função utilitaria para confirmar valor adequado de day
//com base em month e year; também trata anos bissextos
int Date::checkDay(int testeDay)const
{
    static const int daysPerMonth[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Determina se testeday é valido durante mês espesificado
    if(testeDay >0 && testeDay<= daysPerMonth[month])
    {
        return testeDay;
    }
    //verificação 29 de fev para ano bissexto
    if(month ==2 && testeDay==29 && (year % 400==0) || (year % 4==0 && year % 100 !=0) )
    {
        return testeDay;    
    }
    cout<<" invalid day "<<"( "<<testeday <<" )set to 1.\n";
    return 1; //Deixa o objeto em estado consistente se valor ruim
}//fim da função checkDay








