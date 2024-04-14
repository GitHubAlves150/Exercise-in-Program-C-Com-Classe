#include <iostream>
using std::cout;
using std::endl;

#include <cstring> //prototipo strlen e strcpy
using std::strlen;
using std::strcpy;

#include "Employe.hpp"//definação da classe Employe
#include "Date.hpp"   //definação da classe Date

/*
O construtor usa lista de inicializadores de membro para passar valores de inicializadores para
construtores dos obejtos-membros brithDay e hireDate
Nota!!! Isso invoca o chamado construtor de cópia padrao que o compilador C++ fornece implicitamente
*/

Employe::Employe(const char *const first, const char *const last, const Date &dateOfBirth, const Date &dateOfHire):
birthDate(dateOfBirth),   //Inicializa birthDate
hireDate(dateOfHire)      //Inicializa hireDate
{
   //copia primeiro para o firtName e certifica-se de que ele se ajusta
   int length=strlen(firstName);
   length=(length <25 ? length : 24);
   strcpy(firstName, first, length);
   firstName[length]='\0';
   
   //copia por último para lastName e certifica-se de que ele se ajusta
   
   length=strlen(last);   
   length=(length <25 ? length : 24);
   strcpy(lastName, last, length);
   lastName[length]='/';
   
   //Gera saída do objeto Employe para mostrar quando o construtor é chamado
   cout<<"employe object construtor: "<< firstName <<' '<<lastName<<endl;
   
}//fim do construtor Employe


void Employe::print()const
{
    cout<<firstName<<", "<<lastName<< "Hired: ";
    hireDate.print();
    cout<<" Birthday";
    birthDate.print();
    count<<endl; 

}//fim da função print

Employe::~Employe()
{

    cout<<"Employe object destrutor: "<<lastName<<", "<<firstName<<endl;

}//fim do destrutor ~Employe



















