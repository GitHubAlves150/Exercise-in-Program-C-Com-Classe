#include <iostream>
using std::cout;
using std::endl;

#include "Relogio.hpp"


int main()
{
    TimeZone Watch;
    Watch.setTime(4, 35, 20);
    Watch.imprime();
    //cout<<endl;
    Watch.setHour(4).setMinute(20).setSecond(22).imprime();
    
    while(1);
    return 0;
}
