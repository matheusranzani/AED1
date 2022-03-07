#include <stdlib.h>

// Declaração do Nó
typedef struct Node {
    int info;
    struct Node *next;
} Node;

// Declaração do tipo Ponteiro de Nó
typedef Node *NodePtr;

// Declaração da pilha encadeada
typedef struct Pilha {
    NodePtr topo;
    int *elementos;
} Pilha;

// Função que inicializa uma pilha vazia
void cria(Pilha *p) {
    p->topo = NULL;
}

// Função que retorna 1 se a pilha está vazia e 0 caso contrário
int vazia(Pilha *p) {
    return p->topo == NULL; 
}

// Função que, nesse caso, sempre retorna que a pilha não está cheia
int cheia(Pilha *p) {
    return 0;
}

// Função que adiciona um elemento à pilha caso ela não esteja cheia
void empilha(Pilha *p, int x, int *deu_certo) {
    if (cheia(p)) {
        *deu_certo = 0;
    } else {
        NodePtr p_aux = malloc(sizeof(NodePtr));
        
        p_aux->info = x;
        p_aux->next = p->topo;
        p->topo = p_aux;

        *deu_certo = 1;
    }
}

// Função que remove o elemento no topo da pilha caso ela não esteja vazia
void desempilha(Pilha *p, int *x, int *deu_certo) {
    if (vazia(p)) {
        *deu_certo = 0;
    } else {
        NodePtr p_aux;
        
        *x = p->topo->info;
        p_aux = p->topo;
        p->topo = p->topo->next;

        free(p_aux);

        *deu_certo = 1;
    }
}

// Função que retorna o elemento no topo da pilha
int elemento_topo(Pilha *p, int *deu_certo) {
    if (vazia(p) == 1) {
        *deu_certo = 0;
    } else {
        int topo;
        
        desempilha(p, &topo, deu_certo);
        empilha(p, topo, deu_certo);

        *deu_certo = 1;

        return topo;
    }
}

// Função que retorna o número atual de elementos da pilha
int quantidade_elementos(Pilha *p) {
    Pilha p_aux;
    int x;
    int deu_certo;
    int contador = 0;

    cria(&p_aux);

    while (!vazia(p)) {
        desempilha(p, &x, &deu_certo);

        if (deu_certo) {
            contador++;
            empilha(&p_aux, x, &deu_certo);
        }
    }

    while (!vazia(&p_aux)) {
        desempilha(&p_aux, &x, &deu_certo);

        if (deu_certo) {
            empilha(p, x, &deu_certo);
        }
    }

    return contador;
}