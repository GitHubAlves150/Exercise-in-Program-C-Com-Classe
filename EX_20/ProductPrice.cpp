#include <iostream>
using std::cout;
using std::endl;

#include "ProductPrice.hpp"

ProductPrice::ProductPrice(int p1):
price1 (p1)
{

}
void ProductPrice::printPrice() const
{
    cout<<" Price : "<<price1<<endl;
}