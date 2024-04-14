
#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include "cartas.h"

cartas::cartas()
{
    //ctor
//inicializa o baralho com zero
    for(int i=0; i<=3; i++)
    {
        for(int j=0; j<=12; j++)
        {
            baralho[i][j]=0;
        }

    }
    srand(time(0));//semente para numeros leátorios
}


void cartas::sorteia()
{



}





cartas::~cartas()
{
    //dtor
}
