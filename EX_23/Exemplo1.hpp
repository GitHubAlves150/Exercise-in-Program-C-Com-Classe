#include <cmath>
using std::sin;

#ifndef EXEMPLO1
#define EXEMPLO1


class Exemplo1
{
    friend class Exemplo2; //para acessar os membros da classe Exemplo2
                           //Emplo2 é amigo de Exemplo1
    public:
        Exemplo1();
    private:
        double X1;

};//end class EXemplo1

#endif //end EXEMPLO1