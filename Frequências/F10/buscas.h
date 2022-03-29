#define TAMANHO 50

// Se encotrou o elemento x, retorna sua posição
int busca_sequencial(int vetor_ordenado[], int x) {
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor_ordenado[i] == x) {
            return i;
        }
    }
}

// Função auxiliar para realizar a Busca Binária
static int _busca_binaria(int vetor_ordenado[], int esq, int dir, int x) {
    if (esq == dir - 1) {
        return dir;
    } else {
        int meio = (esq + dir) / 2;

        if (vetor_ordenado[meio] < x)   {
            return _busca_binaria(vetor_ordenado, meio, dir, x);
        } else {
            return _busca_binaria(vetor_ordenado, esq, meio, x);
        }
    }
}

// Se encotrou o elemento x, retorna sua posição
int busca_binaria(int vetor_ordenado[], int x) {
    return _busca_binaria(vetor_ordenado, -1, TAMANHO, x);
}