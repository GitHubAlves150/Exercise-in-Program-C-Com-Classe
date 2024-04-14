#ifndef ADJUSTS_H
#define ADJUSTS_H

#include <iostream>
using std::cout;
using std::endl;



class Adjust
{
	public:
		Adjust(int=50, int=50, int=50);
		Adjust &setAdj(int v, int b, int c);
		Adjust &setVolume(int);
	    Adjust &setBrilho(int);
	    Adjust &setContrast(int);
	    void dispParam()const;
	private:
	    int vol, bri, con;
	    
};
#endif // ADJUSTS_H

