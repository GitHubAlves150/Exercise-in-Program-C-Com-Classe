#ifndef MCU_H
#define MCU_H
#include <string>
using std::string;


class mcu
{
public:
    mcu(const string &, const string & );//vcc, gnd

    void   setVcc(const string &);
    string getVcc()const;

    void   setGnd(const string &);
    string getGnd()const;

    void print();

private:
    string _Vcc,
           _Gnd;

};
#endif // MCU_H
