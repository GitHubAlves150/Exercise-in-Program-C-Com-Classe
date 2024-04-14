#ifndef STM_H
#define STM_H

class stm
{
public:
    stm(const string &, const string &, const string & );//reset, clock, hall

    void   setReset(const string &);
    string getReset()const;

    void   setClock(const string &);
    string getClock()const;

    void   setHall(const string &);
    string getHall()const;

    void display();

private:
    string _Reset,
           _Clock,
           _Hall;

};

#endif // STM_H
