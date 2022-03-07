#include "fila_vacinacao.h"

#include <stdio.h>

void imprime(FilaDeVacinacao *FV) {
    if (vazia(FV)) {
        return;
    }

    NodePtr p_aux = FV->ptr;
    
    printf("Fila de Vacinação atual:\n");
    do {
        printf("%d ", p_aux->info);
        p_aux = p_aux->next;
    } while (p_aux != FV->ptr);

    printf("\n");
}

int main() {
    FilaDeVacinacao FV;

    cria(&FV);

    insere(&FV, 75);
    imprime(&FV);
    insere(&FV, 88);
    imprime(&FV);
    insere(&FV, 75);
    imprime(&FV);

    return 0;
}