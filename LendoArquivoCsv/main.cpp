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


    ifstream Log("Log.csv", ios::in);

    if(!Log)
    {
        cerr << "Erro que ler o arquivo:";
        exit(1);
    }

    string *data   = new string[50];


    int i=0;
    while(!Log.eof())
    {
        Log  >> *data;
        cout << *data <<"\n";
    }


    return 0;
}
