#include "pilha.h"

#include <stdlib.h>

void imprime(Pilha *p) {
    Pilha p_aux;
    int x;
    int ok;

    cria(&p_aux);

    while (vazia(p) == 0) {
        desempilha(p, &x, &ok);

        if (ok) {
            empilha(&p_aux, x, &ok);
        }
    }

    printf("Imprimindo a pilha: ");

    while (vazia(&p_aux) == 0) {
        desempilha(&p_aux, &x, &ok);

        if (ok) {
            printf("%d ", x);
            empilha(p, x, &ok);
        }
    }

    printf("<- Topo\n");
}

int main() {
    Pilha p;
    int ok;
    int a;

    cria(&p);

    printf("\nTentando empilhar 6 elementos em uma Pilha que so cabem 5\n");
    for (int i = 10; i <= 60; i += 10) {
        empilha(&p, i, &ok);
        imprime(&p);
    }

    printf("\nPressione uma tecla... \n");
    system("pause");

    printf("\nTentando desempilhar 6 elementos em uma Pilha que so tem 5");
    int j = 1;
    while (j <= 6) {
        desempilha(&p, &a, &ok);
        imprime(&p);
        j++;
    }

    printf("\nPressione uma tecla... \n");
    system("pause");

    return 0;
}