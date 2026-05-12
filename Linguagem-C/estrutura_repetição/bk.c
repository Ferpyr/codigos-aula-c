#include <stdio.h>

int main() {
    printf("Vamos calcular o preço dos produtos\n");

    int qtdeProdutos = 0;
    float totalProdutos = 0;
    float Valor = 0;
    float amigos = 0;

    printf("Quantos produtos deseja comprar? ");
    scanf("%i", &qtdeProdutos);

    for (int i = 0; i < qtdeProdutos; i++) {
        printf("Qual o valor do produto: ");
        scanf("%f", &Valor);
        totalProdutos += Valor;
    }

    if (totalProdutos <= 48.90) {
        printf("Você paga: R$ %.2f\n", totalProdutos);
    } else {
        printf("Quantos amigos?");
        scanf("%f", &amigos);

        float ValorPorAmigo = totalProdutos / amigos;
        printf("Cada amigo deve pagar: R$ %.2f\n", ValorPorAmigo);
    }

    return 0;
}