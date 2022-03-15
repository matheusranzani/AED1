#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node *esq, *dir;
} Node;

typedef Node *NodePtr;

typedef struct Pilha {
    NodePtr header;
} Pilha;

void cria(Pilha *p) {
    p->header = malloc(sizeof(Node));
    p->header->dir = p->header;
    p->header->esq = p->header;
}

int vazia(Pilha *P) {
    if (P->header->esq == P->header) {
        return 1;
    } else {
        return 0;
    }
}

void empilha(Pilha *P, char X) {
    NodePtr p = malloc(sizeof(Node));

    p->info = X;
    p->dir = P->header->dir;
    p->esq = P->header;

    P->header->dir->esq = p;
    P->header->dir = p;
}
