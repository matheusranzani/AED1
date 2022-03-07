#include "fila.h"

#include <stdio.h>

void imprime(Fila *F) {
    if (vazia(F)) {
        return;
    }

    NodePtr p = F->primeiro;

    printf("\nFila atual:\n");
    do {
        printf("%d ", p->info);
        p = p->dir;
    } while (p != F->primeiro);

    printf("\n");
}

int main() {
    Fila F;
    int X;
    int Erro;

    cria(&F);

    printf("Colocando os elementos 10, 20, 30, 40 e 50 na fila...\n");
    for (int i = 10; i <= 50; i += 10) {
        insere(&F, i, &Erro);
    }
    imprime(&F);

    printf("\nRetirando o primeiro elemento da fila...");
    retira(&F, &X, &Erro);
    printf("\nO elemento %d foi removido\n", X);
    imprime(&F);

    printf("\nRetirando o primeiro elemento da fila...");
    retira(&F, &X, &Erro);
    printf("\nO elemento %d foi removido\n", X);
    imprime(&F);

    destroi(&F);

    return 0;
}