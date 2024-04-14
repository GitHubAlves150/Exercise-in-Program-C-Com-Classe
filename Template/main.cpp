#include <iostream>
<<<<<<< HEAD

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
=======
using std::cout;
using std::cin;
using std::endl;


#include "stack.hpp"

int main()
{

double doublevalue=0.0;
int tam=0;

cout<<"Bem vindo ao coonceito de pilha em vetorial\n";

//cria um objeto usando o template
cout << "Quantos elementos? "<<endl;
cin  >> tam;

Stack<double>doubleValue(tam);
cout<< "inserir os elementos"<< endl;
while(doubleValue.push(doublevalue))
{
    cin >> doublevalue;
}
cout <<"Stack can not push more\n";


//com int
tam=0;
int intvalue=0;
Stack<int>intValue;//padrao 10 elementos
cout <<"Push the elements int\n";


while(intValue.push(intvalue))
{
    cin >> intvalue;
}
cout << "Finished the elements int\n";


    return 0;
}


























>>>>>>> 3689b4070f364dc361bfd0edeb6804cea1b7b0ce
