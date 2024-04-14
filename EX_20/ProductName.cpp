#include <cstring>
using std::strlen;
using std::strncpy;

#include <iostream>
using std::cout;

#include "ProductName.hpp"

ProductNames::ProductNames(const char * const ProductName_1, const ProductPrice &val_1):
price1(val_1)
{
    int length=strlen(ProductName_1);
    length=(length<20 ? length : 19);
    strncpy(product1, ProductName_1, length);
    product1[length]='\0';

}

void ProductNames::results() const
{
    cout<< product1<<" tem o valor igual a ";
    price1.printPrice();
}
