#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include <cstdlib>
using std::exit;

#include <fstream>
using std::ofstream;

#include <ctime>
using namespace::std;


int main()
{
    cout << "Hello REAA!" << endl;
    cout << "Log de registro de um device" << endl;
    cout << "Temperatura - Nível" << endl;
    int temperatura =0,
        nivel       =0;
    //Estrutura de captura do time
    time_t Data_tempo;
    time(&Data_tempo);

    struct tm *data =localtime(&Data_tempo);
    struct tm *tempo=localtime(&Data_tempo);

    int day  = data->tm_mday,
        mes  = data->tm_mon,
        ano  = data->tm_year+1900, //é preciso somar 1900 para obter o ano correto
        hour = data->tm_hour,
        minut= data->tm_min;

    //Fim Estrutura de captura do time

    string status="OFF";

    ofstream File("Registro.csv", ios::app);
    if(!File)
    {
        cout << "Falha na abertura do arquivo:" << endl;
        exit(1);
    }
    //Data/Hora/Temperatura/Ligado ou desligado

    while(cin >> temperatura >> nivel)
    {

        if(temperatura >= 5 && nivel >=5)//coondição de status
        {
            status = "ON";
        }
        else
        {
            status = "OFF";
        }

        File << day<< "/" << mes << "/" << ano << ";" << hour << ":" << minut << ";" <<  temperatura << ";"  << nivel << ";" <<status <<"\n";

        temperatura =0;
        nivel       =0;
    }

    File.close();
    return 0;
}
