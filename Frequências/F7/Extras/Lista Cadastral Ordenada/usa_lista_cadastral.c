#include "lista_cadastral.h"

#include <stdio.h>

void imprime(Lista *l) {
    if (vazia(l)) {
        return;
    }

    NodePtr p = l->primeiro;

    do {
        printf("%d ", p->info);
        p = p->next;
    } while (p != NULL);

    printf("\n");
}

int main() {
    Lista l;
    int x;
    int tem_elemento;

    cria(&l);

    insere(&l, 30);
    insere(&l, 30);
    insere(&l, 30);
    insere(&l, 30);
    insere(&l, 10);
    insere(&l, 20);

    pega_o_primeiro(&l, &x, &tem_elemento);
    if (tem_elemento) { printf("primeiro elemento = %d\n", x); }

    insere(&l, 300);
    insere(&l, 25);
    insere(&l, 5);

    pega_o_primeiro(&l, &x, &tem_elemento);
    if (tem_elemento) { printf("primeiro elemento = %d\n", x); }

    insere(&l, 300);
    insere(&l, 50);
    insere(&l, 50);
    insere(&l, 3);

    pega_o_primeiro(&l, &x, &tem_elemento);
    if (tem_elemento) { printf("primeiro elemento = %d\n", x); }

    imprime(&l);

    retira(&l, 3);
    pega_o_primeiro(&l, &x, &tem_elemento);
    if (tem_elemento) { printf("primeiro elemento = %d\n", x); }
    retira(&l, 25);
    retira(&l, 300);

    printf("impressao com pega_o_proximo():\n");
    while (tem_elemento) {
        printf("%d " , l.atual->info);
        pega_o_proximo(&l, &x, &tem_elemento);
    }

    printf("\nimpressao normal:\n");
    imprime(&l);

    return 0;
}
