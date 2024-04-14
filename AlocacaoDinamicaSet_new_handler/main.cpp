#include <iostream>
using namespace std;

#include <new>
using std::set_new_handler;

#include <cstdlib>
using std::abort;

void myHandler();


int main()
{

    cout << "Hello REAA!" << endl;
    double *P_alloc[30];
    set_new_handler(myHandler);//esta funcão deve vir antes da alocação de memoria.

//Teste este exemplo

  //  P_alloc=new double[200000];//aumante este valor para ver o que acontece
  //  cout << "Sucesso na alocacao dinamica.." << endl;

//Teste este outro também
    for(int i=0; i<30; i++)
    {
        P_alloc[i]=new double[20000000];
        cout << "Sucessao ;.." << endl;
    }



    cout << "Fim.." << endl;
    while(1);

    return 0;
}

void myHandler()
{

    cerr << "Falha ao alocar memoria..";
    abort();
}
