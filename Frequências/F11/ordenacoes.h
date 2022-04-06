// Selection Sort (ordenação por seleção)
void selection_sort(int vetor[], int tamanho) {
    int i, j, menor, aux;
 
    for (i = 0; i < tamanho - 1; i++) {
        menor = i;
 
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
 
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }
}
 
// Insertion Sort (ordenação por inserção)
void insertion_sort(int vetor[], int tamanho) {
    int i, j, aux;
 
    for (j = 1; j < tamanho; j++) {
        aux = vetor[j];
 
        for (i = j; (i > 0) && (aux < vetor[i - 1]); i--) {
            vetor[i] = vetor[i - 1];
        }
 
        vetor[i] = aux;
    }
}
