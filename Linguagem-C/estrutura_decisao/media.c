#include <stdio.h>
int main() {

    float nota = 0;
    int faltas = 0;
    int ead = 0;
     
    printf("Qual a nota final do aluno?");
    scanf("%f", &nota);

    printf("Quantas faltas o aluno teve?");
    scanf("%i", &faltas);

    printf("Qual foi a porcentagem do EAD que foi feita?");
    scanf("%i", &ead);

    if (nota >= 50 && faltas <= 25 && ead ==100) {
        printf("Esta aprovado");
    } else{
        printf("Esta reprovado");
    }

    return 0;
}