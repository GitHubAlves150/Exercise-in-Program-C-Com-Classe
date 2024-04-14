#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::ios;
using std::endl;

#include <fstream>
using std::ifstream;

#include <cstdlib>
using std::exit;

#include <string>
using std::string;


int main()
{
    cout << "Hello REAA!" << endl;
int i=0;

    ifstream Log("Log.csv", ios::in);

    if(!Log)
    {
        cerr << "Erro que ler o arquivo:";
        exit(1);
    }

    //string *data   = new string[50];
char Data[100] = "";
    Log.getline(Data, 100, '\n');
    int c=0;
    char compara[3]="ON";

  while(!Log.eof())
  {



    char hora[10]={'\0'};
    Log.getline(hora, 10, ';');
    cout << hora ;

    char temp[10]="";
    Log.getline(temp, 10, ';');
    cout << " "<<temp ;

    char nivel[10]="";
    Log.getline(nivel, 10, ';');
    cout << " " << nivel ;

    char status[10]="";
    Log.getline(status, 10, '\n');
    cout << " " << status ;

    cout <<endl;

  }

cout<< i <<" Ligados"<<endl;

    Log.close();

    return 0;
}























