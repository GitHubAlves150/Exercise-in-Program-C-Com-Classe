#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include "Baskara.hpp"


int main()
{
  baskara Eq_1, Eq_2, Eq_3;

  Eq_1.calcBaskara(2, 8, 3);
  cout<<"\n=============="<<endl;
  Eq_2.calcBaskara(-2, 5, -2);
  cout<<"\n=============="<<endl;
  Eq_3.calcBaskara(4, -8, 12);
 
  while(1);
    return 0;
}
