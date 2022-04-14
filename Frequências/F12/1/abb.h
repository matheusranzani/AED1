#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node* esq;
    struct Node* dir;
} Node;

typedef Node* ABB;

void cria(ABB* R) {
    *R = NULL;
}

// int vazia(ABB* R) {
//     return *R == NULL;
// }

void insere(ABB* R, int x, int* ok) {
    if (*R == NULL) {
        ABB nova = (ABB)malloc(sizeof(Node));

        nova->esq = NULL;
        nova->dir = NULL;
        nova->info = x;
        *R = nova;

        *ok = 1;
    }
    else {
        if (x == (*R)->info) {
            *ok = 0;
            return;
        }
        else {
            if (x < (*R)->info) {
                ABB* esq = &(*R)->esq;
                insere(esq, x, ok);
            }
            else {
                ABB* dir = &(*R)->dir;
                insere(dir, x, ok);
            }
        }
    }
}

void Remove(ABB* R, int x, int* ok) {
    if (*R == NULL) {
        *ok = 0;
        return;
    } else if (x < (*R)->info) {
        ABB* esq = &(*R)->esq;
        Remove(esq, x, ok);
    } else if (x > (*R)->info) {
        ABB* dir = &(*R)->dir;
        Remove(dir, x, ok);
    } else {
        ABB aux = *R;
        *ok = 1;

        if ((*R)->esq == NULL && (*R)->dir == NULL) {
            free(aux);
            *R = NULL;
        } else if ((*R)->esq != NULL && (*R)->dir != NULL) {
            aux = (*R)->esq;

            while (aux->dir != NULL) {
                aux = aux->dir;
            }

            (*R)->info = aux->info;
            ABB* esq = &(*R)->esq;
            Remove(esq, (*R)->info, ok);
        } else {
            if ((*R)->esq == NULL) {
                *R = (*R)->dir;
            } else {
                *R = (*R)->esq;
            }

            free(aux);
        }
    }
}

void destroi(ABB* R) {
	if (*R == NULL) {
		ABB* esq = &(*R)->esq;
		destroi(esq);
		ABB* dir = &(*R)->dir;
		destroi(dir);

		free(R);
	}
}
