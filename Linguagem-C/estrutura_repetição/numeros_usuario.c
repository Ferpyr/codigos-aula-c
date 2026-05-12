#include <stdio.h>

int main() {
    int i = 0;
    int m = 0;
    
    printf("Minimo (Maior que 0): ");
    scanf("%i", &i);
    
    if (i < 0) {
        printf("O minimo nao pode ser menor que 0\n");
        return 0;
    }

    printf("Maximo: ");
    scanf("%i", &m);

    if (i > m) {
        printf("O minimo ta maior que o maximo\n");
        return 0;
    }

    for (; i <= m; i++) {
        printf("\nNumero %i", i);
    }

    return 0;
}