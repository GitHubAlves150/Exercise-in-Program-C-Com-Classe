#ifndef NEWALLOC_H
#define NEWALLOC_H

#include <new>
using std::set_new_handler;
class newAlloc
{

public:
    newAlloc(int=0.0);

    void MyErrorMsg();
    void AnalizeMemory(int=0);

private:
    int _valor;
    int *P_alloc[30];

};
#endif // NEWALLOC_H
