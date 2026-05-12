#include <stdio.h>

int main() {
    char opcao[5] = {'m', 'c', 'f', 'd'};
    char escolha;
    int qtd;
    int continuar;
    float total = 0;

    printf("--- PIZZARIA :D ---\n");

    do {
        printf("\n(m) mussarela - 25\n");
        printf("(c) calabresa - 30\n");
        printf("(f) frango - 35\n");
        printf("(d) doce - 40\n");

        printf("Escolha a pizza: ");
        scanf(" %c", &escolha);

        printf("Quantidade: ");
        scanf("%i", &qtd);

        if (escolha == opcao[0]) total += 25 * qtd;
        else if (escolha == opcao[1]) total += 30 * qtd;
        else if (escolha == opcao[2]) total += 35 * qtd;
        else if (escolha == opcao[3]) total += 40 * qtd;
        else printf("Sabor nao encontrado :C\n");

        printf("Continuar? (1=sim) (0=nao): ");
        scanf("%i", &continuar);

    } while (continuar == 1);

    printf("\nTotal: R$ %.2f\n", total);

    return 0;
}