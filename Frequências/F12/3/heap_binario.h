void corrige_heap_subindo(int Heap[], int LastPosition) {
    int i;
    int aux;

    i = (LastPosition - 1) / 2; // índice do pai

    // se o LastPosition tem um pai e se seu valor é maior que o dele
    if (i >= 0 && Heap[LastPosition] > Heap[i]) {
        // troca os elementos do Heap
        aux = Heap[LastPosition];
        Heap[LastPosition] = Heap[i];
        Heap[i] = aux;

        corrige_heap_subindo(Heap, i); // corrige o pai
    }
}
