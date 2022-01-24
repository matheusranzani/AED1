#include <stdio.h>

#define TAMANHO 5

typedef struct Pilha {
    int elementos[TAMANHO];
    int topo;
} Pilha;

void cria(Pilha *p) {
    p->topo = -1;
}

int vazia(Pilha *p) {
    return p->topo == -1 ? 1 : 0;
}

int cheia(Pilha *p) {
    return p->topo == TAMANHO - 1 ? 1 : 0;
}

void empilha(Pilha *p, int x, int *deu_certo) {
    if (cheia(p) == 1) {
        *deu_certo = 0;
    }

    p->topo++;
    p->elementos[p->topo] = x;
    *deu_certo = 1;
}

void desempilha(Pilha *p, int *x, int *deu_certo) {
    if (vazia(p) == 1) {
        *deu_certo = 0;
    }

    *x = p->elementos[p->topo];
    p->topo--;
    *deu_certo = 1;
}