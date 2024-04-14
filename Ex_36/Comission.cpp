
//---include das bibliotecas---
#include <iostream>
using std::cout;

#include "Comission.hpp"

//Construção das funções
//construtor
comissonEmployee::comissonEmployee( const string &first, const string &last,
                                    const string &ssn, double sales, double rate)
{
    _firstName=first;//deve validar
    _lastName=last;//deve validar
    _socialSecurityNumber=ssn;//deve validar
    setGrossSales( sales);//valida e armazena as vendas brutas
    setComissionRate(rate);//valida e armazena a taxa de comissão

}//Fm do construtor ComissionEmployee

//-----configura o Nome-----
void comissonEmployee::setFirstName(const string &first)//recebo um endereço
{
    _firstName=first;//deve validar

}//fim da fucnção setFirstName


//-----retorna o nome-----------
string comissonEmployee::getFirstName()const
{
    return _firstName;

}//Fim da função

//--Configura o sobre nome----
void comissonEmployee::setLastName(const string &last)
{
    _lastName=last;//deve validar

}//Fim da funçãosetLastName

//---retorna o sobre nome-----
string comissonEmployee::getLastName()const
{
    return _lastName;
}//Fim da função getLastName

//-----configura o numero social-----
void comissonEmployee::setSocialSecurityNumber(const string &ssn)
{
    _socialSecurityNumber=ssn;
}//Fim da função setSocialSecority

//----retorna o SSN----
string comissonEmployee::getSocialSecurityNumber()const
{
    return _socialSecurityNumber;
}//Fim da função getSocialSecurity

//---configura a quantidade de vendas----
void comissonEmployee::setGrossSales(double sales)
{
    _grossSales=(sales<0.0)? 0.0 : sales;
}//Fim da função setGrossSales

//---retorna a quantidade de vendas----
double comissonEmployee::getGrossSales()const
{
    return _grossSales;
}//Fim da função getGrossSales

//---configura a taxa de comissão----
void comissonEmployee::setComissionRate(double rate)
{
    _comissionRate=rate;
}//Fim da função setcomissionRate

double comissonEmployee::getComissionRate()const
{
    return _comissionRate;
}//Fim da função getComissionRate


//----calcula os rendimentos-----
double comissonEmployee::earnings()const
{
    return _comissionRate*_grossSales;
}//Fim da função eranings

//---Imprime o obejto comissionEmployee
void comissonEmployee::shows()const
{
    cout<<"  Comission emplyee: "<<_firstName<<' '<<_lastName
        <<"\n  Social security: "<<_socialSecurityNumber
        <<"\n      gross sales: "<<_grossSales
        <<"\n   comission rate: "<<_comissionRate;
}//Fim da função shows













