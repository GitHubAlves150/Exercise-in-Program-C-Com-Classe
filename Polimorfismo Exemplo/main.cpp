#include <iostream>

using namespace std;


#include "CheskingAccount.hpp"
#include "SavingAccount.hpp"


int main()
{
    cout << "Hello REAA!" << endl;


    //cria um objeto do tipo CheckinAccount a SavingAccount
    ChesckingAccount checking(100.45);
    SavingAccount   savings(33.2);

    //chama printBalance usando um ponteiro para a base Account
    Account *AccountPtr=0;
    AccountPtr=&checking;
    //ou
    //Account *AccountPtr=&checking;

    AccountPtr->PrintBalance();
    double valor=AccountPtr->GetBalance();
    cout<<"\nValor: "<<valor*4<<endl;
    //chama o printBalance usando um ponteiro para accout
    AccountPtr=&savings;
    AccountPtr->PrintBalance();


    return 0;
}
