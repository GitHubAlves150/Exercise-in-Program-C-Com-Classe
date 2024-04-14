#include "ExpectroEmocional.h"
//============================================================
//-----ctor
ExpectroEmocional::ExpectroEmocional(string collorRing)

{
    _Power="Nao definido";
    _setor="Ainda vagando";
}//---Fim ctor


//===========================================================
//-----defini o setor
void ExpectroEmocional::setSetor(string setor)
{
    _setor=setor;
}//fim setSetor
//===========================================================
//-----retorna o setor
string ExpectroEmocional::getSetor()
{
    return _setor;
}//fim getSetor
//===========================================================
//-----defini o poder
void ExpectroEmocional::setPower(string powerRing)
{
    _Power=powerRing;

}//Fim setPoder
string ExpectroEmocional::getPower()
{
    return _Power;
}//fim getPower








void ExpectroEmocional::Display()
{

    cout<<getPower()<<endl;
    cout<<_setor<<endl;

}

ExpectroEmocional::~ExpectroEmocional()
{
    //dtor
}
