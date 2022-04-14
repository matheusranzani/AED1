#include "bubble_sort.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 6

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
    int vetor[TAMANHO] = { 90, 29, 7, 12, 34, 47 };
    // int vetor[TAMANHO] = { 90, 47, 34, 29, 12, 7 };
    // int vetor[TAMANHO] = { 7, 12, 29, 34, 47, 90 };
    
    // int vetor_sorteado[TAMANHO];
    // inicia_vetor_sorteado(vetor_sorteado);
    
    imprime_vetor(vetor);
    bubble_sort(vetor, TAMANHO);
    printf("\n");
    imprime_vetor(vetor);
    
    // imprime_vetor(vetor_sorteado);
    // bubble_sort(vetor_sorteado, TAMANHO);
    // printf("\n");
    // imprime_vetor(vetor_sorteado);

    return 0;
}
