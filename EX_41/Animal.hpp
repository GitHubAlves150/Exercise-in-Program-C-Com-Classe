#ifndef ANIMAL_HPP
#define ANIMAL_H

#include <string>
using std::string;

class animal//classe animal
{
//--------------------funçoes membros---------------------------------------
	public:
	animal();//construtor padrão.

	//-------------metodos--------------------------
	void setAnimal(string, string);//cor do pelo, mamifero.
	void setAnimal(string, string, float, int);//cor da pele, classificação, altura, idade.


//---------------membros de dados privados----------------------------------
	private:

	//-------------membros de dados privados----------------------------
	string _pele;
	string _classificacaoAnimal;
	int    _idade;
	float  _altura;
};

#endif
