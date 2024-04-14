#include <iostream>
using namespace std;
#include <math.h>
using std::sqrt;

//void func1(int a);
void func2( int( *argumento)(int), int valor);
int    soma10(int a);
void   printThis(void(*message)());//como é void então nao retorna nada por isso dos parenteses vazios
void   BomDia();
void   SantaCatarina();
int    soma(int a, int b, char &);
int    sub(int, int, char &);
int    mult(int, int, char &);
void   calc(int(*Oper)(int, int, char &), int, int);//Oper é uma função-seguido de conjunto de argumentos desta função
//===============================
double raizQuadrada(int, char &simbolo);
double quadrado(int, char &simbolo);
double cubico(int, char &simbolo);
void   Process(int, double(*Operacao)(int, char &));


int main()
{
    int s=9;
    func2(soma10, 22);
    printThis(BomDia);
    printThis(SantaCatarina);
cout<<"\n======\n";
    calc(soma, 2, 3);
    calc(sub,10, 2);
    calc(mult, 4, 10);
cout<<"\n======\n";
    Process(9, raizQuadrada);
    Process(9, quadrado);
    Process(9, cubico);

    return 0;
}

void func2(int (*argum)(int), int valor_)
{
    cout<<"valor da nova função: "<<(*argum)(valor_)<<endl;

}

//===============================================
int soma10(int b)
{
    return b+=10;

}
//===============================================
void printThis(void(*message)())
{
    (*message)();

}
//===============================================
void BomDia()
{
    cout<<"Bom dia ";
}
//===============================================
void SantaCatarina()
{
    cout<<"Santa Catarina ";

}
//===============================================
int    soma(int a, int b, char &Symbolo)
{
    Symbolo='+';
    return a+b;
}
//===============================================
int    sub(int a, int b, char &Symbolo)
{
    Symbolo='-';
    return a-b;
}
//===============================================
int    mult(int a, int b, char &Symbolo)
{
    Symbolo='*';
    return a*b;
}
//===============================================
void   calc(int(*Oper)(int a, int b, char &Sym), int a, int b)
{
     char Sym=';';
    int  resultado=(*Oper)(a, b, Sym);
    cout<<a<<Sym<<b<<"="<<resultado<<endl;
}
//===============================================
double raizQuadrada(int a, char &simbolo)
{
    simbolo=192;
    return sqrt(a);
}
//===============================================
double quadrado(int a, char &simbolo)
{
    simbolo='^';
    return a*a;
}
//===============================================
double cubico(int a, char &simbolo)
{
    simbolo='³';
    return a*a*a;
}
//===============================================
void   Process(int a, double(*Operacao)(int a, char &simbolo))
{
    char sym=';';
    double resultado= (*Operacao)(a, sym);
    cout<<sym<<" de "<<a<<" eh "<<resultado<<endl;

}
//===============================================











