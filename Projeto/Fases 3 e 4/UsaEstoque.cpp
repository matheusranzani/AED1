//#include "Estoque.hpp"
//
//void limpar_tela() {
//#if defined _WIN32
//    system("cls");
//#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
//    system("clear");
//#elif defined (__APPLE__)
//    system("clear");
//#endif
//}
//
//void esperar() {
//    std::cout << "Pressione qualquer tecla para continuar. . . ";
//    std::cin.get();
//    std::cout << std::endl;
//}
//
//void adicionar_produto(Estoque* e) {
//    Produto produto;
//    bool ok;
//
//    std::cout << "\nInforme os dados do produto:" << std::endl;
//    std::cout << "Nome: ";
//    std::cin.ignore();
//    //getline(std::cin, produto.nome);
//    std::cout << "Preço: ";
//    std::cin >> produto.preco;
//    std::cout << "Quantidade: ";
//    std::cin >> produto.quantidade;
//
//    insere(e, produto, &ok);
//
//    if (ok) {
//        std::cout << "\nProduto adicionado com sucesso!\n" << std::endl;
//        std::cin.ignore();
//        esperar();
//    }
//    else {
//        std::cout << "\nFalha ao adicionar o produto\n" << std::endl;
//        std::cin.ignore();
//        esperar();
//    }
//}
//
//void retirar_produto(Estoque* e) {
//    std::string nome;
//    bool ok;
//
//    std::cout << "\nInforme o nome do produto que deseja remover: ";
//    std::cin.ignore();
//    //getline(std::cin, nome);
//
//    retira(e, nome, &ok);
//
//    if (ok) {
//        std::cout << "\nProduto removido com sucesso!\n" << std::endl;
//        esperar();
//    }
//    else {
//        std::cout << "\nFalha ao remover o produto\n" << std::endl;
//        esperar();
//    }
//}
//
//void imprime_produto(Estoque* e, std::string nome, bool* ok) {
//    ProdutoPtr produto = retorna_produto(e, nome);
//    if (produto == NULL) {
//        *ok = false;
//        std::cout << "\nProduto não encontrado no estoque\n" << std::endl;
//        esperar();
//        return;
//    }
//
//    std::cout << "\nProduto encontrado no estoque: ";
//
//    std::cout << "\nNome: " << produto->nome << std::endl;
//    std::cout << "Preço: " << produto->preco << std::endl;
//    std::cout << "Quantidade: " << produto->quantidade << std::endl;
//
//    std::cout << std::endl;
//
//    *ok = true;
//}
//
//void imprimir_produto(Estoque* e) {
//    std::string nome;
//    bool ok;
//
//    std::cout << "\nInforme o nome do produto que deseja exibir: ";
//    std::cin.ignore();
//    //getline(std::cin, nome);
//
//    imprime_produto(e, nome, &ok);
//
//    if (ok) {
//        esperar();
//    }
//}
//
//void alterar_quantidade(Estoque* e) {
//    std::string nome;
//    int quantidade;
//    bool ok;
//
//    std::cout << "\nInforme o nome do produto que deseja alterar a quantidade: ";
//    std::cin.ignore();
//    //getline(std::cin, nome);
//
//    imprime_produto(e, nome, &ok);
//
//    if (!ok) {
//        return;
//    }
//
//    std::cout << "Informe a nova quantidade do produto: ";
//    std::cin >> quantidade;
//
//    altera_quantidade(e, nome, quantidade, &ok);
//
//    if (ok) {
//        std::cout << "\nQuantidade alterada com sucesso!\n" << std::endl;
//        std::cin.ignore();
//        esperar();
//    }
//    else {
//        std::cout << "\nFalha ao alterar a quantidade\n" << std::endl;
//        std::cin.ignore();
//        esperar();
//    }
//}
//
//void imprimir_estoque(Estoque* e) {
//    if (vazio(e)) {
//        std::cout << "\nEstoque vazio\n" << std::endl;
//        std::cin.ignore();
//        esperar();
//        return;
//    }
//
//    ProdutoPtr p_aux = e->primeiro;
//
//    do {
//        std::cout << "\nNome: " << p_aux->nome << std::endl;
//        std::cout << "Preço: " << p_aux->preco << std::endl;
//        std::cout << "Quantidade: " << p_aux->quantidade << std::endl;
//
//        p_aux = p_aux->proximo;
//    } while (p_aux != NULL);
//
//    std::cout << std::endl;
//    std::cin.ignore();
//    esperar();
//}
//
////int main() {
////    setlocale(LC_ALL, "pt_BR.UTF-8");
////
////    Estoque e;
////    int opcao;
////
////    cria(&e);
////
////    do {
////        std::cout << "Controle de estoque" << std::endl;
////        std::cout << "\nEscolha uma opção:" << std::endl;
////        std::cout << "1 - Adicionar produto" << std::endl;
////        std::cout << "2 - Alterar quantidade de um produto" << std::endl;
////        std::cout << "3 - Remover produto" << std::endl;
////        std::cout << "4 - Exibir produto" << std::endl;
////        std::cout << "5 - Exibir estoque" << std::endl;
////        std::cout << "6 - Encerrar execução" << std::endl;
////        std::cout << "Digite a opção desejada: ";
////        std::cin >> opcao;
////
////        switch (opcao) {
////        case 1:
////            adicionar_produto(&e);
////            limpar_tela();
////            break;
////        case 2:
////            alterar_quantidade(&e);
////            limpar_tela();
////            break;
////        case 3:
////            retirar_produto(&e);
////            limpar_tela();
////            break;
////        case 4:
////            imprimir_produto(&e);
////            limpar_tela();
////            break;
////        case 5:
////            imprimir_estoque(&e);
////            limpar_tela();
////            break;
////        case 6:
////            std::cout << "\nPrograma finalizado!" << std::endl;
////            break;
////        default:
////            std::cout << "\nOpcção inválida\n" << std::endl;
////            std::cin.ignore();
////            esperar();
////            limpar_tela();
////        }
////    } while (opcao != 6);
////
////    return 0;
////}
