#ifndef CARTAS_H
#define CARTAS_H


#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;


class cartas
{
    public:
        cartas();
        void sorteia();
        void distribui();
        ~cartas();


    private:
        int baralho[4][13];

};

#endif // CARTAS_H
