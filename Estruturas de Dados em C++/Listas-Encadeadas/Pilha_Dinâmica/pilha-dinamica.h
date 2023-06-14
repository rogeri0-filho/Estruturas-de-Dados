typedef int TipoItem;

/* Struct
funciona igual a uma classe padrão no c++, uma das diferença é que no
struct, tudo épúblico, e no class podem tem argumentos privados
*/

struct No{
    TipoItem valor;
    No* proximo;
};

class PilhaDinamica{
    private:
    No* NoTopo;

    public:
    PilhaDinamica(); //Construtor.
    ~PilhaDinamica(); //Destrutor.
    bool is_full(); //Verifica se a Pilha Dinâmica está cheia.
    bool is_empty(); //Verifica se a Pilha Dinâmica está vazia.
    void insert(TipoItem item); //Insere elementos na Pilha Dinâmica.
    TipoItem remover(); //Remove elementos da Pilha Dinâmica
    void imprimir(); //Imprime elementos da Pilha Dinâmica.

};