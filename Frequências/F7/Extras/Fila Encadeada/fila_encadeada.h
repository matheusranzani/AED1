#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node *next; 
} Node;

typedef Node *NodePtr;

typedef struct Fila {
    NodePtr primeiro, ultimo;
} Fila;

void cria(Fila *f) {
    f->primeiro = NULL;
    f->ultimo = NULL;
}

int vazia(Fila *f) {
    return f->primeiro == NULL && f->ultimo == NULL;
}

void insere(Fila *f, int x) {
    NodePtr p = (NodePtr) malloc(sizeof(Node));
    p->info = x;
    
    if (vazia(f)) {
        p->next = NULL;
        f->primeiro = p;
        f->ultimo = p;
    } else {
        f->ultimo->next = p;
        f->ultimo = p;
        p->next = NULL;
    }
}

void retira(Fila *f, int *x, int *deu_certo) {
    if (vazia(f)) {
        *deu_certo = 0;
        return;
    } else {
        *deu_certo = 1;
        *x = f->primeiro->info;
        
        NodePtr primeiro = f->primeiro;
        
        if (f->primeiro == f->ultimo) {
            f->primeiro = NULL;    
            f->ultimo = NULL;
            
            free(primeiro);
            return;
        }
        
        f->primeiro = f->primeiro->next;
        free(primeiro);
    }
}

void destroi(Fila *f, int *deu_certo) {
    if (vazia(f)) {
        deu_certo = 0;
        return;
    }
    *deu_certo = 1;
    
    int x;
    
    while (!vazia(f)) {
        retira(f, &x, deu_certo);
    }
}
