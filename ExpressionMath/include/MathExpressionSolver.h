// TRABALHO DE CONCLUSÃO DE MÓDULO 4 DO CURSO C++ COM WAGNER RAMBO
//
#ifndef MATHEXPRESSIONSOLVER_H
#define MATHEXPRESSIONSOLVER_H

#include <string>
using std::string;
using std::strlen

class MathExpressionSolver
{
    public:
        MathExpressionSolver();//CTOR
        void  setExpression(string);

        float getExpression();

       ~MathExpressionSolver();
    private:
        float _vetor1[10];
};

#endif // MATHEXPRESSIONSOLVER_H
