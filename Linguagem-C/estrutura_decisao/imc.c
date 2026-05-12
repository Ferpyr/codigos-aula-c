
#include <stdio.h>
int main() {
    float peso = 0;
    float altura = 0;

    printf("Qual o seu peso?");
    scanf("%f", &peso);
    printf("Qual sua altura?");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    
    if(imc >=18.5 && imc <24.9){
    printf("peso normal, %f", imc);
    }

    else if(imc >=25 && imc <29.9){
    printf("sobrepeso, %f", imc);
    }
    
    else if(imc >=30){
    printf("obesidade, %f", imc);
    }
    
    else {
    printf("Abaixo do peso, %f", imc);
    }
    return 0;
}