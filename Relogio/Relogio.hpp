#ifndef RELOGIO_H
#define RELOGIO_H

class TimeZone
{
    public:
        TimeZone(int=0, int=0, int=0);
   TimeZone &setTime(int, int, int);
   TimeZone &setHour(int);
   TimeZone &setMinute(int);
   TimeZone &setSecond(int);  
    int getHour();
    int getMin();
    int getSec();
   void imprime();
    private:
        int hour, minute, second;
};




#endif