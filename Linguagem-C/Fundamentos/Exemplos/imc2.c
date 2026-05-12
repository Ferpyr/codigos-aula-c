#include <stdio.h>
int main() {
    int peso = 0;
    int altura = 0;
     printf("Qual o seu peso?");
    scanf("%i", peso);

    printf("Qual a sua altura?");
    scanf("%i", altura);

    int altura_ao_quadrado = altura * altura;

    int imc = peso / altura_ao_quadrado;

    printf("O IMC é %i", imc);
    return 0;
}