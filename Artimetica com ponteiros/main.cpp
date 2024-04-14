#include <iostream>
using namespace std;

//========================================
//--Corpo do programa--
int main()
{
    cout << "Hello REAA" << endl;
   int vetor[10]={1, 54, 33, 7, 65, 9, 87, 2, 33, 21};
   int *Vptr=vetor;
   int *Aptr=vetor;

   int a=*(Vptr+3);

   int v=*(Aptr+3);

   cout<<*(Vptr+3)+*(Aptr+3);
   cout<<*(Vptr+3)+*(Aptr+3);


    return 0;
}//Fim




