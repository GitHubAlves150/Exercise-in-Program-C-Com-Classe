#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstring>
using std::string;


//#include "Mighty_Morphin.hpp"
#include "Ranger.hpp"
#include "Mighty_Morphin.hpp"

int main()
{

/*Zordon Alameda("Vermelho", "rinoceronte", "masculino", "Samuel L jackson");
Alameda.ToShow();*/
Zordon  Power("Amarela", "Dino", "Fem", "Kinberli");
Zordon *PowerPtr=0;

Rangers ranger("vermelho", "rex", "Mas", "Jhon", 21, "Todo mundo");
Rangers *rangerPtr=0;


//-----Acesso permitido com ponteiros-----
PowerPtr=&Power;//Aponta os atributos da linha 18
PowerPtr->ToShow();//Mostra os atributos da linha 18
cout<<"\n-----";
rangerPtr=&ranger;//Aponta os atributos da linha 21
rangerPtr->ToDisplay();//Mostra os atributos da linha 21
cout<<"\n-----";
PowerPtr=&ranger;//Aponta os atributos da linha 21
PowerPtr->ToShow();//Mostra os atributos da linha 21
cout<<"\n-----";




return 0;
}
