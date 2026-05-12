#include <stdio.h>
int main() {
    int dia = 0;

    printf("Qual dia da semana? 0 dom, 7 sab");
    scanf("%i", &dia);

    switch(dia) {
        case 1:
            printf("domingo");
            break;
            case 2:
            printf("segunda");
            case 3:
            printf("terça");
            break;
            case 4:
            printf("Quarta");
            break;
            case 5:
            printf("Quinta");
            break;
            case 6:
            printf("Sexta");
            break;
            case 7:
            printf("Sabado");
            break;

    }
    return 0;
}