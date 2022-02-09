#define TAMANHO 5 // Tamanho máximo da fila

// Declaração da fila
typedef struct Fila {
    int primeiro, ultimo, numero_elementos;
    int elementos[TAMANHO];    
} Fila;

// Função que inicializa uma fila vazia
void cria(Fila *f) {
    f->primeiro = 0;
    f->ultimo = 0;
    f->numero_elementos = 0;
}

// Função que retorna 1 se a fila está vazia e 0 caso contrário
int vazia(Fila *f) {
    return f->numero_elementos == 0;
}

// Função que retorna 1 se a fila está cheia e 0 caso contrário
int cheia(Fila *f) {
    return f->numero_elementos == TAMANHO;
}

// Função que insere um elemento na última posição da fila caso ela não esteja cheia 
void insere(Fila *f, int x, int *deu_certo) {
    if (cheia(f)) {
        *deu_certo = 0;
    } else {
        *deu_certo = 1;

        f->elementos[f->ultimo] = x;
        f->ultimo = (f->ultimo + 1) % TAMANHO;
        f->numero_elementos++;
    }
}

// Função que remove o elemento da primeira posição da fila caso ela não esteja vazia
void retira(Fila *f, int *x, int *deu_certo) {
    if (vazia(f)) {
        *deu_certo = 0;
    } else {
        *deu_certo = 1;
        
        *x = f->elementos[f->primeiro];
        f->primeiro = (f->primeiro + 1) % TAMANHO;
        f->numero_elementos--;
    }
}

// Função que retorna o número atual de elementos da fila
int numero_elementos(Fila *f) {
    Fila f_aux;
    int x;
    int deu_certo;
    int contador = 0;

    cria(&f_aux);

    while (vazia(f) == 0) {
        retira(f, &x, &deu_certo);

        if (deu_certo) {
            contador++;
            insere(&f_aux, x, &deu_certo);
        }
    }

    while (vazia(&f_aux) == 0) {
        retira(&f_aux, &x, &deu_certo);

        if (deu_certo) {
            insere(f, x, &deu_certo);
        }
    }

    return contador;  
}