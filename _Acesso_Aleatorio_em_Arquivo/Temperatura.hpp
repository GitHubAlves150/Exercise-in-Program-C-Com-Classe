


#ifndef TEMPEARTURA_HPP
#define TEMPERATURA_HPP

//===========================================
//---Classes---

class Temperatura
{
    public:
        Temperatura(int regNum=0, float intTemp=0.0, float extTemp=0.0, char nivel= 'M');

        void  setRegNUm(int regNum);
        int   getRegNum()const;

        void  setIntTemp(float intTemp);
        float getIntTemp()const;

        void  setExtTemp(float extTemp);
        float getExpTemp()const;

        void  setNivel(char nivel);
        char  getNivel()const;

        void   avgTemp(float intTemp, float extTemp);
        float  getAvgTemp()const;

    private:
        int   _regNum;
        float _intTemp,
              _extTemp,
              _avgTemp;
        char  _nivel;


};


#endif//TEMPERATURA_HPP
