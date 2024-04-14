#include "includes.hpp"//inclui todas as lib padrão
#include "Biblioteca.hpp"


enum choice { Insert = 1, consult, del, goOut};





int main()
{
    int opt=0;
    Biblioteca Estante;

//=============================================
//------menu do program------------------------
    while(opt!=goOut)
    {

        cout << "Escolha as opcoes:\n";
        cout <<"1-Insert new book\n"
             <<"2-Consult a book\n"
             <<"3-Del some book\n"
             <<"4-exit\n";
        cin  >> opt;
        switch(opt)
        {
        case Insert://Insere um novo Livro
            Estante.insertNewBookFile();//objeto que define a estrutura do livro
            break;
        case consult:
            break;
        case del:
            break;
        case goOut:
            break;
        }//Fim do switch

    }//Fimdo while
//=============================================
//------Fim do menu do program------------------------

    return 0;
}
