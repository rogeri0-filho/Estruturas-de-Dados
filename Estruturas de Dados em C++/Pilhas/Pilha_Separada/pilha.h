typedef int TipoItem;
const int max_itens = 100;

class pilha {
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //construtora
    ~pilha(); //destrutora
    bool is_full(); //Verifica se a pilha está cheia.
    bool is_empty(); //verifica se a pilha está vazia.
    void inserir(TipoItem item); //Insere elementos na Pilha
    TipoItem remover(); //Remove elementos da Pilha
    void imprimir(); //Imprime elementos da pilha
    int len_pilha(); //len
    
};