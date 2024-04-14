#include "Biblioteca.hpp"

Biblioteca::Biblioteca(string Estante, string Autor, string livro, int numero )
{


}//Fim

void Biblioteca::insertNewBookFile()
{

int  optStar=0;
enum Estante{ALTAIR=1, VEGA, BELLATRIX, SIRIUS};
    cout << "Escolha a estante:\n";

    do
    {
        cout << "1-ALTAIR\n"
             << "2-VEGA\n"
             << "3-BELLATRIX\n"
             << "4-SIRIUS\n";

        cin  >> optStar;
        switch(optStar)
        {
        case ALTAIR:
            inserOnShelf("ALTAIR.dat");
            break;
        case VEGA:
            inserOnShelf("VEGA.dat");
            break;
        case BELLATRIX:
            inserOnShelf("BELLATRIX.dat");
            break;
        case SIRIUS:
            inserOnShelf("SIRIUS.dat");
            break;
        default:
            cerr << "opt invalid\n...";

        }//Fim do switch



    }while(optStar<=1 && optStar>=4);//fim do do-While


}//Fim



//==============================================================
//----Função para consultar o livro---
void Biblioteca::consultBook(string)//recebe nùmero do livro para consultar
{


}//Fim

//==============================================================
//----Função para atualizar o livro---
void Biblioteca::updateBook(string)//atualiza o livro
{


}//Fim

//==============================================================
//----Função para deletar um livro---
void Biblioteca::deleteBook(string)//deleta o livro
{


}//Fim

//==============================================================
//----Função para definir a variavel autor---

void Biblioteca::setAutor()
{
    cin >> _autor;

}//Fim


//==============================================================
//----Função para retornar o autor do livro---
string Biblioteca::getAutor()
{
    return _autor;
}//Fim



//==============================================================
//----Função para definir o nome do livro---
void Biblioteca::setLivro()
{
    cin >> _livro;
}//Fim

//==============================================================
//----Função para retornar o nome do livro---
string Biblioteca::getLivro()
{
    return _livro;
}//Fim

//==============================================================
//----Função para definir o numero do livro---
void Biblioteca::setNumberBook()
{
    cin >> _numberBook;

}//Fim

//==============================================================
//----Função que retorna o numero do livro---
int Biblioteca::getNumberBook()
{
    return _numberBook;
}//Fim


//==============================================================
//----Função que seta a estante ---
void Biblioteca::setEstatnte()
{
    cin >> _estante;
}//Fim


//==============================================================
//----Função que retorna a estante ---
string Biblioteca::getEstatnte()
{
    return _estante;
}//Fim





//==============================================================
//----Função que insere o livro na estante---
void Biblioteca::inserOnShelf(string NameFile)
{


    cout << "arquivo chamado : "<< NameFile<<endl;
    ofstream insertBookFile(NameFile, ios::app );//cria uma arquivo para armazenamento de uma determinada classificação de livro
    //verifica se o arquivo foi aberto com sucesso
    if(! insertBookFile)
    {
        cerr << "Erro ao abrir o arquivo\n.......";
        exit(1);
    }
    cout << "arquivo gerado com sucesso\n";
    cout <<"=====Exemplo de insersao de livros=================\n";
    cout << "|Estante  |Autor       |Livro      |numero\n"
         << " ESTxxx     xxxxxxxx	xxxxxx      Ed.xx"<<endl;


        cout << "\n\nEstante: "<< endl;
        setEstatnte();
        cout << "Autor: "<< endl;
        setAutor();
        cout << "Livro: "<< endl;
        setLivro();
        cout << "Numero: "<< endl;
        setNumberBook();

        cout << "o nome do arquivo sera: " << NameFile<<endl;

        cout << "\nAutor:"       << getAutor()
             << "\nLivro: "      << getLivro()
             << "\nEstante: "    << getEstatnte()
             << "\nNumero Livro:"<< getNumberBook() << endl;



        insertBookFile<<"|"
                             <<setw(20) << left << getEstatnte()
                             <<setw(20) << left << getAutor()
                             <<setw(20) << left << getLivro()
                             <<setw(20) << left << getNumberBook()


                             <<endl;

}

