#include "ShuffleStrings.h"

ShuffleStrings::ShuffleStrings()
{
    for(int linhas=0; linhas<10; linhas++)
    {
        _LinhaAleatorio[linhas]=0;
        _ColunAleatorio[linhas]=0;

    }
    srand(time(0));
}


void ShuffleStrings::setShuffle()
{


    for(int linha=0; linha<10; linha++)
    {
        _LinhaAleatorio[linha]=rand()%10;
        _ColunAleatorio[linha]=rand()%10;
    }



    cout<<"....Fim do embaralhamento..."<<endl;
}


void ShuffleStrings::getShuffle()
{

    char *nome[10]= {"Lucas ", "Henrique ", "Marcos ", "Gustavo ", "Alicia ", "Giuliana ", "Roberta ", "Dani ", "Fernanda ", "MaryJany "};
    char *SobreNome[10]= {"Alves", "Steglich", "Marcondes", "Colombo", "Shulz", "Candorin", "Candoriano", "Martes", "Yashun", "Xerox"};

    for(int linha=0; linha<10; linha++)
    {
        cout<<nome[_LinhaAleatorio[linha]]<<" "<<SobreNome[_ColunAleatorio[linha]]<<endl;

    }


}

ShuffleStrings::~ShuffleStrings()
{
    //dtor
}



































