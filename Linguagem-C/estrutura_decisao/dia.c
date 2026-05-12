#include <stdio.h>
int main() {

    int dia=0;

    printf("Qual dia da semana? (dom=0, sab=6)");
    scanf("%i", &dia);

    if (dia == 0) {
        printf("Domingo");
    } else if (dia == 1) {
        printf("Segunda");
    } else if (dia == 2) {
        printf("Terca");
    } else if (dia == 3) {
        printf("Quarta");
    } else if (dia == 4) {
        printf("Quinta");
    } else if (dia == 5) {
        printf("Sexta");
    } else if (dia == 6) {
        printf("Sabado");
    } else {
        printf("Dia nao existe");
    }

    return 0;
}