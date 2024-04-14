#ifndef DIVTRES_H
#define DIVTRES_H


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

const int totalnumbers =15;

class DivTres{
    public:
        DivTres(); //construtor
        void getNumbers();
        void printResults();
    private:
        void numDivtres(int num[totalnumbers]);   //Funcão utilitária que retorna os numeors d
                                                  //divisiveis por 3
        int numbers[totalnumbers];                //armazena os valores que o usuario digitar
        char found[totalnumbers+1];               //armazenas  'Y' quando o index atual for divisivel por 3
                                                  //e 'N' quando não for
                                   
        
            
};//end class Divtres


#endif