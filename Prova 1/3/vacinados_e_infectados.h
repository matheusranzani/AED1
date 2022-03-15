typedef char Elemento;
typedef Pessoa;

int NroPessoasVacinadasOuInfectadas(Lista L1, Lista L2) {
    int total_L1 = 0;
    int total_L2 = 0;
    int total_repetidos = 0;
    int tem_elemento = 1;
    int resultado;

    Pessoa p;

    PegaOPrimeiro(L1, X, tem_elemento);
    while (tem_elemento) {
        total_L1++;
        pegaOProximo(L1, X, tem_elemento);
    }

    PegaOPrimeiro(L2, X, tem_elemento);
    while (tem_elemento) {
        total_L2++;
        pegaOProximo(L2, X, tem_elemento);
    }

    PegaOPrimeiro(L1, X, tem_elemento);
    while(tem_elemento) {
        if (EstaNaLista(L2, X)) {
            total_repetidos++;
        }
        pegaOProximo(L1, X, tem_elemento);
    }

    resultado = (total_L1 + total_L2) - total_repetidos;

    return resultado;
}