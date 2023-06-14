#include <iostream>
#include "fila-dinamica.h"
#include <cstddef>
#include <new>

using namespace std;

FilaDinamica::FilaDinamica(){
    primeiro = NULL;
    ultimo = NULL;
}

FilaDinamica::~FilaDinamica(){
    NO* temp;

    while (primeiro != NULL){
        temp = primeiro;
        primeiro = primeiro->proximo;
        delete temp;
    }

    ultimo = NULL;
}

bool FilaDinamica::is_full(){
    NO* temp;

    try{
        temp = new NO;
        delete temp;
        return false;

    } catch(bad_alloc exception){
        return true;
    }
}

bool FilaDinamica::is_empty(){
    NO* temp;

    try{
        temp = new NO;
        delete temp;
        return false;

    } catch(bad_alloc exception){
        return true;
    }
}

void FilaDinamica::insert(TipoItem item){
    if (is_full()){
        cout << "FILA DE ELEMENTOS CHEIA. IMPOSSIVEL INSERIR ELEMENTOS!\n";

    } else{
        NO* NoNovo = new NO;
        NoNovo->valor = item;
        NoNovo->proximo = NULL;

        if (primeiro == NULL){
            primeiro = NoNovo;

        } else{
            ultimo->proximo = NoNovo;
        }

        ultimo = NoNovo;
    }
}

TipoItem FilaDinamica::remover(){
    if (is_empty()){
        cout << "FILA DE ELEMENTOS VAZIA. IMPOSSIVEL REMOVER ELEMENTOS!\n";
        return 0;

    } else{
        NO* temp = primeiro;
        TipoItem item = primeiro->valor;
        primeiro = primeiro->proximo;

        if (primeiro == NULL){
            ultimo = NULL;
        }

        delete temp;
        return item;
    }
}

void FilaDinamica::imprimir(){
    NO* temp = primeiro;
    cout << "Fila Dinamica - [ ";
    while (temp != NULL){
        cout << temp->valor << ", ";
        temp = temp->proximo;
    }
    cout << "];\n";
}
