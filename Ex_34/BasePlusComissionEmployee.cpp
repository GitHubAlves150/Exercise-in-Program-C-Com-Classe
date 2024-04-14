
#include <iostream>
using std::cout;

//definição da classe BasePlussComissionEmployee
#include "BasePlusComissionEmployee.hpp"

//---construtor---
BasePlussEmployee::BasePlussEmployee(const string &first, const string &last,
                                     const string &ssn, double sales, double rate,
                                     double salary)
{

    _firstName=first;
    _lastName=last;
    _sosialSecurityNumber=ssn;
    setGrossSales(sales);
    setComissionRate(rate);
    setBaseSalary(salary);
}

//--configura o nome
void BasePlussEmployee::setFirstName(const string &first)
{
    _firstName=first;
}//Fim da função setFirstName

//---retorna o nome ja configurado---
string BasePlussEmployee::getFirstName()const
{
    return _firstName;
}//Fim da função getFirstName

//---configura o sobre nome----
void BasePlussEmployee::setLastName(const string &Last)
{
    _lastName=Last;
}//Fim da funçao setLastName

//---retorna o sobre nome já configurado---
string BasePlussEmployee::getLastName()
{
    return _lastName;
}//Fim da função getLastName

//---confugra o numero social ---
void BasePlussEmployee::setSocialSecurityNumber(const string &ssn)
{
    _sosialSecurityNumber=ssn;
}

//--retorna o numero social já configurado
string BasePlussEmployee::getSocialSecurityNumber()const
{
    return _sosialSecurityNumber;
}//Fim da função getSecurityNumber

//---Configura a quantidade de vendaas---
void BasePlussEmployee::setGrossSales(double sales)
{
    _grossSales=sales;
}

double BasePlussEmployee::getGrossSales()const
{
    return _grossSales;
}//Fim da função GrossSales

//----configura a taxa de comissão------
void BasePlussEmployee::setComissionRate(double rate)
{
    _comissionRate=(rate>0.0 && rate<1.0)? rate : 0.0;//se caso rate estiver dentro de 0.0 e 1.0, fica então com o que rate é, senão taxa para zero


}//Fim da função setComissionRate

//---retorna a taxa de comissão---
double BasePlussEmployee::getComissionRate()const
{
    return _comissionRate;

} //Fim da funçãogetComissionRate

//---calcula os rendimentos-------
double BasePlussEmployee::earnings()const
{
    return _baseSalary + (_comissionRate * _grossSales);
}//Fim da função earnings

//imprime o objeto BasePlusComissionEmployee
void BasePlussEmployee::shows()const
{
    cout<<"base-salaried comission employee: "<<_firstName<<' '<<_lastName
        <<"\n        Social security number: "<<_sosialSecurityNumber
        <<"\n                comission rate: "<<_comissionRate
        <<"\n                   base salary: "<<_baseSalary;
}//Fim da função show







//====================== Função Membro extra para esta classe==========================
//--configura a variavel membro privado com o valor de salary
void BasePlussEmployee::setBaseSalary(double salary)
{
    _baseSalary=salary;
}//Fim da função setBaseSalary

//retorna o valor de salary
double BasePlussEmployee::getBaseSalary()const
{
    return _baseSalary;
}//Fim da função getBaseSalary
































