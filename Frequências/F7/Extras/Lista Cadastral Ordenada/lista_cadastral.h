#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node *next;
} Node;

typedef Node *NodePtr;

typedef struct Lista {
    NodePtr primeiro, atual;
} Lista;

void cria(Lista *l) {
    l->primeiro = NULL;
    l->atual = NULL;
}

int vazia(Lista *l) {
    return l->primeiro == NULL && l->atual == NULL;
}

void procura_x(Lista *l, int x, NodePtr p, NodePtr anterior, int *achou_x) {
    p = l->primeiro;
    anterior = NULL;

    while (p->next != NULL && x > p->info) {
        anterior = p;
        p = p->next;
    }

    if (p != NULL && x == p->info) {
        *achou_x = 1;
    } else {
        *achou_x = 0;
    }
}

int esta_na_lista(Lista *l, int x) {
    NodePtr p, anterior;
    int achou_x;

    procura_x(l, x, p, anterior, &achou_x);

    return achou_x ? 1 : 0;
}

void insere(Lista *l, int x) {
    NodePtr p = (NodePtr) malloc(sizeof(Node));
    NodePtr anterior;
    int achou_x = 0;

    p->info = x;

    if (vazia(l)) {
        p->next = NULL;
        l->primeiro = p;
        l->atual = p;
    } else {
        if (esta_na_lista(l, x)) {
            return;
        }

        if (p->info < l->primeiro->info) {
            p->next = l->primeiro;
            l->primeiro = p;
            l->atual = p;
        } else {
            NodePtr p_aux = l->primeiro;

            while (p_aux->next != NULL && p->info > p_aux->info) {
                anterior = p_aux;
                p_aux = p_aux->next;
            }

            if (p_aux->next == NULL && p->info > p_aux->info) {
                p_aux->next = p;
                p->next = NULL;
            } else {
                anterior->next = p;
                p->next = p_aux;
            }
        }
    }
}

void retira(Lista *l, int x) {
    if (vazia(l) || !esta_na_lista(l, x)) {
        return;
    } else {
        NodePtr p = l->primeiro;
        NodePtr anterior = NULL;

        while (p != NULL && x > p->info) {
            anterior = p;
            p = p->next;
        }

        if (p != l->primeiro) {
            anterior->next = p->next;
            free(p);
            p = NULL;
            anterior = NULL;
        } else {
            l->primeiro = l->primeiro->next;
            free(p);
            p = NULL;
            anterior = NULL;
        }
    }
}

void pega_o_primeiro(Lista *l, int *x, int *tem_elemento) {
    l->atual = l->primeiro;

    if (l->atual != NULL) {
        *tem_elemento = 1;
        *x = l->atual->info;
    } else {
        *tem_elemento = 0;
    }
}

void pega_o_proximo(Lista *l, int *x, int *tem_elemento) {
    if (l->atual != NULL) {
        l->atual = l->atual->next;
    }

    if (l->atual == NULL) {
        *tem_elemento = 0;
    } else {
        *tem_elemento = 1;
        *x = l->atual->info;
    }
}
