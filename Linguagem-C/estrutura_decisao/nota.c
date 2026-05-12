#include <stdio.h>
int main() {

    float nota = 0;
    printf("Qual a sua nota?");
    scanf("%f", &nota);


    if(nota<=6.9){

        printf("Voce está reprovado");
    } else{

    printf("Voce está aprovado");
    }

    return 0;
}