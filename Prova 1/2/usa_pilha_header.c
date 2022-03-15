#include "pilha_header.h"

#include <stdio.h>

void imprime(Pilha *p) {
    NodePtr p_aux = p->header->dir;

    do {
        printf("%c ", p_aux->info);
        p_aux = p_aux->dir;
    } while (p_aux != p->header);

    printf("\n");
}

int main() {
    Pilha p;

    cria(&p);

    empilha(&p, 'c');
    empilha(&p, 'b');
    empilha(&p, 'a');

    imprime(&p);

    return 0;
}
