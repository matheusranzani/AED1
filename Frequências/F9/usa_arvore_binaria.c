#include "arvore_binaria.h"

#include <stdio.h>

void imprime_todos(ArvoreBinaria R) {
    if (!vazia(&R)) {
        printf("%d ", R->info);
        imprime_todos(R->esq);
        imprime_todos(R->dir);
    }
}


int altura(ArvoreBinaria R) {
    if (vazia(&R)) {
        return 0;
    } else {
        int altura_esq = altura(R->esq);
        int altura_dir = altura(R->dir);

        if (altura_esq > altura_dir) {
            return 1 + altura_esq;
        } else {
            return 1 + altura_dir;
        }
    }
}

int main() {
    ArvoreBinaria R;
    int ok;

    cria(&R);
    
    printf("Adicionando os valores 6, 4, 8, 2, 5, 7, 9 (nessa ordem) na Arvore Binaria...\n");
    insere(&R, 6, &ok);
    insere(&R, 4, &ok);
    insere(&R, 8, &ok);
    insere(&R, 2, &ok);
    insere(&R, 5, &ok);
    insere(&R, 7, &ok);
    insere(&R, 9, &ok);

    printf("\nImpressao da Arvore (Pre-ordem):\n");
    imprime_todos(R);
    printf("\nAltura da Arvore = %d\n", altura(R));

    esta_na_arvore(&R, 5) ? printf("\n5 esta na Arvore") : printf("\n5 nao esta na Arvore"); 
    esta_na_arvore(&R, 9) ? printf("\n9 esta na Arvore") : printf("\n9 nao esta na Arvore"); 
    esta_na_arvore(&R, 20) ? printf("\n20 esta na Arvore") : printf("\n20 nao esta na Arvore"); 
    esta_na_arvore(&R, 3) ? printf("\n3 esta na Arvore") : printf("\n3 nao esta na Arvore"); 

    printf("\n\nRemovendo os valores 7, 8, 5 e 2 da Arvore Binaria...");
    retira(&R, 7, &ok);
    retira(&R, 8, &ok);
    retira(&R, 5, &ok);
    retira(&R, 2, &ok);

    printf("\n\nImpressao da Arvore (Pre-ordem):\n");
    imprime_todos(R);
    printf("\nAltura da Arvore = %d", altura(R));

    printf("\n");

    destroi(&R);

    return 0;
}

// void imprime_todos(ArvoreBinaria R) {
//     if (!vazia(&R)) {
//         printf("%d(", R->info);
//         imprime_todos(R->esq);
//         printf(",");
//         imprime_todos(R->dir);
//         printf(")");
//     } else {
//         printf("NULL");
//     }
// }