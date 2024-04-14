#include <iostream>
using std::cin;
using std::cout;
using std::endl;



int main()
{
    float Dinheiro    =0.0,
          JurosTotal =0.0;
    int   tempo       =0,
          mes         =0;
    char  opt         ='\0';


    do
    {
        system("clear");
        cout << "Digite o capital inicial\n>>>";
        cin  >> Dinheiro;
        cout << "Quantos meses\n>>>";
        cin  >> tempo;

        JurosTotal =  ( Dinheiro*0.012163 ) * tempo;
        cout << "Juros total em " << tempo << " eh " << JurosTotal;

        cout << "\n(N-n) Sair?\n...";
        cin  >> opt;
    }while(opt == 'N' || opt== 'n');


    return 0;
}
