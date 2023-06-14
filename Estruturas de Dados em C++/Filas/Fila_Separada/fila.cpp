#include <iostream>
#include "fila.h"

using namespace std;

//------construtora-------
fila::fila(){
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

//------destrutora--------
fila::~fila(){
    delete [] estrutura;
}

//--Verifica se a Fila está cheia--
bool fila::is_full(){
    return (ultimo - primeiro == max_itens);
}

//--Verifica se a Fila está vazia--
bool fila::is_empty(){
    return (primeiro == ultimo);
}

//----Insere elementos na fila----
void fila::insert(TipoItem item){
    if (is_full()){
        cout << "\nFila de Elementos CHEIA!\n";
        cout << "Impossivel inserir elementos.\n";
    } else{
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
}

//----Remove elementos da fila----
TipoItem fila::remover(){
    if (is_empty()){
        cout << "\nFila de Elementos VAZIA!\n";
        cout << "Impossivel remover elementos.";
        return 0;
    } else{
        primeiro++;
        return estrutura[(primeiro - 1) % max_itens];
    }
}

//---------Imprime a fila---------
void fila::imprimir(){
    cout << "Fila: [";
    for(int i = primeiro; i < ultimo; i++){
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "];\n";
}
