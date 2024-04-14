
#include <cstring>
using std::string;

#ifndef RANGERS_HPP
#define RANGERS_HPP

class Rangers{

public:
    Rangers(int, string);//days, è amigo de..
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
