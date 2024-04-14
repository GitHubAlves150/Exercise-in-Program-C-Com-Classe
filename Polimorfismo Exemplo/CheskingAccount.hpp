#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.hpp"

class ChesckingAccount:public Account
{
public:
    ChesckingAccount(double=3.0);//cosntrutor
    ~ChesckingAccount();//destrutor
   double GetBalance();
   void PrintBalance();
private:
    double _x;
};


#endif // CHECKINGACCOUNT_H
