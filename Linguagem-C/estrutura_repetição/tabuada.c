#include <stdio.h>

int main() {
    int Escolha;

    printf("Escolha a tabuada: ");
    scanf("%d", &Escolha);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", Escolha, i, Escolha * i);
    }

    return 0;
}