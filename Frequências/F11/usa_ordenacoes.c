#include "ordenacoes.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

/*  Exemplos rand()
    v1=rand( )%10; // v1 no intervalo 0-9
    v2=rand( )%10+1; // v2 no intervalo 1-10
    v3=rand( )%30+1985; //v3 no intervalo 1985 - 2014
*/
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

void copia_vetor(int vetor_copia[], int vetor_original[]) {
    for (int i = 0; i < TAMANHO; i++) {
        vetor_copia[i] = vetor_original[i];
    }
}

int main() {
    int vetor[TAMANHO], vetor_copia[TAMANHO];

    inicia_vetor_sorteado(vetor);
    copia_vetor(vetor_copia, vetor);

    printf("Vetor gerado aleatoriamente de tamanho 10:\n");
    imprime_vetor(vetor);
    selection_sort(vetor, TAMANHO);
    printf("Vetor ordenado utilizando Selection Sort:\n");
    imprime_vetor(vetor);
    
    printf("\nVetor copia do vetor original:\n");
    imprime_vetor(vetor_copia);

    printf("Vetor copia ordenado utilizando Insertion Sort:\n");
    insertion_sort(vetor_copia, TAMANHO);
    imprime_vetor(vetor_copia);

    return 0;
}
