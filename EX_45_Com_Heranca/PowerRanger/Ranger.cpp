
#include <iostream>
using std::cout;
using std::endl;


#include <cstring>
using std::strcpy;
using std::strcmp;

#include "Ranger.hpp"



//-----Construtor-----
Rangers::Rangers(string CorArmadura, string NomeAnimal, string SexoRanger, string NomeEscolhido, int Days, string IsFriends): Zordon(CorArmadura, NomeAnimal, SexoRanger, NomeEscolhido)
{
    _Days=Days;
    _EhAmigoDe=IsFriends;

}

//-----Desstrutor-----
Rangers::~Rangers()
{
    cout<<"\nA rita repulsa pode nao ter destruido os Ranger. Mas este destrutor sim...\n";
}


//------Funçoes setting-----
void Rangers::setAmigode(string Frind)
{
    _EhAmigoDe=Frind;
}

void Rangers::setDaysRangers(int days){
    _Days=days;
}


//-----Funçoes getting--------

int Rangers::getDaysRangers()
{
    return _Days;
}

string Rangers::getEhAmigoDe()
{
    return _EhAmigoDe;
}


void Rangers::ToDisplay()
{
    Zordon::ToShow();

    cout<<"o ranger é amigo de "<<_EhAmigoDe
        <<" e ja faz "<<_Days<<" que eh um Ranger"<<endl;
}





















