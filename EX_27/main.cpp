#include <iostream>
using std::cout;
using std::endl;

#include "Adjust.hpp"




int main()
{
    Adjust user1, user2, user3, user4(90);
    
    cout<<"-------------------------------\n";
    cout<<"USER 1 PARAMS:\n";
    user1.setVolume(30).setBrilho(33).setContrast(44);
    user1.dispParam();
    cout<<"-------------------------------\n";
    cout<<"USER 2 PARAMS:\n";
    user2.setVolume(30).setBrilho(33).setContrast(44);
    user2.dispParam();
    cout<<"-------------------------------\n";
    cout<<"USER3 PARAMS:\n";
    user3.setVolume(30).setBrilho(33).setContrast(44);
    user3.dispParam();
    cout<<"-------------------------------\n";
    cout<<"USER 4 PARAMS:\n";
    user4.setVolume(30).setBrilho(33).setContrast(44);
    user4.dispParam();
    
    cout<<"\n\nFim. "<<endl;
    while(1);
    return 0;
}
