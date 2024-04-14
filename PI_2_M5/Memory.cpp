#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include "Memory.hpp"

Memory::Memory()
{
    for(int i=0; i<16; i++)
    {
        vetor[i]='\0';
    }

}

int Memory::carregar()
{
    
    for(int i=0; i<16; i++)
    {         
        srand(time(0));       
        vetor[i]=rand();
        cout<<">>"<<vetor[i];
    }
    return *vetor;
}









