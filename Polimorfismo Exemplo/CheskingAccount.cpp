#include <iostream>
using namespace std;
#include "CheskingAccount.hpp"


ChesckingAccount::ChesckingAccount(double c)
: Account(c)
{
    _x=c;
}

 ChesckingAccount::~ChesckingAccount(){}

double ChesckingAccount::GetBalance( )
{

    return _x*2;
}


void ChesckingAccount::PrintBalance()
{
    cout<<"(Derivada) valor de balance: "<<GetBalance()<<endl;
}


//https://learn.microsoft.com/pt-br/cpp/cpp/virtual-functions?view=msvc-170
