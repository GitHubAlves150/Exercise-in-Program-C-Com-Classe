#ifndef POTENCIA
#define POTENCIA

class pot
{
    friend void PVI(pot &, double, double);//Declaracao da funcao friends
    
    public:
    pot();
    void results();
    private:
    double W;
    
};




#endif  