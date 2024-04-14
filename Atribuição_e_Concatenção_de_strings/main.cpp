#include <iostream>
using namespace std;

#include <string>
using std::string;


int main()
{

    string string1("Curso de programacao C++");
    string string2= " Com Wagner Rambo";
    string string3;

    string str1("lucas_Alves");
    string str2("lucas");
    string str4(" ");
    //----concatenação----
    string1= string1+string2;
    cout << ":" << string1<<endl;

    string1 += "!!!!";
    cout << "::" << string1<<endl;

    string1.swap(string2);
    cout << ":::" << string1<<endl;

    string2.swap(string1);
    cout << "::::" << string1<<endl;

    //---comparação---
    cout << (string1 == string2)     <<endl;
    cout << (string1 == string3)     <<endl;
    cout << (string3 != string2)     <<endl;
    cout << (string2 > string3)      <<endl;
    cout << (string3 < string1)      <<endl;
    cout << (string1 <= string2)     <<endl;
    cout << string1.compare(string2) <<endl;
    cout << string1.compare(string3)  <<endl;
    cout << string3.compare(string2) <<endl;
    cout << str1.compare(str2) <<endl;//str1 tem um caractere a mais que str2;

    //---substring, uso para extrair um pequeno trecho duma string

    str1=str1.substr(2,7);//imprime a partir da 3° casa apenas 7 caracteres
    cout << str1 << endl;
    cout << str1.at(2) << endl; //imprime o caracter da 3° posição

    //----verificar caracteristicas de string
    //. cpacidade
    //. tamanho
    //.
    cout <<"capacity\n";
    cout << str1.capacity() << endl;//retorna o número de caracteres que podem ser armazenados na string sem alocar mais memoria
    cout <<"max_size\n";
    cout << str1.max_size() << endl;//retorna o maior tamanho possivel que a string pode ter
    cout <<"size\n";
    cout << str1.size() << endl;    //retorna o numero de caracteres da string
    cout <<"length\n";
    cout << str1.length() << endl;  //retorna o numero de caracteres da string
    cout <<"empty\n";
    cout << str4.empty() << endl;   //retorna 0 se a string contiver caracteres e 1 se estiver vazia


    return 0;
}
