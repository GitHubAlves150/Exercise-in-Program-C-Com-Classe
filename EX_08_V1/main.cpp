/*
    Aula array do curso C++ do Wagner Rambo
    Menu formado por um array
*/


#include <iostream>

using namespace std;

int main()
{
   const char *menu[5]={"menu1", "menu2", "menu3", "menu4", "menu5"};
   for(int i=0; i<5; i++){
    cout<<menu[i]<<endl;
   }
    while(1);
    return 0;
}
