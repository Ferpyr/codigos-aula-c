#include <stdio.h>

int main() {
    int i;
    int res;
    int tabuada;
    int opcao = 1;

    do {
        printf("\nQual tabuada deseja? ");
        scanf("%i", &tabuada);

        i = 0;

        printf("\nTabuada do %i:\n", tabuada);

        while (i <= 10) {
            res = i * tabuada;
            printf("%i x %i = %i\n", tabuada, i, res);
            i++;
        }

        printf("\nDigite 0 para sair ou qualquer numero para continuar ");
        scanf("%i", &opcao);

    } while (opcao != 0);

    printf("Fim :D\n");

    return 0;
}