


#ifndef GEOMETRIA_H
#define GEOMETRIA_H

class Geometria
{
    public:
        Geometria(int=0, int=0, int=0);//cnt, pontos no espaço

        Geometria operator+(Geometria);


        int getX();//retorna o valor de x
        int getY();//retorna o valor de y
        int getZ();//retorna o valor de z


    private:
        int x,
            y,
            z;

};

class  Escalar
{
    public:
    Escalar(int=0, int=0, int=0);

    Escalar operator*(Escalar);

     int _getx();
     int _gety();
     int _getz();


    private:
    int _x,
        _y,
        _z;

};

#endif//GEOMETRIA_H
