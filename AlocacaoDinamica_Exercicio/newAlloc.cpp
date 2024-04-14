#include "newAlloc.hpp"
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new>
using std::set_new_handler;

#include <cstdlib>
using std::abort;


newAlloc::newAlloc(int valor)
{


    for(int i=0; i<30; i++)
    {

        P_alloc[i]=new int[valor];

    }

}
/*

void newAlloc::MyErrorMsg()
{
    cerr << "ops!! Errou.." << endl;
    abort();
}

void newAlloc::AnalizeMemory(int valor)
{

     //set_new_handler(MyErrorMsg);

    for(int i=0; i<30; i++)
    {

        P_alloc[i]=new int[valor];

    }
}


*/
