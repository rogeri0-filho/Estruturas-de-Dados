typedef int TipoItem;

struct NO {
    TipoItem valor;
    NO* proximo;
};

/*
class No{
    public:
    TipoItem valor;
    NO* proximo;
};
*/

class FilaDinamica{
    private:
    NO* primeiro; //Primeiro Elemento
    NO* ultimo; // Ultimo Elemento

    public:
    FilaDinamica(); // Construtor
    ~FilaDinamica(); //Destrutor
    bool is_full(); //Verifica se a Fila Dinâmica está cheia.
    bool is_empty(); //Verifica se a Fila Dinâmica está vazia.
    void insert(TipoItem item); //Insere elementos na Fila Dinâmica.
    TipoItem remover(); //Remove elementos da Fila Dinâmica.
    void imprimir(); //Imprime elementos da Fila Dinâmica.

};