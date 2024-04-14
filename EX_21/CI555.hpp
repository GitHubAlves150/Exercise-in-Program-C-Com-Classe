#include <iostream>
using std::cout;
using std::endl;



#ifndef CI555_H
#define CI555_H

class FriendsDemo
{
    friend void calcFreq(FriendsDemo &, double, double, double); //Função friend
    
    public:
        FriendsDemo(); //construtor
        void results();
    private:
        double f;
};


#endif //  CI555_H