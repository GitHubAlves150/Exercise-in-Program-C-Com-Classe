#ifndef BASKARA_H
#define BASKARA_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <math.h>
using std::sqrt;



class baskara
{
    public:
        baskara();
        int setDelta(int a, int b, int c);
        void calcBaskara(int a, int b, int c);
        void printBaskara(int Raiz_1, int Raiz_2);
        void setNewArgumentos();
    private:
       
        float Raiz_1;
        float Raiz_2;
        float delta;
        int a, b, c;

};


#endif // BASKARA_H

