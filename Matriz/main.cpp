#include <iostream>
using namespace std;
#include <iomanip>


#include <cstring>
using std::getline;

int main()
{
    cout << "Hello REAA!" << endl;
//=================================================
//--teste--
    for(int i=0; i<4; i++)
    {

        for(int j=0; j<4; j++)
        {
            cout << "["<<i<<","<<j<<"]"   ;
        }
        cout << endl;
    }
//=================================================
//--teste--

    string str,
           _NomePessoa="Lucas",
           _NomeFilme="Aquaman2";


//=================================================
//--input--
    getline(cin, str);
    cout <<"foi digitado: " << str << "\n";
    cout << str[0] << str[1] << str[2] << endl;
//=================================================
//--cast de char para int--
    int A=str[1] - '0';
    int B=str[2] - '0';
    cout << A << B << endl;

    int i=0,
        j=0,
        l=0;

//=================================================
//--Contagem da string--
    while(_NomePessoa[i] != '\0' )
    {

        i++;
    }

    while(_NomeFilme[j] != '\0' )
    {

        j++;
    }

    while(str[l] != '\0' )
    {

        l++;
    }
//=================================================
//--Fim da contagem da string--
    for(int cnt_i=0; cnt_i<4; cnt_i++)
    {
        if(cnt_i==0)
        {
            cout << "|" << setfill('*') << setw(17) << "CINE-MA"  <<  setfill('*')    << setw(10)     << "|" ;
        }
        if(cnt_i==1)
        {
            cout << "|" << setfill(' ') << setw(13) << "NOME: "   <<  _NomePessoa     << setw(14-i)   << "|" ;
        }
        if(cnt_i==2)
        {
            cout << "|" << setfill(' ') << setw(12) << "FILME:"   <<  _NomeFilme      << setw(15-j)   << "|" ;
        }
        if(cnt_i==3)
        {
            cout << "|" << setfill(' ') << setw(12) << "ASSENTO:" <<  str << setw(15-l)   << "|";
        }
//=================================================
//--Marca o assento--
        for(int cnt_j=0; cnt_j<4; cnt_j++)
        {


            if(A==cnt_i && B==cnt_j)
                cout << "[ X ]";
            else
                //cout << "[" << i << "," << j << "]";
                cout << "[   ]";


        }
        cout << endl;
    }

    return 0;
}






















