#include "fila.h" // Inclui a fila

#include <stdio.h>

// Função que imprime os elementos atuais da fila
void imprime(Fila *f) {
    Fila f_aux;
    int x;
    int ok;

    // Cria uma fila auxiliar para realizar a impressãos dos elementos
    cria(&f_aux);

    // Adiciona os elementos da fila para a fila auxiliar
    while (vazia(f) == 0) {
        retira(f, &x, &ok);

        if (ok) {
            insere(&f_aux, x, &ok);
        }
    }

    printf("Imprimindo a fila: ");

    // Imprime os elementos da fila auxiliar até ela ficar vazia
    while (vazia(&f_aux) == 0) {
        retira(&f_aux, &x, &ok);

        if (ok) {
            printf("%d ", x);
            insere(f, x, &ok);
        }
    }

    printf("\n");
}

// Função que retorna 1 caso duas filas possuam o mesmo número de elementos e 0 caso contrário
int mesmo_numero_elementos(Fila *fA, Fila *fB) {
    return numero_elementos(fA) == numero_elementos(fB);
}

// Função main que usa as funçẽos da fila
int main() {
    Fila f;
    int ok;
    int a;

    cria(&f);

    printf("\nTentando inserir 6 elementos em uma Fila que so cabem 5\n");

    for (int i = 10; i <= 60; i += 10) {
        insere(&f, i, &ok);
        imprime(&f);
    }

    printf("Pressione uma tecla... ");
    getchar();

    printf("\nTentando retirar 6 elementos em uma Fila que so cabem 5\n");

    for (int i = 1; i <= 6; i++) {
        retira(&f, &a, &ok);
        imprime(&f);
    }

    printf("Pressione uma tecla... ");
    getchar();

    Fila fA, fB;

    cria(&fA);
    cria(&fB);

    printf("\nAdicionando os valores 5, 7 e 9 a Fila A");
    insere(&fA, 5, &ok);
    insere(&fA, 7, &ok);
    insere(&fA, 9, &ok);

    printf("\n(Fila A) ");
    imprime(&fA);
    
    printf("\nAdicionando os valores 2 e 4 a Fila B");
    insere(&fB, 2, &ok);
    insere(&fB, 4, &ok);
    
    printf("\n(Fila B) ");
    imprime(&fB);

    printf("\nAs filas possuem o mesmo numero de elementos?\n");
    
    mesmo_numero_elementos(&fA, &fB) == 1 ? printf("Sim\n") : printf("Nao\n");

    return 0;
}