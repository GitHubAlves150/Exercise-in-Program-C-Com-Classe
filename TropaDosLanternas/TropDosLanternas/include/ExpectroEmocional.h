#ifndef EXPECTROEMOCIONAL_H
#define EXPECTROEMOCIONAL_H
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "ExpectroEmocional.h"


class ExpectroEmocional
{
    public:
        ExpectroEmocional(string collorRing="Default");
        void setSetor(string setor);
        void setPower(string powerRing);

        string getSetor();
        string getPower();

        void Display();
        ~ExpectroEmocional();

    private:

        string _Power;
        string _setor;


};

#endif // EXPECTRO EMOCIONAL_H
