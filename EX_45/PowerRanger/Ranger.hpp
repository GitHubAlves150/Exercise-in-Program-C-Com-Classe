
#include <cstring>
using std::string;

#include "Mighty_Morphin.hpp"

#ifndef RANGERS_HPP
#define RANGERS_HPP

class Rangers: public Zordon //Ranger vai herdar os poderes de Zordon
{

public:
    Rangers(string, string, string, string, int, string);//days, è amigo de..
   ~Rangers();

    void setDaysRangers(int days);//dias em que já é um ranger
    void setAmigode(string);//é amigo de...
    void ToDisplay();

    int getDaysRangers();//retorna os dias de Rangers
    string getEhAmigoDe();

private:
    int _Days;
    string _EhAmigoDe;

};


#endif // RANGERS_HPP
