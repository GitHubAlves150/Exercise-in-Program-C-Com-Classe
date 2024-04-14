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
	void setAnimal(string, string);//Nome do animal, classificacao.
	void setAnimal(string, string, float, int);//nome do animal, classificação, altura, idade.


//---------------membros de dados privados----------------------------------
	private:

	//-------------membros de dados privados----------------------------
	string _pele;
	string _classificacaoAnimal;
	int    _idade;
	float  _altura;
};

#endif
