// Ordenação por Bolha/Troca
void ordena(int* V, int N) {
    int aux;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (V[j - 1] > V[j]) {
                aux = V[j];
                V[j] = V[j - 1];
                V[j - 1] = aux;
            }
        }
    }
}