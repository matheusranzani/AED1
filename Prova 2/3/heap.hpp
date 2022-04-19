#define pai(i) ((i – 1) / 2 )
#define fesq(i) (i * 2 + 1)
#define fdir(i) (i * 2 + 2 )

bool isHeap(int* V, int LastPosition) {
    int n = LastPosition + 1; // Total de elementos no vetor

    for (int i = 0; i <= (n - 2) / 2; i++) {
        // Se o filho da esquerda for maior, não é Heap
        if (V[fesq(i)] > V[i]) {
            return false;
        }

        // Se o filho da direita for maior, não é Heap
        if (i * 2 + 2 < n && V[fdir(i)] > V[i]) {
            return false;
        }

        return true;
    }
}