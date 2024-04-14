#ifndef VET3D_H
#define VET3D_H


class Vet3D
{
    public:
        Vet3D(int x=0, int y=0, int z=0);
        Vet3D operator+(Vet3D);
        int getX()const;
        int getY()const;
        int getZ()const;

        virtual ~Vet3D();
    private:
        int x;
        int y;
        int z;
};

#endif // VET3D_H
