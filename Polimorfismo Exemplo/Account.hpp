#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;
class Account
{

public:
    Account(double=0.0);
    virtual ~Account();
    virtual double GetBalance()=0;
    virtual void PrintBalance()=0;

private:
    double _balance;


};


#endif // ACCOUNT_H
