#ifndef CURSOS_H
#define CURSOS_H

#include <string>
using std::string;

class Cursos
{
public:
    Cursos(const string &curso, const string &empresa);

    void   setNomeCurso(const string &curso);
    string getNomeCurso()const;

    void   setNomeEmpresa(const string &empresa);
    string getNomeEmpresa()const;

    virtual double calculaLucro()const=0;//funçao virtual pura
    virtual void   mostraValores()const;
private:
    string nomeCurso,
           nomeEmpresa;
};


#endif // CRUSOS_H
