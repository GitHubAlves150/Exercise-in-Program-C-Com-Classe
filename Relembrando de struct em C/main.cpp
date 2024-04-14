#include <iostream>
using namespace std;


//========================================
//--definição global da struct--
typedef struct
{
    int paginas;
    double peso;
    char *autor;
}Livro;
//========================================
//--Corpo do programa--
int main()
{
    printf("Hello REAA\n");
    Livro deEleronica; //defino meu novo dado chamado "deEletronica" do tipo estrutura livro;

    deEleronica.paginas=20;//acesso osatributos da estrutura através do operador ponto
    deEleronica.peso=.2500;//acesso osatributos da estrutura através do operador ponto
    deEleronica.autor="Lucas Alves";//acesso osatributos da estrutura através do operador ponto

    printf("paginas: %d \n", deEleronica.paginas);//Imprimo os dados de cada atributo
    printf("peso: %.3f\n", deEleronica.peso);//Imprimo os dados de cada atributo
    printf("autor: %s\n", deEleronica.autor);//Imprimo os dados de cada atributo

    return 0;
}//Fim da man




