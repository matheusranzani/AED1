#include "lista.h"

#include <stdio.h>

void imprime(NodePtr *L) {
    NodePtr p = *L;

    do {
        printf("%d ", p->info);
        p = p->next;
    } while (p != NULL);

    printf("\n");
}

int main() {
    NodePtr l;
    int ok;

    cria(&l);

    insere(&l, 70);
    insere(&l, 35);
    insere(&l, 35);
    insere(&l, 10);
    imprime(&l);

    // remove_todos(&l, 35, &ok);
    
    remove_1(&l, 10, &ok);
    remove_1(&l, 35, &ok);

    imprime(&l);

    remove_1(&l, 35, &ok);
    imprime(&l);
    remove_1(&l, 70, &ok);
    imprime(&l);

    return 0;
}
