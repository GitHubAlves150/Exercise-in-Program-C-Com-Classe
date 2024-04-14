#ifndef LIBRARY_H
#define LIBRARY_H

class Aniversario{

    public:
        void input();
        void out();
        
//================funcoes mutantes        
        void Set(int newMonth, int newDay);       
        //sobrecarga de funcao
        void Set(int newMonth);
        
        int getMonthNumber();//retorna o numero correspondente ao mes
        int getDay();
        
    private:
        int month;
        int day;
        
};

#endif 