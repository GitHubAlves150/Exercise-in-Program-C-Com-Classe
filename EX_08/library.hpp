#ifndef LIBRARY_HPP
#define LIBRARY_HPP
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::left;//justificativa dos textos
using std::right;//justificativa dos textos


#include <iomanip>
using std::setw;

#include <cstdlib> //protótipo das rand e srand
using std::rand;
using std::srand;

#include <ctime> //protótipo para time
using std::time;


class Cartas
{
public:
    Cartas();//construtor
    void sorteia();//sorteio das cartas
    void distribui();//distribuiçao das cartas

private:
    int baralho[4][13];//baralho com 4 nipes e 13 cartas


};//end class

//===================================================================
//---Final do arquivo hpp---






#endif // LIBRARY_HPP





















