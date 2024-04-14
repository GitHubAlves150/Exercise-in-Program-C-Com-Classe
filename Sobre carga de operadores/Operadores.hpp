
#ifndef CALCULA_H
#define CALCULA_H

class Vetor3d
{
public:
    Vetor3d(int=0, int=0,int=0);//cnt
    Vetor3d  operator+(Vetor3d);

    int getX()const;
    int getY()const;
    int getZ()const;

    void Display();//mostra os valores

private:
    int PontoX;
    int PontoY;
    int PontoZ;

};


#endif // CALCULA_H
