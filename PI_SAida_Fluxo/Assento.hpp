#ifndef ASSENTOO_H
#define ASSENTO_H

class Assento
{
public:
        Assento(string="", string="", string="");
        ~Assento();
        void   setNomePessoa(string);
        string getNomePessoa();

        void   setNumeroPoltrona(string);
        string getNumeroPoltrona();

        void   setNomeFilme(string);
        string getNomeFilme();

        //Layout
        void LayOutCinema();

        void LayoutTelona();

private:

        string _NomePessoa,
               _NomeFilme,
               _NumeroPoltrona;


};

#endif // ASSENTOO_H
