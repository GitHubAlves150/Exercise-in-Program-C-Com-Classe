#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::system;

#include "Destrutor.hpp"

Destrutor Objeto1(1);
void func();

int main()
{
    cout<<"inicio da funcao principal "<<endl;
    Destrutor objeto2(2);
    static Destrutor obejto3(3);
    
    
    func();
    
    cout<<"Fim da funcao principal:"<<endl;
    
    system("PAUSE");
    return 0;
}

void func()
{
    cout<<"inicio da funcao auxiliar "<<endl;
    Destrutor objeto4(4);
    static Destrutor objeto5(5);
    cout<<"Fim da funcao auxiliar: "<<endl;
}










