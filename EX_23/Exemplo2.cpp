#include "Exemplo1.hpp"
#include "Exemplo2.hpp"

Exemplo2::Exemplo2():
X2(10.0)
{


}

double Exemplo2::mix()
{
    Exemplo1 op1;
    
    return sin(op1.X1) * sin(X2);

}//end mix