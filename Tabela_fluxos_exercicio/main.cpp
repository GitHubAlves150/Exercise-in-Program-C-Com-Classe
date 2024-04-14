#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;
using std::hex;
using std::fixed;
using std::uppercase;
using std::nouppercase;
using std::scientific;


#include <ostream>
using std::ostream;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::setfill;


ostream &Pipe(ostream &pipe);


int main()
{
    int inteiro=12345;


//primeira linha

    cout<<Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe   <<setw(6) << inteiro <<setw(2)<<
          Pipe;

cout<<"\n";
//Segunda linha

    cout<<Pipe   << setw(7) << left <<uppercase<<hex<< 0  <<
          Pipe   << setw(7) << left << 1  <<
          Pipe   << setw(7) << left << 2  <<
          Pipe   << setw(7) << left << 3  <<
          Pipe   << setw(7) << left << 4  <<
          Pipe   << setw(7) << left << 5  <<
          Pipe   << setw(7) << left << 6  <<
          Pipe   << setw(7) << left << 7  <<
          Pipe   << setw(7) << left << 8  <<
          Pipe   << setw(7) << left << 9  <<
          Pipe   << setw(7) << left << 10  <<
          Pipe   << setw(7) << left << 11  <<
          Pipe;
          cout<<"\n";
          cout<<fixed;
          cout<<nouppercase;
//Terceira linha
    cout<<Pipe   << setw(7) << right << 0  <<
          Pipe   << setw(7) << right << 1  <<
          Pipe   << setw(7) << right << 24  <<
          Pipe   << setw(7) << right << 343 <<
          Pipe   << setw(7) << right << 24  <<
          Pipe   << setw(7) << right << 54  <<
          Pipe   << setw(7) << right << 6  <<
          Pipe   << setw(7) << right << 788  <<
          Pipe   << setw(7) << right << 898  <<
          Pipe   << setw(7) << right << 95  <<
          Pipe   << setw(7) << right << 866  <<
          Pipe   << setw(7) << right << 915  <<
          Pipe;
cout<<"\n";
//Quarta linha
cout<<fixed<<setprecision(3);
    cout<<Pipe   <<setw(6)  << right << 0.000  <<setw(2)<<
          Pipe   << setw(6) << right << 0.333  <<setw(2)<<
          Pipe   << setw(6) << right << 0.667  <<setw(2)<<
          Pipe   << setw(6) << right << 1.000  <<setw(2)<<
          Pipe   << setw(6) << right << 1.333  <<setw(2)<<
          Pipe   << setw(6) << right << 1.667  <<setw(2)<<
          Pipe   << setw(6) << right << 2.000  <<setw(2)<<
          Pipe   << setw(6) << right << 2.333  <<setw(2)<<
          Pipe   << setw(6) << right << 2.667  <<setw(2)<<
          Pipe   << setw(6) << right << 3.000  <<setw(2)<<
          Pipe   << setw(6) << right << 2.667  <<setw(2)<<
          Pipe   << setw(6) << right << 3.000  <<setw(2)<<
          Pipe;
cout<<"\n";
//Quinta linha
cout<<uppercase;
cout<<hex;
cout<<setfill('#');
   cout<< Pipe<<right   << setw(7)  << 0  <<
          Pipe<<right   << setw(7)  << 11 <<
          Pipe<<right   << setw(7)  << 10 <<
          Pipe<<right   << setw(7)  << 9  <<
          Pipe<<right   << setw(7)  << 8  <<
          Pipe<<right   << setw(7)  << 7  <<
          Pipe<<right   << setw(7)  << 6  <<
          Pipe<<right   << setw(7)  << 5  <<
          Pipe<<right   << setw(7)  << 4  <<
          Pipe<<right   << setw(7)  << 3  <<
          Pipe<<right   << setw(7)  << 2  <<
          Pipe<<right   << setw(7)  << 1  <<
          Pipe;
          cout<<"\n";
          cout<<fixed;
          cout<<nouppercase;
          cout<<setfill(' ');


//Sexta linha

    cout<<Pipe   <<setw(6)  << right << "FEMTO"  <<setw(2)<<
          Pipe   << setw(6) << right << "PICO"<<setw(2)<<
          Pipe   << setw(6) << right << "NANO"  <<setw(2)<<
          Pipe   << setw(6) << right << "MICRO"  <<setw(2)<<
          Pipe   << setw(6) << right << "MILI" <<setw(2)<<
          Pipe   << setw(6) << right << "CENTI"  <<setw(2)<<
          Pipe   << setw(6) << right << "DECI"  <<setw(2)<<
          Pipe   << setw(6) << right << "DECA"  <<setw(2)<<
          Pipe   << setw(6) << right << "HECTOffffff"  <<setw(2)<<
          Pipe   << setw(6) << right << "QUILO"  <<setw(2)<<
          Pipe   << setw(6) << right << "MEGA"  <<setw(2)<<
          Pipe   << setw(6) << right << "GIGA"  <<setw(2)<<
          Pipe;
cout<<"\n";


//Setima linha
cout<<scientific;
cout<<setprecision(0);
cout<<uppercase;
    cout<<Pipe   <<setw(6)  << right << 0.000000000000002  <<setw(2)<<
          Pipe   << setw(6) << right << 0.0000000000012<<setw(2)<<
          Pipe   << setw(6) << right << 0.000000006  <<setw(2)<<
          Pipe   << setw(6) << right << 0.000008  <<setw(2)<<
          Pipe   << setw(6) << right << 0.003 <<setw(2)<<
          Pipe   << setw(6) << right << 0.02  <<setw(2)<<
          Pipe   << setw(6) << right << 0.1  <<setw(2)<<
          Pipe   << setw(6) << right << 10.000000000  <<setw(2)<<
          Pipe   << setw(6) << right << 100.00000000  <<setw(2)<<
          Pipe   << setw(6) << right << 1000.0000000  <<setw(2)<<
          Pipe   << setw(6) << right << 1000000.0000  <<setw(2)<<
          Pipe   << setw(6) << right << 1000000000.0  <<setw(2)<<
          Pipe;
cout<<nouppercase;
cout<<"\n\n\n\n";



cout<<"..FIM..\n";




    return 0;
}





ostream &Pipe(ostream &pipe)
{
    return pipe<<'|';

}
