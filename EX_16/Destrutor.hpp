
#include <iostream>
using std::cout;
using std::cin;


#ifndef DESTRUTOR_H
#define DESTRUTOR_H

class Destrutor
{
    public:
        Destrutor(int numero); //desclarando um construtor
       ~Destrutor();           //desclarando um destrutor
    private:
        int NumeroId;
};//end class DestrutorTeste



#endif