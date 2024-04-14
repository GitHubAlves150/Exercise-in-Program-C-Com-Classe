#include <iostream>
using std::endl;
using std::cout;

#include <iomanip>
using std::setw;
using std::setfill;

#include "Relogio.hpp"



TimeZone::TimeZone(int h, int m, int s)
{
    TimeZone &setTime(int, int, int);
}

TimeZone &TimeZone::setTime(int H, int M, int S)
{
    setHour(H);
    setMinute(M);
    setSecond(S);
    return *this;
}
TimeZone &TimeZone::setHour(int H)
{
    hour=((H>=0 && H<24) ? H : 0 );
    return *this;
}

TimeZone &TimeZone::setMinute(int M)
{
    minute=((M>=0 && M<60) ? M : 0 );
    return *this;
}

TimeZone &TimeZone::setSecond(int S)
{
    second=((S>=0 && S<60) ? S : 0 );
    return *this;
}

int TimeZone::getHour()
{
    return hour;
}

int TimeZone::getMin()
{
    return minute;
}

int TimeZone::getSec()
{
    return second;
}
void TimeZone::imprime()
{
    cout<<""<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;

}








