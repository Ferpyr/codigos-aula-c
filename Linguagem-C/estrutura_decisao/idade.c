#include <stdio.h>

int main() {

int idade = 0;
printf("Qual a sua idade?");
scanf("%i", &idade);

if(idade>=18) {
printf("Voce e maior de idade");
} else if(idade<=-1) {
        printf("Voce nao existe");
    } else{
    printf("Voce e menor de idade");
}

    return 0;
}   