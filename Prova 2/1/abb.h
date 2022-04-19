#include <stdlib.h>

typedef struct node {
    int chave;
    struct node *esq;
    struct node *dir;
} Node;

void cria(Node* R) {
    R = NULL;
}

void insere(Node* R, int Ch) {
    if (R == NULL) {
        Node* novo = (Node*) malloc(sizeof(Node));

        novo->esq = NULL;
        novo->dir = NULL;
        novo->chave = Ch;

        R = novo;
        novo = NULL;
    } else {
        if (Ch == R->chave) {
            return;
        } else if (Ch < R->chave) {
            insere(R->esq, Ch);
        } else {
            insere(R->dir, Ch);
        }
    }
}

int getAltura(Node* R) {
    if (R == NULL) {
        return 0;
    } else {
        int altura_esq = getAltura(R->esq);
        int altura_dir = getAltura(R->dir);

        if (altura_esq > altura_dir) {
            return altura_esq + 1;
        } else {
            return altura_dir + 1;
        }
    }
}
