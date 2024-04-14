#ifndef  LIBRARY_H
#define  LIBRARY_H


class Avalizacao{

    public:
        void getNote();
        void outNote();
        void calculate();
        
    private:
        float midleNote;
        float endNote;
        float auxiliarNoteMidle, auxiliarNoteEnd;
        float media;
        
};

#endif  