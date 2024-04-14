#include <iostream>
using std::cout;
using std::endl;

#include "Components.hpp"


int main()
{
    //Componentes::getCompCnt() : retorna o numero de componentes armazenados pelo usuário
    cout <<"Antes dos objetos serem criados compCnt= "<< Componentes::getCompCnt() <<endl;

    //Aloca dinamicamente 3 novos componentes utilizando "new"
    Componentes *componentes_1_ptr= new Componentes("TBJ", "TIP42");
    Componentes *componentes_2_ptr= new Componentes("MOSFET", "IRF3205");
    Componentes *componentes_3_ptr= new Componentes("Integrate Circuit", "SG3525A");

    cout<<"Depois dos 3 objetos serem criados compCnt = "<<Componentes::getCompCnt()<<endl;

    //Mostra as componentes criados
    cout<<"\nComponentes 1: "<<componentes_1_ptr->getTypeComp()<<' '<<componentes_1_ptr->getModelComp()<<endl;
    cout<<"\nComponentes 2: "<<componentes_2_ptr->getTypeComp()<<' '<<componentes_2_ptr->getModelComp()<<endl;
    cout<<"\nComponentes 3: "<<componentes_3_ptr->getTypeComp()<<' '<<componentes_3_ptr->getModelComp()<<endl;

    delete componentes_1_ptr;
    componentes_1_ptr=0; //atribui zero para desconectar o ponteiro do espaço armazenamento livre
    delete componentes_2_ptr;
    componentes_2_ptr=0; //atribui zero para desconectar o ponteiro do espaço armazenamento livre
    delete componentes_3_ptr;
    componentes_3_ptr=0; //atribui zero para desconectar o ponteiro do espaço armazenamento livre
    cout<<"\n\n"<<endl;


    return 0;
}







































