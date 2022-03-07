typedef struct ListaCadastral {

} ListaCadastral;

typedef char elemento;

int vazia(ListaCadastral L);
int esta_na_lista(ListaCadastral L, elemento X);
void pega_o_primeiro(ListaCadastral L, elemento X, int tem_elemento);
void pega_o_proximo(ListaCadastral L, elemento X, int tem_elemento);

int itens_comprados_erroneamente(
    ListaCadastral carrinho_de_compras, ListaCadastral lista_de_compras_original
) {
    elemento item_carrinho;
    int tem_elemento;
    int resultado = 0;

    pega_o_primeiro(carrinho_de_compras, item_carrinho, tem_elemento);

    while (tem_elemento) {
        if (!esta_na_lista(lista_de_compras_original, item_carrinho)) {
            resultado++;
        }

        pega_o_proximo(carrinho_de_compras, item_carrinho, tem_elemento);
    }

    return resultado;
}