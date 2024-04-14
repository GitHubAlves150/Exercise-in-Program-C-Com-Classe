#include <cstring>
using std::string;




#ifndef MIGHTY_MORPHY_HPP
#define MIGHTY_MORPHY_HPP

class Zordon
{
    public:
    //----Construtor-----
    Zordon(string, string, string, string);//cor da armadura,  animal, sexo,  Nome do escolhido
    ~Zordon();
    //----Funçoes setting--------
    void setCorArmadura(string);
    void setNomeAnimal(string);
    void setSexoRanger(string);
    void setNomeEscolhido(string);
    //----Display---------
    void ToShow();
    //----Funçoes getting--------
    string getCorArmadura();
    string getNomeAnimal();
    string getSexoRanger();
    string getNomeRanger();

    private:
    string _CorArmadura;
    string _NomeAnimal;
    string _SexoRanger;
    string _NomeEscolhido;



};



#endif //MIGHTY_MORPHY_HPP
