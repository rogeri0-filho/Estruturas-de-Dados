#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    fila fila1;
    int opc;
    TipoItem item;
    cout << "Programa gerador de FILAS.\n\n";

    do {
        cout << "[0] - Parar.\n";
        cout << "[1] - Inserir.\n";
        cout << "[2] - Remover.\n";
        cout << "[3] - Imprimir.\n"; 
        cout << "[4] - Ler se a FILA esta vazia.\n";
        cout << "[5] - Ler se a FILA esta cheia.\n";   

        cout << "Digite sua opcao: ";
        cin >> opc;
        cout << endl;

        if (opc == 1){
            cout << "Digite o elemento a ser inserido: ";
            cin >> item;
            fila1.insert(item);
            cout << endl;

        } else if (opc == 2){
            item = fila1.remover();
            cout << "Elemento removido: " << item << endl;

        } else if (opc == 3){
            fila1.imprimir();

        } else if (opc == 4){
            cout << fila1.is_full() << endl;

        } else if (opc == 5){
            cout << fila1.is_empty() << endl;
        }

    } while (opc != 0);
    return 0;
}