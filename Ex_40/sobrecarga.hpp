//Exemplo  com Makefile
//programa exemplificando o uso de sobrecarga de operadores


#ifndef SOBRECARGA_H
#define SOBRECARGA_H



class Sobrecarga
{

public:
	Sobrecarga(int, int, int);
	void setsoma(int, int);
	void setsoma(int, int,int);

	void show();

	int getsoma();
private:
	int _a, _b, _c, resultado;
};



#endif
