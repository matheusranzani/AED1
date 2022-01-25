#define TAMANHO 5 // Tamanho máximo da pilha

// Declaração da pilha
typedef struct Pilha {
    int elementos[TAMANHO];
    int topo;
} Pilha;

// Função que inicializa uma pilha vazia 
void cria(Pilha *p) {
    p->topo = -1; 
}

// Função que retorna 1 se a pilha está vazia e 0 caso contrário 
int vazia(Pilha *p) {
    return p->topo == -1 ? 1 : 0;
}

// Função que retorna 1 se a pilha está cheia e 0 caso contrário 
int cheia(Pilha *p) {
    return p->topo == TAMANHO - 1 ? 1 : 0;
}

// Função que adiciona um elemento à pilha caso ela não esteja cheia
void empilha(Pilha *p, int x, int *deu_certo) {
    if (cheia(p) == 1) {
        *deu_certo = 0;
    } else {
        p->topo++;
        p->elementos[p->topo] = x;
        *deu_certo = 1;
    }
}

// Função que remove o elemento no topo da pilha caso ela não esteja vazia
void desempilha(Pilha *p, int *x, int *deu_certo) {
    if (vazia(p) == 1) {
        *deu_certo = 0;
    } else {
        *x = p->elementos[p->topo];
        p->topo--;
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

// Função que retorna a quantidade total de elementos da pilha
int quantidade_elementos(Pilha *p, int *deu_certo) {
    if (vazia(p) == 1) {
        *deu_certo = 0;
    } else {
        *deu_certo = 1;
        return p->topo + 1;
    }
}