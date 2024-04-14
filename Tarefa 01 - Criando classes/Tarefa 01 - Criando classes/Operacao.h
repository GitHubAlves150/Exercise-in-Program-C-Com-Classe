#ifndef   OPERACAO_H
#define   OPERACAO_H


class BankAccount{

public:
    BankAccount();//construtor
    float Money;  //Dinheiro sacado ou retirado
    float salveValue;//valor armazenado

private:
    void getWithDrawMoney();//entrega o valor que será sacado e calcula o 0.5% de saque
    void setWithDrawMoney();//seta o valor que foi sacado

    void setDepositAmount();//seta um valor a ser depositado
    void getDepositAmount();//entrega o valor depositado

    void getsalveValue();//mostra o valor armazenado



};

#endif // OPERACAO_H
