#ifndef CURSOAFILIADO_H
#define CURSOAFILIADO_H
#include "Cursos.hpp"//classe basica

class CursoAfiliado:public Cursos
{
public:
    CursoAfiliado(const string &curso, const string &empresa,
                  double taxa=0.0, int quantidade=0);//funções adicionais
    void    setTaxa(double taxa);
    double  getTaxa()const;

    void    setQuantidade(int quantidade);
    int     getQuantidade()const;

    virtual double calculaLucro()const;//função virtual que ira sobresverver a função da classe básica
    virtual void mostraValores()const; //exibe valores do objeto CursoAfiliado


private:
    double taxaPercent;
    int    quantidadeVendas;

};


#endif // CURSOAFILIADO_H
