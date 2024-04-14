#ifndef DATE_H
#define DATE_H

class Date
{
    public:
        Date(int=1, int=1, int= 1900);//construtor padrão
        void print(); //Imprime a data no formato mês/dia/ano
        ~Date();//Desconstrutor                
    private:
        int month; //1-12
        int day;   //1-31
        int year;  //qualquer ano
        
        int checkDay( int )const;  //Função que verifica se o dia esta dentro do range do mês e ano
         
}; //Fim da classe Date

#endif  //end DATE_H
