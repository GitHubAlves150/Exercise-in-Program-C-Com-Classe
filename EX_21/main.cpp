/*

    Exemplo de função friend
    Uma função friend de uma classe é definida fora do escopo desta classe, porém
    com ela também conseguimos acessar os dados "private" da classe  
    
    Autor: Lucas Alves
    Data: janeiro de 2023
*/
#include <cstdlib>
using std::system;

#include "CI555.hpp"

int main()
{
    FriendsDemo CI555;
    calcFreq(CI555, 1.5E3, 10.0E3, 470.0E-9);
    
    CI555.results();
    
    system("Pause");
    return 0;
}
