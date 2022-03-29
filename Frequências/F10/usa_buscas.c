#include "buscas.h"

#include <stdio.h>

void inicia_vetor_ordenado(int vetor[]) {
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i + 1;
    }
}

void imprime_vetor(int vetor[]) {
    printf("Vetor ordenado com %d elementos:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {
    int vetor[TAMANHO];

    inicia_vetor_ordenado(vetor);
    imprime_vetor(vetor);

    int posicao1 = busca_sequencial(vetor, 38);
    printf("\n\nElemento 38 foi encontrado na posicao %d\n", posicao1);

    int posicao2 = busca_binaria(vetor, 45);
    printf("Elemento 45 foi encontrado na na posicao %d", posicao2);

    printf("\n");

    return 0;
}