#include <iostream>
#include "pilha-dinamica.h"
#include <cstddef>

using namespace std;

PilhaDinamica::PilhaDinamica(){//Construtor
    NoTopo = NULL;
}

PilhaDinamica::~PilhaDinamica(){//Destrutor
    No* NoTemp;
    while (NoTopo != NULL){
        NoTemp = NoTopo;
        NoTopo = NoTopo->proximo;
        delete NoTemp;
    }
}

bool PilhaDinamica::is_full(){//Está cheio
    No* NoNovo;
    try{
        NoNovo = new No;
        delete NoNovo;
        return false;
    } catch(bad_alloc exception){
        return true;
    }
}

bool PilhaDinamica::is_empty(){//Está Vazio
    return (NoTopo == NULL);
}

void PilhaDinamica::insert(TipoItem item){//Inserir
    if(is_full()){
        cout << "PILHA DINAMICA CHEIA - IMPOSSIVEL INSERIR ELEMENTOS!\n";
    } else{
        No* NoNovo = new No;
        NoNovo->valor = item;
        NoNovo->proximo = NoTopo;
        NoTopo = NoNovo;
    }
}

TipoItem PilhaDinamica::remover(){//Remover
    if(is_empty()){
        cout << "PILHA DINAMICA VAZIA - IMPOSSIVEL REMOVER ELEMENTOS!\n";
        return 0;
    } else{
        No* NoTemp;
        NoTemp = NoTopo;
        TipoItem item = NoTopo->valor;
        NoTopo = NoTopo->proximo;
        delete NoTemp;
        return item;
    }
}

void PilhaDinamica::imprimir(){//Imprimir
    No* NoTemp = NoTopo;
    cout << "PILHA DINAMICA: [ ";

    while (NoTemp != NULL){
        cout << NoTemp->valor << " ";
        NoTemp = NoTemp->proximo;
    }

    cout << "]\n";
}