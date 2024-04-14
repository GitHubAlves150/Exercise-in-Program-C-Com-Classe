#ifndef CRIPTO_H
#define CRIPTO_H

class cripto
{
public:
    cripto();

    void criptografa(int *vet, int tam);
    void display();

private:
    int date[10];
    int _tam;

};



cripto::cripto()
{
    _tam=4;
    for(int i=0; i<_tam; i++)
    {
        date[i]=0;
    }
}

void cripto::criptografa(int *vet, int tam)
{
    _tam=tam;
    for(int i=0; i<tam; i++)
    {
        if(vet[i]%2==0)
            vet[i]=0;
        date[i]=vet[i];
    }
}


void cripto::display()
{
    for(int i=0; i<_tam; i++)
    {
        cout<<" "<<date[i];
    }
}

#endif
