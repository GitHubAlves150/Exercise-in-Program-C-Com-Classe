#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::system;

#include "ProductName.hpp"
#include "ProductPrice.hpp"

int main()
{

    ProductPrice Product1(17);
    ProductPrice Product2(44);

    ProductNames Product_Name1("Trnsistor", Product1);
    ProductNames Product_Name2("Capacitor", Product2);

    Product_Name1.results();
    Product_Name2.results();

    system("PAUSE");
    return 0;
}
