#include "estoque.h"

void imprime_estoque(Estoque* e) {
    if (vazio(e)) {
        std::cout << "Estoque sem produtos" << std::endl;
        return;
    }

    ProdutoPtr p_aux = e->primeiro;

    do {
        std::cout << "Nome: " << p_aux->nome << std::endl;
        std::cout << "Preco: " << p_aux->preco << std::endl;
        std::cout << "Quantidade: " << p_aux->quantidade << std::endl;
      p_aux = p_aux->proximo;
      
      std::cout << std::endl;
    } while (p_aux != NULL);
}

int main() {
    Estoque e;
    bool ok;

    cria(&e);

    ProdutoPtr arroz = new Produto("Arroz", 6.50, 3);
    ProdutoPtr feijao = new Produto("Feijao", 10.30, 1);
    ProdutoPtr batata = new Produto("Batata", 2.5, 7);

    insere(&e, arroz, &ok);
    insere(&e, feijao, &ok);
    insere(&e, batata, &ok);

    imprime_estoque(&e);

    altera_quantidade(&e, "Arroz", 3, &ok);
    altera_quantidade(&e, "Feijao", -8, &ok);
    altera_quantidade(&e, "Batata", -2, &ok);
    // retira(&e, feijao, &ok);
    retira(&e, arroz, &ok);
    
    std::cout << "----------- depois -----------" << std::endl;
    std::cout << std::endl;

    imprime_estoque(&e);

    return 0;
}
