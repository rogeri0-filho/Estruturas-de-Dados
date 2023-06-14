#include <iostream>
#include "fila-dinamica.h"

using namespace std;

int main(){
    FilaDinamica fila_1;
    TipoItem var_item;
    int opc;
    cout << "Programa gerador de Filas Dinamicas:\n\n";

    do {
        cout << "[0] - Parar.\n";
        cout << "[1] - Inserir.\n";
        cout << "[2] - Remover.\n";
        cout << "[3] - Imprimir.\n"; 
        cout << "[4] - Ler se a Fila esta vazia.\n";
        cout << "[5] - Ler se a Fila esta cheia.\n";   

        cout << "Digite sua opcao: ";
        cin >> opc;
        cout << endl;

        if (opc == 1){
            cout << "Digite o elemento a ser inserido: ";
            cin >> var_item;
            fila_1.insert(var_item);
            cout << endl; 

        } else if (opc == 2){
            var_item = fila_1.remover();
            cout << "Elemento removido: " << var_item << endl;

        } else if (opc == 3){
            fila_1.imprimir();

        } else if (opc == 4){
            cout << fila_1.is_empty() << endl;

        } else if (opc ==5){
            cout << fila_1.is_full() << endl;
        }

    } while(opc != 0);
    return 0;
}

