#ifndef SOBRECARGAOPERADORES_H
#define SOBRECARGAOPERADORES_H


class operador
{
public:
    operador(int=0, int=0, int=0);

    operador operator+(operador);
    int getHora();
    int getMinutos();
    int getSegundos();

private:
    int     hora,
         minutos,
        segundos;

};

#endif //SOBRECARGAOPERADORES_H
