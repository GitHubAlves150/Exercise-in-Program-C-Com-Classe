#include <iostream>
using std::cout;
using std::endl;


#include <string>
using std::string;

#include "func.hpp"

void GradeBook::setCourseName(string name)
{
    nameCourse=name;
}

string GradeBook::getCourseName()
{
    return nameCourse;
}
void GradeBook::displayMenssage()
{
    cout<<"Ola seja bem vindo ao \""<<getCourseName()<<"\""<<endl;// \" mostra aspas duplas no console
}








