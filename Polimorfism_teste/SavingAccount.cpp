#include <iostream>
using namespace std;

#include "SavingAccount.hpp"


SavingAccount::SavingAccount(double g):
    Account(g)
{
    _t=g;
}
SavingAccount::~SavingAccount()
{

}

double SavingAccount::GetBalance()
{

    return _t*3;
}

void SavingAccount::PrintBalance()
{
    cout<<"Saving balance:"<<GetBalance()<<endl;
}
