#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstring>
using std::string;


#include "Mighty_Morphin.hpp"
#include "Ranger.hpp"

int main()
{

Zordon Alameda("Vermelho", "rinoceronte", "masculino", "Samuel L jackson");
Alameda.ToShow();
Rangers ranger(20, "Tomy");
ranger.ToDisplay();

/*
Alameda.ToShow();
cout<<"-----------------------------------------------------------\n";
Alameda.setCorArmadura("azul");
Alameda.setNomeAnimal("gatinho_medonho");
Alameda.setSexoRanger("nao_binario");
Alameda.setNomeEscolhido("rita lee");
Alameda.ToShow();
cout<<"-----------------------------------------------------------\n";

Alameda.setCorArmadura("lilas");
Alameda.setNomeAnimal("gatinho_medonho");
Alameda.setSexoRanger("nao_binario");
Alameda.setNomeEscolhido("rita lee");
Alameda.ToShow();
*/


return 0;
}
