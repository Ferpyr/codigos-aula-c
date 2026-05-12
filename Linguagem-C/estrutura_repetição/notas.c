#include <stdio.h>

int main() {
    printf("Vamos calcular as notas do aluno\n");

    int qtdeNotas = 0;
    double totalNotas = 0;
    double nota = 0;
    double mediaFinal = 0;

    printf("Quantas notas deseja calcular? ");
    scanf("%i", &qtdeNotas);

    for (int i = 0; i < qtdeNotas; i++) {
        printf("Qual a nota do aluno: ");
        scanf("%lf", &nota);
        totalNotas = totalNotas + nota;
    }

    mediaFinal = totalNotas / qtdeNotas;

    printf("A media final e %.2f\n", mediaFinal);

    if (mediaFinal >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}