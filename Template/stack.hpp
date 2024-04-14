#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:
    Stack(int = 10);
    ~Stack();
    bool push(const T&);
    bool pop(T&);
    void print(int);

    bool isEmpty()const
    {
    return _top== -1;
    }

    bool isfull()const
    {
    return _top==_size -1;
    }//Fim Full

private:
    int _size;
    int _top;
    T *stackptr;


};

//--Construtor padrao
template<typename T>
Stack<T>::Stack(int s):_size(s >0? s:10), _top(-1), stackptr(new T[_size])
{

}//fim do construtor padrao


//======================================================================
//--Destrutor
template<typename T>
Stack<T>::~Stack()
{
    delete []stackptr;
}//Fim do destrutor



//======================================================================
//--Template push--
template<typename T>
bool Stack<T>::push(const T &pushValue)
{
    if(!isfull())
    {
        stackptr[++_top]=pushValue;
        return true;
    }

    return false;
}//fim  push



//======================================================================
//--Template pop--
template<typename T>
bool Stack<T>::pop( T &popValue)
{
    if(!isEmpty)
    {
        popValue=stackptr[_top-1];
        return true;
    }
    return false;
}//Fm pop











#endif

