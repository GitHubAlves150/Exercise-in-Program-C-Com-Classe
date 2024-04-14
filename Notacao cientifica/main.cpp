#include <iostream>
using std::scientific;
using std::endl;
using std::cout;
using std::internal;
using std::showpos;
using std::noshowpos;
using std::fixed;
#include <iomanip>
using std::setw;
using std::setfill;
using std::uppercase;
using std::setprecision;



int main()
{
    cout << "Hello REAA!" << endl;
    cout << scientific << 0.002 << endl;

    cout << showpos << setw(4) <<  23 << endl;
    cout << showpos << setw(4) << -23 << endl;


    cout << setfill('#') << setw(5) << noshowpos << 33 << endl;

    cout << uppercase << scientific << 0.003 << endl;

    cout << fixed;
    cout << uppercase << scientific << showpos << setprecision(5) << 0.0004 << endl;

    cout << setprecision(3) << 1.2 << endl;

    return 0;
}
