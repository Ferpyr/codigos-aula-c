#include <stdio.h>

int main() {
    int qtd_notas;
    float soma = 0;

    printf("Quantas notas? ");
    scanf("%i", &qtd_notas);

    float notas[qtd_notas];

    for (int i = 0; i < qtd_notas; i++) {
        printf("Digite a nota %i: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < qtd_notas; i++) {
        soma += notas[i];
    }

    float media = soma / qtd_notas;

    printf("\nMedia: %.2f\n", media);

    return 0;
}