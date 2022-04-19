#include "abb.h"

#include <stdio.h>
#include <stdlib.h>

void imprime(Node* R) {
    if (R != NULL) {
        printf("%d ", R->chave);
        imprime(R->esq);
        imprime(R->dir);
    }
}

int main() {
    Node* R;

    cria(R);

    insere(R, 11);
    insere(R, 7);
    insere(R, 70);
    insere(R, 3);
    insere(R, 9);
    insere(R, 90);

    imprime(R);

    return 0;
}
