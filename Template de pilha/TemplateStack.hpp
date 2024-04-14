#ifndef STACK_H
#define STACK_H

template<class MyType>
class Stack
{
public:
    Stack(int =10);
    bool push(const MyType&);//insere
    bool pop(int );//remove
    //verifica o status da pilha, cheia o vazia
    bool isEmpty()const;
    bool isFull()const;
    //mostrar os valores
    void Display();

private:
    int Size;//tamanho da pilha
    int top;//posição do elemento na pilha
    MyType *stackPtr;

};
//==================================
//--desenvolvimento--
template<class MyType>
bool Stack<MyType>::isFull()const
{
    return top==Size-1;
}
template<class MyType>
bool Stack<MyType>::isEmpty()const
{
    return top==-1;
}
//Template construtor padrao
template<class MyType>
Stack<MyType>::Stack(int A):
    Size(A>0? A:10),//valida o tamanho
    top(-1),
    stackPtr(new MyType[Size] )//aloca memoria para elementos
{

}//Fim do construtor

//--insere um elemento--
template<class MyType>
bool Stack<MyType>::push(const MyType &Value)
{
    if(!isFull() )
    {
        stackPtr[++top]=Value;
        return true;
    }//Fim do if
    return false;
}//Fim do template da função inserção

template<class MyType>
bool Stack<MyType>::pop(int rm)
{
    if(!isEmpty())
    {
        for(int i=0; i<rm; i++)
        {
            stackPtr[--Size];
        }
    }
    return false;//senao mal sucedida
}//Fim do template da função pop
template<class MyType>
void Stack<MyType>::Display()
{

    for(int i=0; i<Size; i++ )
    {

        cout<<".."<<stackPtr[i]<<endl;

    }
}


#endif // STACK_H
