
#ifndef COMPONENTES
#define COMPONENTES

class Componentes{

public:
    Componentes(const char *const typdeComp, const char modelComp);//cosntrutor. Naõ foi definido tamanho para ela, então deve-se usar "new"
    ~Componentes();                                      //destrutor
    const char *getTypeComp();                           //retornam o tipo de componente
    const char *getModelComp();                          //retornam o modelo do componente

    static int getCompCnt();                             //funçao-memobro que retorna o número de objetos instanciados

private:
    char *_typeComp;                                    //undercore para diferenciar dos parametros do construtor
    char *_modelComp;

    static int compCnt;                                  //número de componentes que serão criados na classe (objetos)
};

#endif // COMPONENTES


