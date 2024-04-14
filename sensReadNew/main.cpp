#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;

#include "senCurrent.hpp"
#include "senVolt.hpp"

int main()
{
    cout << "Hello REAA!" << endl;
    sensVolt sensorA("Tensao", 521, 1, 3.3);
    sensVolt *sensorAPtr=0;

    sensCurrent sensorB("Corrente", 421, 2, 5.0, 10000.0);
    sensCurrent *sensorBPtr=0;

    sensorAPtr = &sensorA;
    sensorAPtr->dispResults();

    sensorBPtr = &sensorB;
    sensorBPtr->dispResults();

    sensorAPtr = &sensorB;
    sensorAPtr->dispResults();

    cout<<"fim..\n";
    while(1);
    return 0;
}
