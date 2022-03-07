#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int info;
    struct Node *next;
} Node;

typedef struct Node *NodePtr;

typedef struct FilaDeVacinacao {
    NodePtr ptr;
} FilaDeVacinacao;

void cria(FilaDeVacinacao *FV) {
    FV->ptr = NULL;
}

int vazia(FilaDeVacinacao *FV) {
    return FV->ptr == NULL;
}

void insere(FilaDeVacinacao *FV, int Idade) {
    NodePtr p = malloc(sizeof(NodePtr)); 
    p->info = Idade;

    NodePtr p_aux = FV->ptr;

    // Fila vazia
    if (FV->ptr == NULL) { 
        p->next = p;
        FV->ptr = p;
    } else if (p->info >= FV->ptr->info) {
        // Idade maior ou igual que a do começo da fila
        while (p_aux->next != FV->ptr) {
            p_aux = p_aux->next;
        }
        
        // Passa a ser o começo da fila
        p->next = FV->ptr;
        p_aux->next = p;
        FV->ptr = p;
    } else {
        // Idade no meio ou no fim da fila
        while (p_aux->next != FV->ptr && p->info < p_aux->next->info) {
            p_aux = p_aux->next;
        }

        p->next = p_aux->next;
        p_aux->next = p;
    }
}