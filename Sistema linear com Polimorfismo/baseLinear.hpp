#ifndef BASELINEAR_H
#define BASELINEAR_H


class sarrus
{
public:
    sarrus(int vetor[]);//construtor

    void setEq(int vetor[]);
    int  getEq();

    void set2x2(int vetor[]);
    int  get2x2();

    void set4x4(int&);
    int  get4x4();

    void display();
private:
    int Det;
    int vet[];


};

#endif // BASELINEAR_H
