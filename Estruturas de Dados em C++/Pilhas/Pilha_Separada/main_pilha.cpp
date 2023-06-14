#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha_1;
    TipoItem var_item;
    int opc;
    cout << "Programa gerador de pilhas.\n\n";

    do {
        cout << "[0] - Parar.\n";
        cout << "[1] - Inserir.\n";
        cout << "[2] - Remover.\n";
        cout << "[3] - Imprimir.\n"; 
        cout << "[4] - Vefiricar o tamanho da Pilha.\n";
        cout << "[5] - Ler se a pilha esta vazia.\n";
        cout << "[6] - Ler se a pilha esta cheia.\n";   

        cout << "Digite sua opcao: ";
        cin >> opc;
        cout << endl;

        if (opc == 1){
            cout << "Digite o elemento a ser inserido: ";
            cin >> var_item;
            pilha_1.inserir(var_item);
            cout << endl; 

        } else if (opc == 2){
            var_item = pilha_1.remover();
            cout << "Elemento removido: " << var_item << endl;

        } else if (opc == 3){
            pilha_1.imprimir();

        } else if (opc == 4){
            cout << "Total de elemetnos na Pilha: " << pilha_1.len_pilha() << endl;

        } else if (opc == 5){
            cout << pilha_1.is_empty() << endl;

        } else if (opc == 6){
            cout << pilha_1.is_full() << endl;

        }


    } while(opc != 0);
    return 0;
}
