#include "lista_cadastral.h"

#include <stdio.h>

// Função que imprime os elementos da Lista
void imprime(Lista *l) {
    assert(l != NULL);

    Node *p = l->inicio;

    printf("\nImprimindo a Lista:\n");

    while (p != NULL) {
        printf("%d ", p->info);
        p = p->proximo;
    }

    printf("\n");
}

// Função que retorna o tamanho atual da Lista
int tamanho_lista(Lista *l) {
    assert(l != NULL);

    int tamanho = 0;
    Node *p = l->inicio;

    while (p != NULL) {
        p = p->proximo;
        tamanho++;
    }

    return tamanho;
}

// Função main que usa as funçẽos da Lista
int main() {
    Lista *l = cria();

    printf("Adicionando os elementos 10, 15, 82, 98, 3 à Lista\n");
    insere(l, 10);
    insere(l, 15);
    insere(l, 82);
    insere(l, 98);
    insere(l, 3);
    imprime(l);
    printf("Tamanho atual da lista: %d\n", tamanho_lista(l));

    printf("\nRemovendo os elementos 82 e 98 da Lista\n");
    retira(l, 82);
    retira(l, 98);
    imprime(l);
    printf("Tamanho atual da lista: %d\n", tamanho_lista(l));

    libera(l);
}