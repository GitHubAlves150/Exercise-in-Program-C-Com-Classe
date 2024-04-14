
#include "ClientData.hpp"
#include "Includes.hpp"

#include <string>
using namespace std;

//construtor client padrao
 ClientData::ClientData(int     accountNumberValue,
                        string  lastNameValue,
                        string  firstNameValue,
                        double  balanceValue)
 {
     setAccounterNumber(accountNumberValue);
     setLastName(lastNameValue);
     setFirstName(firstNameValue);
     setBalance(balanceValue);

 }//fim do coonstrutor padrão ClienteData


    //Obtém o valor do número da conta
    int  ClientData::getAccounterNumber()const
    {
        return accountNumber;
    }//Fim da função getAccounterNumber


    //configura o valor do número da conta
    void ClientData::setAccounterNumber(int accountNumberValue)
    {
        accountNumber = accountNumberValue;
    }//fim da função setaccounterNumber


    //Funçoes de acesso para lastName
    void ClientData::setLastName(string lastNameString)
    {
        //copia no maxima 15caracteres da string para lastName
        const char *lastNamevalue = lastNameString.data();
        int length = lastNameString.size();
        length     = (length < 15 ? length : 14);
        strncpy(lastName, lastNamevalue, length);//copia a string
        lastName[length] ='\0';

    }//fim da função setLastName


    //Obtém o sobrenome
    string ClientData::getLastName()const
    {
        return lastName;
    }//Fim da função getlastName



    //Funções de acesso para firstName
    void  ClientData::setFirstName(string firstNameString)
    {
        //copia no máximo 10 caracteres da string para firstName
        const char *firstNameValue = firstNameString.data();
        int length  =  firstNameString.size();
        length = (length < 10 ? length : 9);
        strncpy(firstName, firstNameValue, length);
        firstName[length]='\0'; //coloca o caractere nulo no final.
    }//Fim da função setFirstName.


    //obtém o valor do nome
    string ClientData::getFirstaName()const
    {
        return firstName;
    }//fim da função getFirsName;



    //Funções de acesso para balance
    void ClientData::setBalance(double balanceValue)
    {
        balance = balanceValue;
    }//fim da função setbalance


    double ClientData::getBalance()const
    {
        return balance;
    }
