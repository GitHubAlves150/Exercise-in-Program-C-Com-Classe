#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;

#include "senCurrent.hpp"

int main()
{
    cout << "Hello REAA!" << endl;
    sensCurrent sensor("Current", 850, 2, 5.0, 500.0);

    cout<< fixed <<setprecision(4);
    sensor.dispResults();

    cout<<"Current = "<<sensor.currentVal()<<"ma"<<endl;
    return 0;
}
