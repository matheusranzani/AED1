#include <stdlib.h>

typedef struct Node {
    int info;
    struct Node* dir;
    struct Node* esq;
} Node;

typedef Node* NodePtr;
typedef Node* ArvoreBinaria;

void cria(ArvoreBinaria* R) {
    *R = NULL;
}

int vazia(ArvoreBinaria* R) {
    return *R == NULL;
}

void insere(ArvoreBinaria* R, int x, int* ok) {
    if (vazia(R)) {
	      NodePtr p = (NodePtr) malloc(sizeof(Node));

	      p->esq = NULL;
	      p->dir = NULL;
	      p->info = x;
		  *R = p;
		  p = NULL;

		  *ok = 1;
	} else {
		if (x == (*R)->info) {
			*ok = 0;
			return;
		} else {
			if (x < (*R)->info) {
				ArvoreBinaria* esq = &(*R)->esq;
				insere(esq, x, ok);
			} else {
				ArvoreBinaria* dir = &(*R)->dir;
				insere(dir, x, ok);
			}
		}
	}
}

void retira(ArvoreBinaria* R, int x, int* ok) {
	if (vazia(R)) {
		*ok = 0;
		return;
	} else { 
		if (x < (*R)->info) {
			ArvoreBinaria* esq = &(*R)->esq;
			retira(esq, x, ok);
		} else {
			if (x > (*R)->info) {
				ArvoreBinaria* dir = &(*R)->dir;
				retira(dir, x, ok);
			} else {
				ArvoreBinaria aux = *R;
				*ok = 1;

				if ((*R)->esq == NULL && (*R)->dir == NULL) {
					free(aux);
					*R = NULL;
				} else {
					if ((*R)->esq != NULL && (*R)->dir != NULL) {
						aux = (*R)->esq;

						while (aux->dir != NULL) {
							aux = aux->dir;
						}

						(*R)->info = aux->info;
						ArvoreBinaria* esq = &(*R)->esq;
						retira(esq, (*R)->info, ok);
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
		}
	}
}

void destroi(ArvoreBinaria* R) {
	if (!vazia(R)) {
		ArvoreBinaria* esq = &(*R)->esq;
		destroi(esq);
		ArvoreBinaria* dir = &(*R)->dir;
		destroi(dir);

		free(R);
	}
}

int esta_na_arvore(ArvoreBinaria* R, int x) {
	if (vazia(R)) {
		return 0;
	} else {
		if (x == (*R)->info) {
			return 1;
		} else if (x < (*R)->info) {
			ArvoreBinaria* esq = &(*R)->esq;
			return esta_na_arvore(esq, x);
		} else {
			ArvoreBinaria* dir = &(*R)->dir;
			return esta_na_arvore(dir, x);
		}
	}
}
