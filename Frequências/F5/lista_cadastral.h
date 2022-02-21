#include <assert.h>
#include <stdlib.h>

// Declaração do Nó
typedef struct Node {
    int info;
    struct Node *proximo;
} Node;

// Definição da Lista Cadastral
typedef struct Lista {
    Node *inicio, *fim;
    int tamanho;
} Lista;

// Função que retorna uma Lista vazia
Lista *cria() {
    Lista *l;

    l = (Lista *) malloc(sizeof(Lista));
    assert(l != NULL);

    l->inicio = NULL;
    l->fim = NULL;
    l->tamanho = 0;

    return l;
}

// Função que libera a memória alocada pela Lista atual
void libera(Lista *l) {
    if (l != NULL) {
        Node *p = l->inicio;

        while (p != NULL) {
            l->inicio = p->proximo;
            free(p);
            p = l->inicio;
        }

        free(l);
    }
}

// Função que retorna se o elemento recebido está na Lista ou não
int esta_na_lista(Lista *l, int x) {
    assert(l != NULL);

    Node *p = l->inicio;

    while (p != NULL) {
        if (p->info == x) {
            return 1;
        }

        p = p->proximo;
    }

    return 0;
}

// Função que insere um elemento na Lista
void insere(Lista *l, int x) {
    assert(l != NULL);

    // Impede que tenha elementos repetidos
    if (esta_na_lista(l, x)) {
        return;
    }

    Node *p = (Node *) malloc(sizeof(Node));

    p->info = x;
    p->proximo = NULL;

    if (l->inicio == NULL) {
        l->inicio = p;
        l->fim = p;
    } else {
        l->fim->proximo = p;
    }

    l->fim = p;

    l->tamanho++;
}

// Função que retorna se o elemento recebido foi retirado com sucesso ou não
int retira(Lista *l, int x) {
    assert(l != NULL);

    Node *anterior = NULL;
    Node *p = l->inicio;

    while (p != NULL) {
        if (p->info == x) {
            if (anterior == NULL) {
                l->inicio = l->inicio->proximo;
                free(p);
            } else if (p == l->fim) {
                l->fim = anterior;
                l->fim->proximo = NULL;
                free(p);
            } else {
                anterior->proximo = p->proximo;
                free(p);
            }

            l->tamanho--;

            return 1;
        } else {
            anterior = p;
            p = p->proximo;
        }
    }

    return 0;
}