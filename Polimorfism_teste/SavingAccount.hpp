#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "Account.hpp"

class SavingAccount:public Account
{
public:
    SavingAccount(double=0.5);//construtor
    ~SavingAccount();//destrutor

    double GetBalance();
    void PrintBalance();

private:
    double _t;
};



#endif // SAVINGACCOUNT_H
