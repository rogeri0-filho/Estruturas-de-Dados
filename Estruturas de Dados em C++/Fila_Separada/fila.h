typedef int TipoItem;
const int max_itens = 100; //Quantidade máxima de itens que podem ser inseridos na fila

class fila{
    private:
    int primeiro, ultimo; //Último mostra onde será inserido, e o Primeiro onde será removido.
    TipoItem* estrutura; //Vetor que irá conter a estrutura e seus elementos.

    public:
    fila(); //Contrutor
    ~fila(); //Destrutor
    bool is_full(); //Verifica se a fila está cheia.
    bool is_empty(); //Verifica se a fila está vazia.
    void insert(TipoItem item); //Insere elementos na fila.
    TipoItem remover(); //Remove elementos da fila
    void imprimir(); //Imprime elementos da fila.

};