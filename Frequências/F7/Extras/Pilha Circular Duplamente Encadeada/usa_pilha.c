#include "pilha.h"

#include <stdio.h>

void imprime(Pilha *p) {
    if (vazia(p)) {
        return;
    }

    NodePtr p_aux = p->topo;

    do {
        printf("%d ", p_aux->info);
        p_aux = p_aux->dir;
    } while (p_aux != p->topo);

    printf("\n");
}

int main() {
    Pilha p;
    int x;
    int deu_certo;
    int n = 3;

    cria(&p);

    for (int i = 10; i <= 50; i += 10) {
        empilha(&p, i);

    }
    imprime(&p);

    while (n--) {
        desempilha(&p, &x, &deu_certo);
        if (deu_certo) {
            printf("\nelemento retirado = %d\n", x);
            imprime(&p);
        }
    }

    destroi(&p, &deu_certo);
    if (deu_certo) {
        printf("\na pilha foi esvaziada\n");
    }

    return 0;
}
