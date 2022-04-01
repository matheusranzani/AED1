#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node *next;
} Node;

typedef Node *NodePtr;

void cria(NodePtr *L) {
    *L = NULL;
}

int vazia(NodePtr *L) {
    return *L == NULL;
}

void insere(NodePtr *L, int x) {
    NodePtr p = (NodePtr) malloc(sizeof(Node));
    p->info = x;

    if (vazia(L)) {
        p->next = NULL;
        *L = p;
    } else {
        NodePtr p_aux = *L;
        NodePtr anterior = NULL;

        while (p_aux != NULL) {
            anterior = p_aux;
            p_aux = p_aux->next;
        }

        anterior->next = p;
        p->next = NULL;
    }
}

void remove_1(NodePtr *L, int x, int *ok) {
    // Verificação se a lista está vazia
    if (*L == NULL) {
        ok = 0;
        return;
    }

    NodePtr p = *L;
    NodePtr anterior = NULL;

    while (p != NULL) {
        if (p->info == x) {
            if (anterior == NULL) { // Começo da lista
                *L = (*L)->next;
                free(p);
            } else if (p->next == NULL) { // Fim da lista
                anterior->next = NULL;
                free(p);
            } else { // Meio da lista
                anterior->next = p->next;
                free(p);
            }

            *ok = 1;
            return;
        } else {    
            anterior = p;
            p = p->next;
        }
    }

    *ok = 0;
}

void remove_todos(NodePtr *L, int X, int *ok) {
    *ok = 1;

    while (*ok) {
        remove_1(L, X, ok);
    }
}
