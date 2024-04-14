
#include <iostream>
using namespace::std;
#include "Resisitor.hpp"

resistor::resistor()
{

}

double resistor::getComponente(double tensao, double amper)
{
        return tensao/amper;
}
