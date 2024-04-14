#ifndef LIBRARY_H
#define LIBRARY_H

class  BanckAccount{
    public:
    
    BanckAccount(double balance, double rate);         //incializa o saldo e taxa de juros de acorodo com os argumentos
    BanckAccount(int dollares, int cents, double rate);//inicializa o saldo como $dollares.cents. Para um saldo negativo, tanto
                                                       //os dallares quanto os centavos devem ser negativos. Inicializa a taxa de juros como uma porcentagem.
    BanckAccount(int dollares, double rate);//inicializa o saldocomo $dollares.00 e 
                                            //inicializa a taxa de juros como uma porcentagem.
    BanckAccount();//inicializa o saldo como $0.00 e a taxa de juros como %0.0%.
    
    void Update();
    //Pós condição: Um ano de juros simples foi acrescentado ao saldo.
    void input();
    void output();
    double getBalance();
    int getDollares();
    int getCents();
    double getRate();//retorna a taxa de juros com uma porcentagem
    
    void setBalance(double balance);
    void setBalance(int dollares, int cents);
    
    //verifica se os argumentos sao ambos não negativos ou não positivos
     
    void setRate(double newRate);//se newRate é nao negativa, torna-se a nova taxa. caso contrario, aborta o programa
    
    private:
    //Uma quantia negativa é representada como dollares e centavos negativos
    
};



#endif