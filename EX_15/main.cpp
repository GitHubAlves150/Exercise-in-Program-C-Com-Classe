/*
    Programa: Exercicio demostrativo do uso do construtor 
    e sobre carga

*/
#include <iostream>
using std::cout;
using std::endl;

#include "Time.hpp"

int main()
{
    Time tempo1;            //apresentara todos os argumentos no valor padrao
    Time tempo2(5);         //hora definida, demais argumentos padrao
    Time tempo3(15, 34);    //hora e minutos definidos, segundos no valor padrao
    Time tempo4(11, 17, 25); //todos os parametros definidos
    Time tempo5(88, 77, 66);//teste de valores invalidos
    
    
    cout<<"\n----------------------\n";
    cout<<"tempo 1\n";
    tempo1.printUniversal();
    cout<<endl;
    tempo1.printStandard();    
    cout<<"\n----------------------\n";
    
    cout<<"tempo 2\n";
    tempo2.printUniversal();
    cout<<endl;
    tempo2.printStandard();    
    cout<<"\n----------------------\n";
    
    cout<<"tempo 3\n";
    tempo3.printUniversal();
    cout<<endl;
    tempo3.printStandard();    
    cout<<"\n----------------------\n";
    
    cout<<"tempo 4\n";
    tempo4.printUniversal();
    cout<<endl;
    tempo4.printStandard();    
    cout<<"\n----------------------\n";
    
    
    cout<<"tempo 5\n";
    tempo5.printUniversal();
    cout<<endl;
    tempo5.printStandard();    
    cout<<"\n----------------------\n";
    
    cout<<"FIM"<<endl;
    
    while(1);
    return 0;
}
