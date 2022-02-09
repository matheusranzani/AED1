#include "pilha_encadeada.h" // Inclui a pilha encadeada

#include <stdio.h>

// Função que imprime os elementos atuais da pilha 
void imprime(Pilha *p) {
    Pilha p_aux;
    int x;
    int ok;

    // Cria uma pilha auxiliar para realizar a impressãos dos elementos
    cria(&p_aux);

    // Adiciona os elementos da pilha para a pilha auxiliar
    while (vazia(p) == 0) {
        desempilha(p, &x, &ok);

        if (ok) {
            empilha(&p_aux, x, &ok);
        }
    }

    printf("Imprimindo a pilha: ");

    // Imprime os elementos da pilha auxiliar enquanto até ela ficar vazia
    while (vazia(&p_aux) == 0) {
        desempilha(&p_aux, &x, &ok);

        if (ok) {
            printf("%d ", x);
            empilha(p, x, &ok);
        }
    }

    printf("<- Topo\n");
}

// Função main que usa as funçẽos da pilha
int main() {
    Pilha p;
    int ok;
    int a;

    cria(&p);

    printf("\nEmpilhando 5 elementos em uma Pilha\n");

    for (int i = 10; i <= 50; i += 10) {
        empilha(&p, i, &ok);
        imprime(&p);
    }

    printf("Pressione uma tecla... ");
    getchar();

    printf("\nDesempilhando os elementos da Pilha\n");

    int j = 1;
    while (j <= 5) {
        desempilha(&p, &a, &ok);
        imprime(&p);
        j++;
    }

    printf("Pressione uma tecla... ");
    getchar();

    printf("\nAdicionando os valores 5 e 15 à Pilha\n");

    empilha(&p, 5, &ok);
    empilha(&p, 15, &ok);
    imprime(&p);

    int topo = elemento_topo(&p, &ok);
    if (ok) {
        printf("\nElemento no topo da pilha: %d\n", topo);
    }   

    int total = quantidade_elementos(&p);
    printf("Total de elementos na pilha atual: %d\n", total);

    return 0;
}