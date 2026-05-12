#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtdePessoas = 0;
    float totalFesta = 0;
    int totalSalgados = 0;
    int totalBebidas = 0;  

    char comes[5][30] = {
        "Coxinha", "Bolinha de queijo",
        "Esfirra", "Croquete",
        "Hamburguinho"
    };

    float valorComes[5] = {
        99.90, 82.99, 85.99, 78.99, 107.99
    };

    char bebes[5][30] = {
        "Coca cola", "Jaboti",
        "Guaraná", "Suco de laranja",
        "Água"
    };

    float valorBebes[5] = {
        8.99, 9.99, 12.99, 8.99, 9.99
    };

    printf("\nVamos calcular o valor da Confraternização");

    printf("\nQuantas pessoas vão participar? ");
    scanf("%i", &qtdePessoas);

    int opcao = 0;
    int qtde = 0;

    printf("\nEscolha os salgados:");
    for (int i = 0; i < 5; i++) {
        printf("\nVai querer %s? (1-sim, 0-não): ", comes[i]);
        scanf("%i", &opcao);

        if (opcao == 1) {
            printf("Quantos centos de %s? ", comes[i]);
            scanf("%i", &qtde);

            totalFesta += qtde * valorComes[i];
            totalSalgados += qtde * 100;
        }
    }

    printf("\nAgora escolha as bebidas:");
    for (int i = 0; i < 5; i++) {
        printf("\nVai querer %s? (1-sim, 0-não): ", bebes[i]);
        scanf("%i", &opcao);

        if (opcao == 1) {
            printf("Quantas unidades de %s? ", bebes[i]);
            scanf("%i", &qtde);

            totalFesta += qtde * valorBebes[i];
            totalBebidas += qtde;
        }
    }

    printf("\n\nTotal da Festa: R$ %.2f", totalFesta);

    if (qtdePessoas > 0) {
        printf("\nTotal por pessoa: R$ %.2f", totalFesta / qtdePessoas);
        printf("\nSalgados por pessoa: %.2f unidades", (float)totalSalgados / qtdePessoas);
        printf("\nBebidas por pessoa: %.2f unidades", (float)totalBebidas / qtdePessoas);
    }

    return 0;
}