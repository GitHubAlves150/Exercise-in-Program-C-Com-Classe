
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "includes.hpp"
class Biblioteca
{



    public:
        //ctr
        Biblioteca(string="", string="", string="" , int=0 );//estante, Autor, Livro, nùmero

        //---
        void   insertNewBookFile();
        void   inserOnShelf(string );
        //---
        void   setAutor();
        string getAutor();
        //---
        void   setLivro();
        string getLivro();
        //---
        void   setNumberBook();
        int    getNumberBook();
        //---
        void   setEstatnte();
        string getEstatnte();

        void   consultBook(string);//recebe nùmero do livro para consultar
        void   updateBook(string);//atualiza o livro
        void   deleteBook(string);//deleta o livro


    private:
        string  _livro,
                _autor,
                _estante;

        int   _numberBook;

};//Fim da Classe



#endif
