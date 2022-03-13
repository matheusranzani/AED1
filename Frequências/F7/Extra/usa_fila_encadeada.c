#include "fila_encadeada.h"

#include <stdio.h>

int imprime(Fila *f) {
    if (vazia(f)) {
        return 0;
    }
    
    NodePtr p_aux = f->primeiro;
    
    do {
        printf("%d ", p_aux->info);
        p_aux = p_aux->next;
    } while (p_aux != NULL);
    
    printf("\n");
    
    return 1;
}

int main() {
    Fila f;
    int x;
    int deu_certo;
    int n = 3;
    
    cria(&f);
    
    for (int i = 10; i <= 50; i += 10) {
        insere(&f, i);
    }
    imprime(&f);
    
    while (n--) {
        retira(&f, &x, &deu_certo);
        if (deu_certo) {
            printf("\nelemento retirado = %d\n", x);
            imprime(&f);
        }
    }
    
    destroi(&f, &deu_certo);
    if (deu_certo) {
        printf("\na fila foi esvaziada com sucesso\n");
    }
    
    if (!imprime(&f)) {
        printf("\nfila vazia\n");
    }
    
    return 0;
}