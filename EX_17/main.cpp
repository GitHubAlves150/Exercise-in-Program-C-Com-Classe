#include <iostream>
#include <cstdlib>
using std::system;



#include "ClassEx.hpp"

int main()
{
    ClassEx obj(13, 21, 55);
    ClassEx obj1;
    ClassEx obj2;
    
    cout<<"OBJ>>";
    obj.printThis();
    cout<<"OBJ1>>";
    obj1.printThis();
    cout<<"OBJ2>>";
    obj2.printThis();
    
    obj2=obj;
    cout<<"novo OBJ2>>";
    obj2.printThis();
    
    
    system("PAUSE");
    return 0;
}
