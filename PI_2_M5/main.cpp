#include <iostream>
using std::cout;
using std::endl;
using std::cin;


#include <cstdlib>
using std::rand;
using std::srand;
using std::system;

#include <ctime>
using std::time;

#include "Memory.hpp"
int main()
{
	int i=0;
	char op;
	Memory Memory1;
	Memory Memory2;
    
    

	while(op!='n') {
		cout<<"ADDR 15 content = 226"<<endl;
		cout<<"Recarregar memorias ? (Y) sim (N) nao"<<endl;
		cout<<">>";
		cin>>op;
        
		for(i=0; i<16; i++) {
			cout<<"ADDR "<<i<<" content = "<<Memory1.carregar()<<endl;
			
		}
		for(i=0; i<16; i++) {
			//cout<<"ADDR "<< i <<" content = "<<Memory2<<endl;
		}
	}
	
	system("Pause");
	return 0;
}
