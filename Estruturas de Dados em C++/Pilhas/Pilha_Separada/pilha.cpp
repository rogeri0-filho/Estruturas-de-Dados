#include <iostream>
#include "pilha.h"

using namespace std;

//------construtora-------
pilha::pilha(){
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

//------destrutora--------
pilha::~pilha(){
    delete []estrutura;
}

//--Verifica se a pilha está cheia--
bool pilha::is_full(){
    return(tamanho == max_itens);
}

//--Verifica se a pilha está vazia--
bool pilha::is_empty(){
    return(tamanho == 0);
}

//---------Push---------
void pilha::inserir(TipoItem item){
    if (is_full()){
        cout << "Pilha de elementos cheia.";
    } else{
        estrutura[tamanho] = item;
        tamanho++;
    }
}

//----------Pop---------
TipoItem pilha::remover(){
    if (is_empty()){
        cout << "Pilha de elementos vazia.";
    } else{
        tamanho--;
        return estrutura[tamanho];
    }
}

//---------Print--------
void pilha::imprimir(){
    cout << "PILHA: [ ";
    for (int i=0; i<tamanho; i++){
        cout << estrutura[i] << " ";
    }
    cout << "];\n";
}

//----------Len---------
int pilha::len_pilha(){
    return tamanho;
}
