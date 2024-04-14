//Figura 17.15: fig17_15.cpp
//Este programa lê um arquivo de acesso aleatório sequencialmente,
//atualiza os dados previamente gravados no arquivo, cria dados a sere colocados
//no arquivo e exclui os dados previamente no arquivo.

//================================================================
//---includes de libs padrão---------
#include "Includes.hpp"
#include "ClientData.hpp"

//================================================================
//---Funções protótipos---------
int   enterChoice();
void  createTextFile( fstream& ); //passo o endereço do arquivo para criar o conteudo do arquivo
void  updateRecord( fstream& );   //passo o endereço do arquivo para fazer atualizações no arquivo
void  newRecord( fstream& );      //passo endereço do arquivo para adicionar conteudo
void  deleteRecord(fstream& );    //deleta conteudo do arquivo
void  outputLine(ostream&, const ClientData& );
int   getAccount(const char *const);


//================================================================
//---Cases para o switch---------
enum Choices{PRINT=1, UPDATE, NEW, DELETE, END};//Usado no switch

//================================================================
//---Função principal---------

int main()
{


//================================================================
//---Abre o arquivo para leitura e gravação---------
    fstream inOutCredit("credit.dat", ios::in | ios::out);


//================================================================
//---fecha o programa se fstream nao puder abrir o arquivo--------
    if(!inOutCredit)
    {
        cerr << "Erro ao abrir o arquivo\n...";
        exit(1);
    }//fim do if


//================================================================
//---armazena a escolha do usuário---------
    int choices;

//================================================================
//---permite o usuario espesificar a ação ---------
    while( (choices=enterChoice() ) != END )//a função enterChoise retorna um valor inteiro, e enquanto for diferente de END=5. Continua
    {
        switch(choices)
        {
        case PRINT:
            createTextFile( inOutCredit ); //cria um arquivo de texto a partir do arquivo de registro
            break;
        case UPDATE:
            updateRecord( inOutCredit );   //atualiza o registro
            break;
        case NEW:
            newRecord( inOutCredit );      //cria Registro
            break;
        case DELETE:
            deleteRecord( inOutCredit );   //exclui registro existente
            break;
        case END:                           //exibe erro se caso for digitado opção errada
            cerr << "incorrect choice " << endl;
            break;

        }//fim do switch
        inOutCredit.clear();
    }//fim do while


    return 0;

}//fim da main


//================================================================
//---permite ao usuário inserir as escolhas de menu---------
int enterChoice()
{
    //exibe as opções disponiveis
    cout << "1- store a formatted text file os account" <<endl;
    cout << "called \print.txt\ for printing" <<endl;
    cout << "2- update an account" <<endl;
    cout << "3- add new account" <<endl;
    cout << "4- delete an account" <<endl;
    cout << "5- end program\n?" <<endl;

    int menuChoice;
    cin >> menuChoice;//insere a seleção de menu do usuário
    return menuChoice;
}//fim da função enterChoice


//================================================================
//---cria arquivo de texto para impressão---------
void createTextFile( fstream &readFromFile)
{
    //cria arquivo de texto
    ofstream outPrintFile("print.txt", ios::out);
    //fecha o pograma se caso deu errado
    if(!outPrintFile)
    {
        cerr << "Erro ao criar arquivo\n...";
        exit(1);
    }//fim do if

    outPrintFile << left << setw(10) << "Acoount" << setw(16)
                 << "Last Name" << setw(11) <<" First Name" <<right
                 <<  setw(10) << "Balance" <<endl;
    //configura o ponteiro de posição de arquivo para o começo de redFromFile
    readFromFile.seekg(0);

    //lê o primeiro registro a partir do arquivo de registro
    ClientData client;

    readFromFile.read(reinterpret_cast<char *>(&client), sizeof(ClientData) );

    //copia todos os registros a partir do arquivo de registro para um arquivo de texto
    while(!readFromFile.eof() )
    {
        //grava um único registro no arquivo de texto
        if(client.getAccounterNumber() != 0 )//pula registros vazios
            outputLine(outPrintFile, client);
        //lê o pròximo registro a partir do aquivo de registro
        readFromFile.read(reinterpret_cast<char *>(&client), sizeof(ClientData));



    }//fim do while

}//fim da função createTextFile



