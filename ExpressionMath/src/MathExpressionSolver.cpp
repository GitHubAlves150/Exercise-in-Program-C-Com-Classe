#include "MathExpressionSolver.h"

MathExpressionSolver::MathExpressionSolver()
{
    //ctor

}

void MathExpressionSolver::setExpression(string expression)
{
    int counter=0;
    //analizar a string
    do
    {
        if(expression[counter]==40)
        {
            while(expression[counter]!=41)
            {

            }
        }
        counter++;
    }while(expression[counter]);
}

MathExpressionSolver::~MathExpressionSolver()
{
    //dtor
}
