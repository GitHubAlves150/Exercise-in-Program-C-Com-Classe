#ifndef TEMPLATESTACK_H
#define TEMPLATESTACK_H
#include <iostream>
using std::cout;
using std::endl;

template<class T>
class StackDate
{
public:
    StackDate(int=2);//inicia com 2 como default

    bool isEmpty()const;//esta vazio
    bool isFull()const;//esta cheio

    bool push(const T&);//insere dados
    bool pop( int itens);

    void Display();

private:
    int top;
    int SizeSatck;
    T Value;
    T *Stack;//Satck
    char *menu[];

};

//==================================================================
//--Desenvolvimento--

//--classe--
template<class T>
StackDate<T>::StackDate(int value):
    top(-1),//começa com -1 para representa-la vazia
    SizeSatck(value>5? 5:value),
    Value(0.0),
    Stack( new T[SizeSatck])//alocação dinamica
{
    //Empty
}//Fim class


template<class T>
bool StackDate<T>::isEmpty()const
{
    if(top==-1)
    {
        cout<<"Pilha vazia |";
        return true;
    }

    return false;
}

template<class T>
bool StackDate<T>::isFull()const
{
    if(top==SizeSatck)
        return false;
    return true;

}


template<class T>
bool StackDate<T>::push(const T &value)
{
    Stack[++top]=value;
    return true;
}


template<class T>
bool StackDate<T>::pop(  int itens)
{

    if( !isEmpty() )
    {
        for(int i=0; i<itens; i++)
        {
            Stack[SizeSatck--];
        }

    }



    return false;
}



template<class T>
void StackDate<T>::Display()
{
    if( !isEmpty() )
    {
        for(int i=0; i<SizeSatck; i++)
        {
            cout<<Stack[i]<<", ";
        }

    }


}



#endif // TEMPLATESTACK_H