//================================================================
//---atualiza o saldo no registro---------
void updateRecord(fstream &updateFile)
{
    //obtém o número de conta a atualizar
    int accounterNumber = getAccount("Enter accounter to update");

    //move o ponteiro de posiçãode arquivo para corrigir o registro no arquivo
    updateFile.seekg( (accounterNumber-1)* sizeof(ClientData)  );

    //lê o primeiro registro do arquivo
    ClientData client;
    updateFile.read(reinterpret_cast<char *>(&client), sizeof(ClientData) );

    //atualiza o registro
    if(client.getAccounterNumber() != 0)
    {
        outputLine( cout, client);//exibe o registro

        //solicita para o usuário espesificar a transação
        cout << "\nEnter change(+) or payment (-):";
        double transaction; //cobrança ou pagamento
        cin  >> transaction;

        //atualizao saldo do registro
        double oldBalance = client.getBalance();
        client.setBalance(oldBalance + transaction);
        outputLine(cout, client);//exibe o registro

        //move o ponteiro de posição de arquivo para corrigir o registro no arquivo
        updateFile.seekp( (accounterNumber-1) * sizeof(ClientData) );

        //grava o registro atualizado sobre o registro antigo no arquivo
        updateFile.write(reinterpret_cast<char *>(&client), sizeof(ClientData) );


    }//fim do if

    else//exibe err se a conta no existir
    cerr << "Account #"<<accounterNumber
         << "has no information."<<endl;


}//Fim da função updateRecord

void newRecord(fstream &insertInFile)
{

    //obtém o número da conta a ser criada
    int accounNumber= getAccount("Enter new accounter number");

    //move o ponteiro de posiçãode arquivo para corrigir o registro no arquivo
    insertInFile.seekg( (accounNumber-1)* sizeof(ClientData) );

    //lê o registro no arquivo
    ClientData client;
    insertInFile.read(reinterpret_cast<char *>(&client), sizeof(ClientData));

    //cria o registro, se ele ainda não existir
    if(client.getAccounterNumber() == 0)
    {
        char   lastName[15],
               firstname[10];
        double balance;

        //o usuário insere o sobrenome, o nome e o saldo
        cout << "Enter lastname, firstname, balance\n? ";
        cin  >> setw(15) >> lastName;
        cin  >> setw(10) >> firstname;
        cin  >> balance;

        //utiliza os valores para preencher os valores de conta
        client.setLastName( lastName );
        client.setFirstName(firstname);
        client.setBalance(balance);
        client.setAccounterNumber(accounNumber);

        //move o ponteiro de posição de arquivo para corrigir o registro no arquivo
        insertInFile.seekp( (accounNumber-1) * sizeof(ClientData) );

        //insere o registro no arquivo
        insertInFile.write( reinterpret_cast<char *>(&client), sizeof(ClientData) );

    }//Fim do if
    else//exibe erro se a conta já existir
    cerr << "Account# " << accounNumber
         << "alread contains information. " << endl;

}//Fim da função newRecord



void deleteRecord(fstream &deleteFromFile)
{
    //obtém o número de conta a existir
    int accountNumber =getAccount("Enter accounter to delete");

    //move ponteiro de posição de arquivo para corrigir o registro no arquivo
    deleteFromFile.seekg( (accountNumber-1)*sizeof(ClientData) );

    //lê o registro, se existir no arquivo
    ClientData client;
    deleteFromFile.read(reinterpret_cast<char * >(&client), sizeof(ClientData));

    //exclui o registro, se existir noa rquivo
    if(client.getAccounterNumber() != 0)
    {
        ClientData blankClient; //cria o registro em branco

        //move o ponteiro de posição de arquivo para corrigir o registro no arquivo
        deleteFromFile.seekp( (accountNumber-1)*sizeof(ClientData) );

        //subistitui o registro existente pelo registro em branco
        deleteFromFile.write( reinterpret_cast<char *>(&client), sizeof(ClientData));

        cout << "Account#"<<accountNumber <<" deleted.\n "<< endl;


    }//Fim do if

    else //exibe erro, se o arquivo não existir

    cerr << "Account# " << accountNumber << "is empty.\n" ;


}//Fim da função deleteRecord



//exibir um único registro
void outputLine( ostream&output, const ClientData &record)
{

    output << left << setw(10) << record.getAccounterNumber()
           << setw(16) << record.getLastName()
           << setw(11) << record.getFirstaName()
           << setw(10) << setprecision(2) << right << fixed
           << showpoint << record.getBalance() << endl;
}//Fim da função outputLine

//obtém o valor do número da conta a partir do usuário
int getAccount( const char * const promp)
{
    int accountNumber=0;

    //obtém o valor do número da conta
    do
    {
        cout << promp << "(1-100):";
        cin  >> accountNumber;


    }while(accountNumber < 1 || accountNumber > 100);

return accountNumber;

}//Fim da função getAccount
























