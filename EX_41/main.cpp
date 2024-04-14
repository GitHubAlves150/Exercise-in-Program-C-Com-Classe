#include <iostream>
using std::cout;
using std::endl;

#include "Animal.hpp"

#include <string>
using std::string;

int main()
{


animal Animal;//Objeto Animal do tipo classe animal
cout<<"Programa compilado e rodado"<<endl;

Animal.setAnimal("tem escama", "toma leite");
cout<<"\n-------------------------------------------\n";
//Animal.Toshow();


Animal.setAnimal("Onca", "tem pelo", 4.4, 6);

//Animal.Toshow();

return 0;
}

