/*
 Lucas Alves
 Data: Fev 2023

*/


#include <iostream>
using std::cout;
using std::endl;
using std::cin;


//==============================================================
//--Desenvolvimento da classe
class BankAccount
{

private:

    float Money=0;  //Dinheiro sacado ou retirado


public:
//-------Inicio da Funcao: Saque de dinheiro e atualiza com 0.5% do valor como  taxa de saque
    float setWithDrawMoney(float saque)
    {

        if(Money>=saque){
            Money=Money-( saque + ( (saque*0.5)/100) );
            return Money;
        }
        else{
            cout<<"VOCE NAO TEM SALDO PARA SACAR:"<<endl;
        return Money;
        }

    }
//-------Fim da Funcao: Saque de dinheiro e atualiza com 0.5% do valor como  taxa de saque

//=============================================================================================================
//-------Inicio da Funcao que mostra o valor atual no banco
    void getMoney_OnBank()  //retorna o saldo ataulizado
    {
        cout<<"            "<<Money<<" Reais"<<endl;
    }
//-------Fim da Funcao que mostra o valor atual no banco
//==============================================================================================================

//-------Inicio da Funcao de deposito de dinheiro no banco
    void setUpdate_Money(float money) //Depositar dinheiro na conta
    {
        Money=Money+money;
    }
//-------Fim da Funcao de deposito de dinheiro no banco

};//Final da classe BankAccount


int main()
{
//---Desenvolviemnto da variaveis locais
    int op=0;
    char opc='r';
    float money=0.0;
//--Decalração do meu objeto Myaccount
    BankAccount Myaccount;
    //CONSTRUCAO DO MENU

    const char *Menu[3]= {"\t\t\t0          SACAR",
                          "\t\t\t1          MOSTRAR.VALOR",
                          "\t\t\t2          DEPOSITAR",
                          };

    while(1)
    {
        cout<<"\n\n\n------------BEM VINDO AO BANCO REDONDO DE FLORIANOPOLIS-----------\n\n\n"<<endl;
        for(int i=0; i<3; i++)
        {
            cout<<Menu[i]<<endl;
        }

        cout<<"\n\n\nDIGITE OPCAO:"<<endl;
        cin>>op;
        switch(op)
        {
        case 0://sacar
            system("cls");
            cout<<"\n\n\nDIGITE O VALOR A SER SACADO"<<endl;
            cin>>money;
            Myaccount.setWithDrawMoney(money);

            break;
        case 1://mostrar valor
            system("cls");
            cout<<"\n\n\n===========SEU SALDO ATUAL É============="<<endl;
            Myaccount.getMoney_OnBank();
            break;
        case 2://depositar
            system("cls");
            cout<<"\n\n\nDIGITE O VALOR A SER DEPOSITADO"<<endl;
            cin>>money;
            Myaccount.setUpdate_Money(money);
            break;
        default:
            system("cls");
            cout<<"\a\a\a"<<endl;
            cout<<"\n\n\n================OPCAO INVALIDA! O PROGRAMA SUGERE SEGUIR O MENU:===============\n\n"<<endl;
            break;

        };
        cout<<"\n\n\n===DESEJA REALIZAR OUTRA OPERAÇÃO ?===="<<endl;
        cout<<">>n"<<endl;
        cout<<">>s"<<endl;
        cin>>opc;
        if(opc=='n' || opc=='N')
            break;
    system("cls");
    }
    cout<<"\n\n\n==============O BANCO REDONDO AGRADECE============== "<<endl;
    return 0;
}
