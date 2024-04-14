#ifndef SHUFFLESTRINGS_H
#define SHUFFLESTRINGS_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::srand;
using std::rand;
#include <ctime>
using std::time;



class ShuffleStrings
{
    public:
        ShuffleStrings();
        void setShuffle();
        void getShuffle();

       ~ShuffleStrings();
    private:
        int _LinhaAleatorio[10];
        int _ColunAleatorio[10];

};

#endif // SHUFFLESTRINGS_H
