#include <iostream>
using namespace std;


int      soma(int, int);
double   soma(double, double);
int      soma(int, int, int);


int main()
{
    cout << "Hello REAA!"        << endl;
    cout<<"soma com 2 int:"<<soma(2, 3)    <<endl;
    cout<<"soma com 3 int:"<<soma(2, 3, 4) <<endl;
    cout<<"soma com 2 double:"<<soma(8.2, 1.9)<<endl;

    return 0;
}


int      soma(int A, int B)
{
    return A+B;
}
double   soma(double A, double B)
{
    return A+B;
}
int      soma(int A, int B, int C)
{
    return A+B+C;
}
