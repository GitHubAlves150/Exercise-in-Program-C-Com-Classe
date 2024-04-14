#include <iostream>
using namespace std;

double totalPolegadas(int pes, int polegadas);


int main(){

int pes=1;
int polegadas=2;
float resultado;
resultado=totalPolegadas(pes, polegadas);
cout<< "Polegadas: " << resultado;

    return 0;
}

double totalPolegadas(int pes, int polegadas){
    polegadas=12*pes+polegadas;
    return polegadas;
}