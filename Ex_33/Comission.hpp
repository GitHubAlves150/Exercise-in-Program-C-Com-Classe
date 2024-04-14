#ifndef COMISSION_H
#define COMISSION_H
//include das bibliotecas
#include <string>
using std::string;

//Arquitetura da classe comissionEmployee
class comissonEmployee
{
public:
    //construtor
    comissonEmployee(const string &, const string &, const string &, double =0.0, double =0.0);
    //declaração das funções
    void setFirstName(const string &); //configura o nome
    string getFirstName()const; //retorna o nome

    void setLastName(const string &);//configura o sobre nome
    string getLastName()const;//retorna o sobre nome

    void setSocialSecurityNumber(const string &);//configura o SSN
    string getSocialSecurityNumber()const;//retorna o SSN

    void setGrossSales(double);//configura a quantidade de vendas brutas
    double getGrossSales()const;//retorna a quantidade de vendas brutas

    void setComissionRate(double);//configura a taxa de comissão (Em porcentagem)
    double getComissionRate()const;//retorna a taxa de comissão

    double earnings()const;//calcula os rendimentos
    void shows()const;//imprime o objeto ComissionEmployee



private:
    string _firstName;
    string _lastName;
    string _socialSecurityNumber;
    double _grossSales;//veendas brutas mensais
    double _comissionRate;//porcentagem da comissão
};//Fim da classe comissionEmployee


#endif
