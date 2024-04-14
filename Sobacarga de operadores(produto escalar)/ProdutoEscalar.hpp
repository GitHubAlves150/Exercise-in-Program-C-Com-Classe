#ifndef PRODUTOESCALAR_H
#define PRODUTOESCALAR_H


class prodEscalar
{

public:
    prodEscalar(int=0, int=0, int=0);

    prodEscalar operator*(int k);

    //Lista de funçoes
    int getX(),
        getY(),
        getZ();



private:
    int _x, _y, _z;

};
#endif // PRODUTOESCALAR_H
