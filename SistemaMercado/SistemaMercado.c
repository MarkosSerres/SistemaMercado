#include <stdio.h>
#include <stdlib.h>

void limparTela() {
    system("cls || clear");
}

void aguardarTecla() {
    printf("\nPressione qualquer tecla para voltar ao menu principal...");
    fflush(stdin);
    getchar();
}

void ComprarProdutos(float *caixa, int *arroz, int *feijao, int *biscoito, int *molhoTomate) {
    limparTela();

    int escolha;
    int quantidade;

    printf("Produtos:\n");
    printf("1- Arroz\n2- Feijao\n3- Biscoito\n4- Molho de tomate\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if(*caixa > 26){
                printf("Valor de compra: 26R$\nValor em caixa: %.1f\nQuantidade a ser adicionada:", *caixa);
                scanf("%d", &quantidade);
                if(quantidade * 26 < *caixa){
                *arroz += quantidade;
                *caixa -= (quantidade * 26);
                }
                else{
                    printf("Dinheiro em caixa insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *arroz);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Dinheiro em caixa insuficiente!");
            }
            break;
        case 2:
            if(*caixa > 13){
                printf("Valor de compra: 13R$\nValor em caixa: %.1f\nQuantidade a ser adicionada:", *caixa);
                scanf("%d", &quantidade);
                if(quantidade * 13 < *caixa){
                *feijao += quantidade;
                *caixa -= (quantidade * 13);
                }
                else{
                    printf("Dinheiro em caixa insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *feijao);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Dinheiro em caixa insuficiente!");
            }
            break;
        case 3:
            if(*caixa > 8){
                printf("Valor de compra: 8R$\nValor em caixa: %.1f\nQuantidade a ser adicionada:", *caixa);
                scanf("%d", &quantidade);
                if(quantidade * 8 < *caixa){
                *biscoito += quantidade;
                *caixa -= (quantidade * 8);
                }
                else{
                    printf("Dinheiro em caixa insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *biscoito);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Dinheiro em caixa insuficiente!");
            }
            break;
        case 4:
            if(*caixa > 3){
                printf("Valor de compra: 3R$\nValor em caixa: %.1f\nQuantidade a ser adicionada:", *caixa);
                scanf("%d", &quantidade);
                if(quantidade * 3 < *caixa){
                *molhoTomate += quantidade;
                *caixa -= (quantidade * 3);
                }
                else{
                    printf("Dinheiro em caixa insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *molhoTomate);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Dinheiro em caixa insuficiente!");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void VenderProdutos(float *caixa, int *arroz, int *feijao, int *biscoito, int *molhoTomate){

    limparTela();

    int escolha;
    int quantidade;

    printf("Produtos:\n");
    printf("1- Arroz\n2- Feijao\n3- Biscoito\n4- Molho de tomate\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if(*arroz > 0){
                printf("Valor de venda: 30R$\nValor em caixa: %.1f\nQuantidade a ser vendida:", *caixa);
                scanf("%d", &quantidade);
                if(*arroz >= quantidade){
                *arroz -= quantidade;
                *caixa += (quantidade * 30);
                }
                else{
                    printf("Estoque insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *arroz);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Estoque insuficiente!");
            }
            break;
        case 2:
            if(*feijao > 0){
                printf("Valor de compra: 15R$\nValor em caixa: %.1f\nQuantidade a ser vendida:", *caixa);
                scanf("%d", &quantidade);
                if(*feijao >= quantidade){
                *feijao -= quantidade;
                *caixa += (quantidade * 15);
                }
                else{
                    printf("Estoque insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *feijao);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Estoque insuficiente!");
            }
            break;
        case 3:
            if(*biscoito > 0){
                printf("Valor de compra: 10R$\nValor em caixa: %.1f\nQuantidade a ser vendida:", *caixa);
                scanf("%d", &quantidade);
                if(*biscoito >= quantidade){
                *biscoito -= quantidade;
                *caixa += (quantidade * 10);
                }
                else{
                    printf("Estoque insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *biscoito);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Estoque insuficiente!");
            }
            break;
        case 4:
            if(*molhoTomate > 0){
                printf("Valor de compra: 5R$\nValor em caixa: %.1f\nQuantidade a ser vendida:", *caixa);
                scanf("%d", &quantidade);
                if(*molhoTomate >= quantidade){
                *molhoTomate -= quantidade;
                *caixa += (quantidade * 5);
                }
                else{
                    printf("Estoque insuficiente!");
                }
                printf("Nova quantidade em estoque: %d\n", *molhoTomate);
                printf("Novo valor em caixa: %1.f", *caixa);
            }
            else{
                printf("Estoque insuficiente!");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

}

int main() {
    int opcao;
    float caixa;
    int arroz = 0, feijao = 0, biscoito = 0, molhoTomate = 0;

    caixa = 1000.0;

    printf("Sistema mercado:");

    while (1) {
        printf("\nMenu:\n");
        printf("1 - Comprar produtos\n");
        printf("2 - Vender produtos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ComprarProdutos(&caixa, &arroz, &feijao, &biscoito, &molhoTomate);
                aguardarTecla();
                limparTela();
                break;
            case 2:
                VenderProdutos(&caixa, &arroz, &feijao, &biscoito, &molhoTomate);
                aguardarTecla();
                limparTela();
                break;
            case 3:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
