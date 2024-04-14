//Exercicio do livro deitel 5 edição, pagina 678 Cp:17
#include "Includes.hpp"


//=========================================
//--Protótipos das funções--

enum RequestType { ZERO_BALANCE=1, CREDIT_BALANCE, DEBIT_BALANCE, END};
int  getRequest();
bool shouldDisplay(int, double);
void outputLine(int, const string, double);

int main()
{
    ifstream inClintsFile("clientes.dat", ios::in);
    if(!inClintsFile)
    {
        cerr << "Erro ao ler o arquivo\n...";
        exit(1);
    }//fim do if

    int    request   =0,
           account   =0;
    char   name[30]  ={'\0'};
    double balance   =0.0;

    //obtem a solicitação do usuário (saldo zero, credor ou devedor)
    request = getRequest();

    //processa  solicitação do usuário
    while(request != END)//se for 4, sai do programa
    {
        switch( request )
        {
        case ZERO_BALANCE:
            cout << "\nAccounts with zero balances:\n";
            break;
        case CREDIT_BALANCE:
            cout << "\nAccounts with credits balances\n";
        case DEBIT_BALANCE:
            cout << "\nAccounts with debits balances\n";
            break;
        default:
            cout <<"Erro no menu\n...";
        }//fim do switch case



  //Lê a conta, nome e saldo do arquivo
  inClintsFile >> account >> name >> balance;

  //Exibe o conteúdo do arquivo aé encontrar o final do arquivo (até EOF)
  while(   !inClintsFile.eof()  )
  {
     //exibe o registro
     if(    shouldDisplay(request, balance) )
        outputLine(account, name, balance);

     //lê a conta, o nome, e o saldo do arquivo
     inClintsFile >> account >> name >> balance;

  }//fim do while interno

  inClintsFile.clear();    //redefine o eof para a próxima entrada
  inClintsFile.seekg(0);   //reposiciona no começo de arquivo
  request = getRequest();  //obtém a solicitação adicional do usuário


}//fim do while externo

cout << "End of run. " << endl;

    return 0;
}//Fim do main


//obtém a solicitação do usuáio
int  getRequest()
{
    int request;//solicitação do usuário

    //exibe as opçoes
    cout << "\nEnter request\n"
         << "1- List account with zero balances\n"
         << "2- List account with credit balances\n"
         << "3- List account with debit balances\n"
         << "4- End of run" << fixed << showpoint;

   do//entrada da solicitaçao do usuário
   {

       cout << '\n';
       cin  >> request;


   }while(request < ZERO_BALANCE && request < END); //prende dentro das opçoes do menu

   return request;//retorna a opção do menu

}//fim da getRequest

//determina se exibe um dado registro
bool shouldDisplay(int type, double balance)
{
        //determina se exibe um saldos zeros
        if(type  == ZERO_BALANCE   && balance ==0)
            return true;
        //determina se exibe saldos credores
        if(type  == CREDIT_BALANCE && balance < 0)
            return true;
        //determina se exibe saldos devedores
        if(type  == DEBIT_BALANCE  && balance > 0)
            return true;

return false;
}//fim do shouldDisplay

//exibe um registro do arquivo
void outputLine(int account, const string name, double balance)
{

    cout << left    <<  setw(10)        << account << setw(13) << name
         << setw(7) <<  setprecision(2) << right   << balance  << endl;

}//Fim da função outputLine




























