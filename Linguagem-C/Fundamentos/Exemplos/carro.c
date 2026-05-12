/*Você precisa comprar um carro e
pretende realizar o pagamento de forma parcelada.
Crie um algoritmo q calcule o valor das parcelas
descontando o valor de 30%*/
#include <stdio.h>
int main() {
    //Entrada
    float valorCarro = 0;
    int parcelas = 0;
    const float entrada = 0.30;

    printf("Qual o valor do carro?");
    scanf("%f", &valorCarro);
    printf("Quantas parcelas deseja pagar?");
    scanf("%d", &parcelas);

    //Processamento
    float ent = valorCarro * entrada;             
    float par = (valorCarro - ent) / parcelas;

    //Saida
    printf("O valor de entrada é %.2f\n", ent);
    printf("O valor das outras parcelas é %.2f\n", par);
    printf("O valor total é %.2f\n", valorCarro);

    return 0;
}