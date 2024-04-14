#ifndef PRODUCTNAME_H
#define PRODUCTNAME_H

#include "ProductPrice.hpp"

class ProductNames
{

    public:
        ProductNames(const char* const, const ProductPrice &);
        void results()const;
    private:
        char product1[20];
        const ProductPrice price1;

};//end class ProductNames

#endif //END PRODUCTNAME_H