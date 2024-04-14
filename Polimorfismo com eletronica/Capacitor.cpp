

#include <iostream>
using namespace::std;
#include "Capacitor.hpp"

capacitor::capacitor()
{

}

double capacitor::getComponente(double freq, double xl)
{
        return 1/(2*3.14*freq*xl);
}
