#include "abb.h"

#include <stdio.h>

void imprime(ABB R) {
    if (R != NULL) {
        printf("%d ", R->info);
        imprime(R->esq);
        imprime(R->dir);
    }
}

void imprime_todos(ABB R) {
    if (R != NULL) {
        printf("%d(", R->info);
        imprime_todos(R->esq);
        printf(",");
        imprime_todos(R->dir);
        printf(")");
    } else {
        printf("NULL");
    }
}

int main() {
    ABB R;
    int ok;

    cria(&R);
    insere(&R, 11, &ok);
    insere(&R, 70, &ok);
    insere(&R, 35, &ok);
    insere(&R, 7, &ok);
    insere(&R, 35, &ok);
    insere(&R, 9, &ok);
    insere(&R, 40, &ok);
    imprime(R);
    // imprime_todos(R);

    printf("\n");

    Remove(&R, 11, &ok);
    Remove(&R, 4, &ok);
    Remove(&R, 70, &ok);
    Remove(&R, 40, &ok);
    Remove(&R, 35, &ok);
    Remove(&R, 7, &ok);
    Remove(&R, 9, &ok);
    imprime(R);

    destroi(&R);

    printf("\n");

    return 0;
}