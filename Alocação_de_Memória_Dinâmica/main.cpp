/*
Alocação dinamica de memoria
Data: setembro 2023
Curso de proramação em linguagem c++. WR Kits
Aluno: Lucas Lorenço Alves

*****usando bad_alloc*****

*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

#include <new>
using std::bad_alloc;
using std::set_new_handler;

#include <cstdlib>
using std::abort;


void MyHandler();

int main()
{
//===========================================
//-------usando bad_alloc--------
    /*
    double *palloc=0;

    //aloca memoria para ptr

    try
    {
            palloc=new double[20000000000];
            cout<<"Memoria alocada com sucesso!\n";
    }//end try
    catch(bad_alloc &memError)
    {
        cerr << "Erro, falha ao alocar memoria....\n"
             << memError.what()
             << endl;

    }//end catch


    */
//===========================================
//-------usando set_new_handler para alocação dinamica de memoria--------

     double *ptr_aloca[30]= {0};

    set_new_handler(MyHandler);



    for(int i=0; i<30; i++)
    {
        ptr_aloca[i]=new double[20000000];
        cout<<"Memoria alocada com sucesso novamente.["<< i <<"]"<<ptr_aloca[i]<<endl;
    }//end for












    cout<<"...Fim..."<<endl;
    while(1);

    return 0;
}

void MyHandler()
{
    cerr << "Falaha ao alocar memoria dinamicamente"<< endl;
    abort();

}









