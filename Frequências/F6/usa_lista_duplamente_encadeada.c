// Inclui a Lista Duplamente Encadeada
#include "lista_duplamente_encadeada.h"

#include <stdio.h>

// Função que imprime os elementos da Lista
void imprime(Lista *l) {
    assert(l != NULL);
        
    NodePtr p = l->inicio;

    printf("\nImprimindo a Lista já ordenada:\n");

    while (p != NULL) {
        printf("%d ", p->info);
        p = p->proximo;
    }

    printf("\n");
}

// Função que imprime os elementos da Lista em ordem inversa
void imprime_inverso(Lista *l) {
    assert(l != NULL);
        
    NodePtr p = l->fim;

    while (p != NULL) {
        printf("%d ", p->info);
        p = p->anterior;
    }

    printf("\n");
}

// Função que retorna o tamanho atual da Lista
int tamanho_lista(Lista *l) {
    int tamanho = 0;
    NodePtr p = l->inicio;

    while (p != NULL) {
        p = p->proximo;

        tamanho++;
    }

    return tamanho;
}

// Função principal que utiliza a Lista Duplamente Encadeada
int main() {
    Lista *l = cria();

    printf("Adicionando os elementos 8, 3, 19, 21, 2 à Lista...\n");
    insere(l, 8);
    insere(l, 3);
    insere(l, 19);
    insere(l, 21);
    insere(l, 2);
    imprime(l);
    printf("Tamanho atual da Lista: %d\n", tamanho_lista(l));

    printf("\nImprimindo a Lista na ordem inversa:\n");
    imprime_inverso(l);

    printf("\nRetirando o elemento 2 da Lista...\n");
    retira(l, 2);
    imprime(l);
    printf("Tamanho atual da Lista: %d\n", tamanho_lista(l));
    printf("\nRetirando o elemento 21 da Lista...\n");
    retira(l, 21);
    imprime(l);
    printf("Tamanho atual da Lista: %d\n", tamanho_lista(l));
    printf("\nRetirando o elemento 8 da Lista...\n");
    retira(l, 8);
    imprime(l);
    printf("Tamanho atual da Lista: %d\n", tamanho_lista(l));

    libera(l);

    return 0;
}