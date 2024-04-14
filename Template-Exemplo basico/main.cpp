#include <iostream>
using namespace std;
#include <string>
using std::string;


//=================================
//--Clsse--
template<typename newType, unsigned short U>
class minhaClasse
{

public:
    minhaClasse();
    void gravVetor();
    void mostraVetor();

private:
    newType vetor[10];


};

int main()
{
    cout << "Hello REAA!" << endl;
    //================================
    //--com int--
    minhaClasse<int, 2> m1;
    cout<<"inserindo valor do tipo int\n";
    //m1.mostraVetor();
    m1.gravVetor();
    m1.mostraVetor();
    //================================
    //--com double--
    cout<<"inserindo valor do tipo double\n";
    minhaClasse<double, 2> m2;
    //m2.mostraVetor();
    m2.gravVetor();
    m2.mostraVetor();

    //================================
    //--com char--
    cout<<"inserindo valor do tipo char\n";
    minhaClasse<char, 5> m3;
    //m2.mostraVetor();
    m3.gravVetor();
    m3.mostraVetor();


    //================================
    //--com string--
    cout<<"inserindo valor do tipo string\n";
    minhaClasse<string, 5> m4;
    //m2.mostraVetor();
    m4.gravVetor();
    m4.mostraVetor();



    return 0;
}


//=================================
//--Desenvolvimento de funções--
template<typename newType, unsigned short U>
minhaClasse<newType, U>::minhaClasse()
{
    for(int i=0; i<U; i++)
    {
        vetor[i]='\0';
    }


}



template<typename newType, unsigned short U>
void minhaClasse<newType, U>::gravVetor()
{
    for(unsigned short i=0; i<U; i++)
    {
        cout<<"insira um numero: "<< '[' << i<<'/'<<U<<']';
        cin>>vetor[i];
    }
}

template<typename newType,  unsigned short U>
void minhaClasse<newType, U>::mostraVetor()
{
    for(int i=0; i<U; i++)
    {
        cout<<" >> "<<vetor[i];
    }
cout<<endl;
}



















