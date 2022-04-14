#include <stdio.h>

void bubble_sort(int V[], int N) {
    int teve_troca;
    int k = N;
    int aux;

    for (int i = 0; i < N; i++) {
        teve_troca = 0;

        for (int j = 1; j < k; j++) {
            printf("\npassada %d comparou %d\n", i + 1, k);
            if (V[j - 1] > V[j]) {
                aux = V[j];
                V[j] = V[j - 1];
                V[j - 1] = aux;
                
                teve_troca = 1;            
            }
        }

        k--; // Diminui o número de comparações a cada iteração

        // Se não teve troca é porque já está ordenado
        if (!teve_troca) {
            printf("\nnao teve troca na passada %d\n", i + 1);
            return;
        }
    }
}
