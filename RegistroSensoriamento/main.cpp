#include <iostream>
#include <fstream>
#include <cstdlib>
using std::exit;



using namespace std;

int main()
{
    cout << "Hello Reaa!" << endl;

    float temperatura=0.0;
    float nivel      =0.0;

    //coleta do time
    time_t data_tempo;

    time(&data_tempo);

    struct tm *_data=localtime(&data_tempo);
    struct tm *_time=localtime(&data_tempo);



    int dia = _data->tm_mday,
        Week= _data->tm_wday,
        ano = _data->tm_year,
        hour= _time->tm_hour,
        minu= _time->tm_min,
        sec = _time->tm_sec;



    ofstream Registro;
    Registro.open("Diario.csv", ios::app);
    //Sistema de segurança para abertura de arquivos
    if(!Registro)
    {
        cout << "Falha na abertura do arquivo \n";
        exit(1);
    }
    cout << "Temperatura - Nìvel\n";


//Registro << "temperatura" << ";" << "Nível" << ";" << "Data" << ";" << "Time"<<"\n";
    while(cin >> temperatura >> nivel)
    {
        Registro << temperatura << ";" << nivel << ";"<< dia << "/" << Week << "/"<< ano << ";"<< hour << ":"<< minu << ":"<< sec << "\n";
    }
    cout <<"Gravado com sucesso" << endl;

    return 0;
}








