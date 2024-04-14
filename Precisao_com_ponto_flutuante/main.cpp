#include <iostream>
using namespace std;//fixed está em iostream
//ostream está em iostream

#include <iomanip>
using std::setprecision;
using std::setw;
using std::left;
using std::right;
using std::setfill;


int main()
{
    cout << "Hello REAA!" << endl;

    double phi =1.63;

    cout << setfill('!') << setw(10) << phi << endl;
    cout.fill('#');
    cout << setw(9) << phi << endl;


    return 0;
}

