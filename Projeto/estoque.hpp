#include <iostream>

typedef struct Produto {
    std::string nome;
    double preco;
    int quantidade;
    struct Produto* proximo;

    Produto() {};
    Produto(std::string nome, double preco, int quantidade) :
        nome(nome), preco(preco), quantidade(quantidade) {}
} Produto;

typedef Produto* ProdutoPtr;

typedef struct Estoque {
    ProdutoPtr primeiro;
    ProdutoPtr ultimo;
} Estoque;

void cria(Estoque* e) {
    e->primeiro = NULL;
    e->ultimo = NULL;
}

bool vazio(Estoque* e) {
    return e->primeiro == NULL;
}

bool esta_no_estoque(Estoque* e, std::string nome) {
    ProdutoPtr p_aux = e->primeiro;

    while (p_aux != NULL) {
        if (p_aux->nome == nome) {
            return true;
        }

        p_aux = p_aux->proximo;
    }

    return false;
}

ProdutoPtr retorna_produto(Estoque* e, std::string nome) {
    ProdutoPtr p_aux = e->primeiro;

    while (p_aux != NULL) {
        if (p_aux->nome == nome) {
            return p_aux;
        }

        p_aux = p_aux->proximo;
    }
    
    return NULL;
}

void insere(Estoque* e, Produto p, bool* ok) {
    ProdutoPtr p_novo = new Produto;

    p_novo->nome = p.nome;
    p_novo->preco = p.preco;
    p_novo->quantidade = p.quantidade;
    p_novo->proximo = NULL;

    if (vazio(e)) {
        e->primeiro = p_novo;
    } else {
        if (esta_no_estoque(e, p_novo->nome)) {
            *ok = false;
            return;
        }

        e->ultimo->proximo = p_novo;
    }

    e->ultimo = p_novo;
    *ok = true;
}

void retira(Estoque* e, std::string nome, bool* ok) {
    if (!esta_no_estoque(e, nome)) {
        *ok = false;
        return;
    }

    ProdutoPtr p = retorna_produto(e, nome);
    ProdutoPtr p_aux = e->primeiro;
    ProdutoPtr anterior = NULL;

    while (p_aux != NULL) {
        if (p_aux->nome == p->nome) {
            if (anterior == NULL) { // Começo da lista
                e->primeiro = e->primeiro->proximo;
                delete p_aux;
            } else if (p_aux->proximo == NULL) { // Fim da lista
                e->ultimo = anterior;
                anterior->proximo = NULL;
                delete p_aux;
            } else { // Meio da lista
                anterior->proximo = p_aux->proximo;
                delete p_aux;
            }

            *ok = 1;
            return;
        } else {
            anterior = p_aux;
            p_aux = p_aux->proximo;
        }
    }

    *ok = false;
}

void altera_quantidade(Estoque* e, std::string nome, int quantidade, bool* ok) {
    if (!esta_no_estoque(e, nome)) {
        *ok = false;
        return;
    }

    ProdutoPtr p_aux = e->primeiro;

    while (p_aux != NULL && p_aux->nome != nome) {
        p_aux = p_aux->proximo;
    }

    int nova_quantidade = p_aux->quantidade + quantidade;
    
    if (nova_quantidade < 0) {
        *ok = false;
        return;
    }

    p_aux->quantidade = nova_quantidade;
    *ok = true;
}
