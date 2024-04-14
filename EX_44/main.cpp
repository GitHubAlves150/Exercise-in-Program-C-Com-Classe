#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main()
{

cout<<"opa"<<endl;
int var=24;
int *ptr;

ptr=&var;

cout<<"Endereco de var: "<<&var<<endl;
cout<<"Endereço que ptr esta apontando: "<<ptr<<endl;
cout<<"Endereco que ptr esta: "<<&ptr<<endl;
cout<<"Conteudo de var: "<<var<<endl;
cout<<"Conteudo que ptr esta apontando: "<<*ptr<<endl;
cout<<"\n--------------------------------------------------\n";
*ptr=105;
cout<<"conteudo atual de ptr: "<<*ptr<<endl;
cout<<"Var foi atualizado pelo ptr: "<<var<<endl;

cout<<"Digite um inteiro"<<endl;
cin>>*ptr;
cout<<"Atualinzado o conteudo de ptr: "<<*ptr<<endl;
cout<<"Novo valor de var: "<<var<<endl;


return 0;
}
