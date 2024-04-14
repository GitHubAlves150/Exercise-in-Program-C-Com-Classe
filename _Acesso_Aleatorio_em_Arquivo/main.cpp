#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ios;



#include <fstream>
using std::fstream;
using std::ostream;
using std::ifstream;
using std::ofstream;

#include "Temperatura.hpp"

#include <cstdlib>
using std::exit;

//===========================================
//---protótipos das funçoes---
void geraRegistros(ofstream &arquivo, uint16_t totalAddr);
//===========================================
//---Funçao principal---
int main()
{

    int      numReg,
             endereco;

    uint16_t totalAddr;
    float    intTemp,
             extTemp;

    char     nivel,
             opt = 0;
    cout << "Escolha a opcao: \n"
         << "1- Criar arquivo novo\n"
         << "2- inserir novos registros\n...";
    cin  >> opt;

    if(opt=='1')
    {
        cout << "insira o numero total de endereços\n...";
        cin  >> totalAddr;
        ofstream RegTemp("registros.dat", ios::binary);

    geraRegistros(RegTemp, totalAddr);
    cout << "O arquivo Registro.dat foi criado com sucesso.\n..."
         <<  totalAddr
         <<  " enderecos.\n..";

    cout << "..Fim.."<< endl;

    RegTemp.close();
    while(1);
    }//end if
    //leitura
    fstream RegTemp("registros.dat", ios::in|ios::out|ios::binary);

    if(!RegTemp)
    {
        cerr << "Erro ao editar o arquivo registros.dat" <<endl;
        exit(2);

    }

    Temperatura S1;//sensor 1
    do
    {
        cout <<"Digite o endereço para armazenar os registros\n..";
        cin  >> endereco;
        cout <<"Insira registro, temperatura interna, externa e nivel\n..";
        cin  >> numReg >> intTemp >> extTemp >> nivel;
         S1.setRegNUm(numReg);
         S1.setIntTemp(intTemp);
         S1.setExtTemp(extTemp);
         S1.setNivel(nivel);
         S1.avgTemp(intTemp, extTemp);

         //escrever na posição desejada
         RegTemp.seekp(S1.getRegNum()-1*sizeof(Temperatura));
         RegTemp.write(reinterpret_cast<const char*>(&S1), sizeof(Temperatura));
         cout << "Armazenar novo dado: <S>Sim\n<N>Nao\n..";
         cin  >> opt;
    }while(opt!='n');
RegTemp.close();
cout << "Registros armazenados com sucesso\n...";

    return 0;
}



//===========================================
//---Desenvolvimento das funçoes---
void geraRegistros(ofstream &arquivo, uint16_t totalAddr)
{
    if(!arquivo)
    {
        cerr << "Erro: ao criar arquivo\n...";
        exit(1);

    }//end if
    Temperatura sensor1;

    for(int i=0; i<totalAddr; i++)
    {
        arquivo.write(reinterpret_cast<const char*>(&sensor1), sizeof(Temperatura));//posso usar write para escrever

    }


}

















