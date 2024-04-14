#include <iostream>

using namespace std;

int main()
{
//Primeiro teste
/*
    cout << "Hello REAA!" << endl;
    char dado = '0';

    cout << "Digite um valor: ";
    dado=cin.get();

    cout<<"Vcoce digitou: ";
    cout.put(dado);

*/
//Segundo  teste


int SizeBuffer = 40;
char buffer[SizeBuffer];//buffer de tamanho 20
cout << "Digite uma menssagem: " << endl;

/*
cout << "Digite uma menssagem: " << endl;

cin.get(buffer, SizeBuffer);//armazena dados até bater o enter

cout<<"vc digitou: "<<buffer<<endl;

*/

//Terceiro teste

/*
cout <<"Digite uma menssagem: \n";

cin.get(buffer, 20, 'A'); //armazena os dados gitiados atpe o 'A';

cout<<"Voce digitou: "<< buffer;
*/

//Quarto teste
/*
cout <<"Digite uma menssagem: \n";

cin.getline(buffer, SizeBuffer);

cout << "Vcoe digitou: "<<buffer;
*/

cin.read(buffer, SizeBuffer);
cout << "Foi digitado: "<< buffer;
cout.write(buffer, cin.gcount() );





    return 0;
}
