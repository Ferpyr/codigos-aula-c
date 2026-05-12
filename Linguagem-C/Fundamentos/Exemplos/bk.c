#include <stdio.h>

int main() {
    // Entrada
    float rodeio = 24.99;
    float refri = 7.99;
    float batataGrande = 14.99;
    float casquinha = 4.99;
    float desconto = 0.93;  // 7% de desconto

    // Processamento
    float totalProdutos = rodeio + refri + batataGrande + casquinha;
    float totalComDesconto = totalProdutos * desconto;
    float dinheiroSalvo = totalProdutos - totalComDesconto;

    // Saída
    printf("O total é: R$ %.2f\n", totalProdutos);
    printf("O total com desconto: R$ %.2f\n", totalComDesconto);
    printf("Voce economizou: R$ %.2f\n", dinheiroSalvo);

    return 0;
}