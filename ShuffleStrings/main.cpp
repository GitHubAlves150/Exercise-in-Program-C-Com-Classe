#include <iostream>
using namespace std;
#include "ShuffleStrings.h"

int main()
{
    char again;
    do
    {

        ShuffleStrings Nomes;
        Nomes.setShuffle();
        Nomes.getShuffle();
cout<<"\n\nJogar novamente? \n\n<y>yes\n<N>not\n";
cin>>again;
system("clear");
    }while(again=='y' || again=='Y');
cout<<"...Fim da geração de nomes..."<<endl;
while(1);
    return 0;
}
