



#ifndef GEOMETRIA_H
#define GEOMETRIA_H


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
