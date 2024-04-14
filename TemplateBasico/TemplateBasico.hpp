#ifndef TEMPLAT
#define TEMPLAT
#include "TemplateBasico.cpp"
#include <iostream>
using std::endl;
using std::cout;

//======================================
//--template de classe para dois dados--
template<class WhatsType>
class par
{
public:
    par(WhatsType A, WhatsType B);
    WhatsType gravaDados(WhatsType M, WhatsType N);
    WhatsType displayDados();
private:
    WhatsType date1;
    WhatsType date2;

};//Fim do template


//=====================================
//--Desenvolvimento das funçoes do templat--
template<class WhatsType>
par<WhatsType>::par(WhatsType A, WhatsType B)
{
    date1= (A>10?10:A);
    date2= (B>10?10:B);
    //Para mostrar a string, comente as linhas 29 e 30, e desomente as 32 e 33
    //date1=A;
    //date2=B;
}//fim do template do contrutor

template<class WhatsType>
WhatsType par<WhatsType>::gravaDados(WhatsType A, WhatsType B)
{
    date1= (A>10?10:A);
    date2= (B>10?10:B);
}//Fim do grava dados

template<class WhatsType>
WhatsType par<WhatsType>::displayDados()
{
    cout<<"Dados 1: "<< date1<<endl;
    cout<<"Dados 2: "<< date2<<endl;
}//Fim do display dados



#endif // TEMPLAT
