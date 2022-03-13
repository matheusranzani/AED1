#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node *esq, *dir;
} Node;

typedef Node *NodePtr;

typedef struct Pilha {
   NodePtr topo; 
} Pilha;

void cria(Pilha *p) {
    p->topo = NULL;
}

int vazia(Pilha *p) {
    return p->topo == NULL;
}

void empilha(Pilha *p, int x) {
    NodePtr ptr = malloc(sizeof(Node));
    ptr->info = x;

    if (vazia(p)) {
        ptr->esq = ptr;
        ptr->dir = ptr;
        p->topo = ptr;
    } else {
        ptr->dir = p->topo;
        ptr->esq = p->topo->esq;
        p->topo->esq->dir = ptr;
        p->topo->esq = ptr;
        p->topo = ptr;
    }
}

void desempilha(Pilha *p, int *x, int *deu_certo) {
    if (vazia(p)) {
        *deu_certo = 0;
        return;
    }

    *deu_certo = 1;
    NodePtr primeiro = p->topo;
    *x = primeiro->info;

    if (p->topo->esq == p->topo) {
        p->topo = NULL;

        free(primeiro);
        return;
    }

    p->topo = primeiro->dir;
    primeiro->dir->esq = primeiro->esq;
    primeiro->esq->dir = primeiro->dir;

    free(primeiro);
}

void destroi(Pilha *p, int *deu_certo) {
    if (vazia(p)) {
        *deu_certo = 0;
        return;
    }

    *deu_certo = 1;
    int x;

    while(!vazia(p)) {
        desempilha(p, &x, deu_certo);
    }
}