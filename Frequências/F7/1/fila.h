#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int info;
    struct Node *esq, *dir;
} Node;

typedef Node *NodePtr;

typedef struct Fila {
    NodePtr primeiro, ultimo;
} Fila;

void cria(Fila *F) {
    F->primeiro = NULL;
    F->ultimo = NULL;
}

int vazia(Fila *F) {
    return (F->primeiro == NULL && F->ultimo == NULL);
}

void insere(Fila *F, int X, int *Erro) {
    NodePtr p = (NodePtr) malloc(sizeof(NodePtr));
    p->info = X;

    if (vazia(F)) {
        p->esq = p;
        p->dir = p;
        
        F->primeiro = p;
        F->ultimo = p;
    } else {
        NodePtr p_aux = F->primeiro;

        while (p_aux->dir != F->primeiro) {
            p_aux = p_aux->dir;
        }
        
        p->dir = F->primeiro;
        p->esq = p_aux;
        p_aux->dir = p;
        F->ultimo = p;
        F->primeiro->esq = p;
    }
}

void retira(Fila *F, int *X, int *Erro) {
    if (vazia(F)) {
        *Erro = 1;
    } else {
        *Erro = 0;
        *X = F->primeiro->info;

        NodePtr primeiro = F->primeiro;
        NodePtr proximo = F->primeiro->dir;

        // Se a fila tiver apenas um elemento
        if (F->primeiro == F->ultimo) {
            F->primeiro = NULL;
            F->ultimo = NULL;

            return;
        }
        
        // Se a fila tiver apenas dois elementos
        if (proximo->dir == primeiro) {
            proximo->dir = proximo;
        }

        proximo->esq = F->ultimo;
        F->ultimo->dir = proximo;
        F->primeiro = proximo;
        
        free(primeiro);
    }
}

void destroi(Fila *F) {
    if (vazia(F)) {
        return;
    }

    NodePtr p_aux = F->primeiro;

    do {
        free(p_aux);
        p_aux = p_aux->dir;
    } while (p_aux != F->primeiro);

    // Se eu coloco isso aparece o erro "double free or corruption (out)"
    // free(F);

    // Se eu coloco esses "free()" não aparece o erro, mas precisa deles?
    free(F->primeiro);
    free(F->ultimo);
}