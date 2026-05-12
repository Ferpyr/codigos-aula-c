/*Calcule o imc
de uma pessoa
com valores
fixos nas variaveis
e mostre o valor
ao final */
#include <stdio.h>
int main() {
    float peso = 67;
    float altura = 1.75;

    float imc = peso / (altura * altura);

    printf("O IMC é %f", imc);
    return 0;
}