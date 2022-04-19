#include "ordena.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void inicia_vetor_sorteado(int vetor[]) {
    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10 + 1;
    }
}

void imprime_vetor(int vetor[]) {
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

int main() {
    int vetor[TAMANHO];

    inicia_vetor_sorteado(vetor);
    imprime_vetor(vetor);

    ordena(vetor, TAMANHO);
    imprime_vetor(vetor);

    return 0;
}
