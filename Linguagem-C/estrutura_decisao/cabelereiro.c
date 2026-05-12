#include <stdio.h>

int main() {

    int opcao;
    int parcelas;

    float valorCabeloCorta = 0;
    float valorBarbaCorta = 0;
    float valorCabeloPinta = 0;
    float valorBarbaPinta = 0;
    float parcela;

    printf("Cortou o Cabelo? (1 = Sim 0 = Nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        valorCabeloCorta = 40;
    }

    printf("Cortou a Barba? (1 = Sim 0 = Nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        valorBarbaCorta = 30;
    }

    printf("Pintou o Cabelo? (1 = Sim 0 = Nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        valorCabeloPinta = 20;
    }

    printf("Pintou a Barba? (1 = Sim 0 = Nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        valorBarbaPinta = 20;
    }

    float total = valorCabeloCorta + valorBarbaCorta + valorCabeloPinta + valorBarbaPinta;

    printf("O valor foi R$ %.2f\n", total);

    printf("Quer parcelar ou a vista com 5%% desconto? (1 = parcelar, 0 = vista): ");
    scanf("%d", &opcao);

    if(opcao == 0){
        total = total * 0.95;
        printf("Valor a vista com desconto: R$ %.2f\n", total);
    }
    else if(opcao == 1){

        printf("Quantas parcelas? (maximo 5): ");
        scanf("%d", &parcelas);

        if(parcelas >= 1 && parcelas <= 5){
            parcela = total / parcelas;
            printf("%d parcelas de R$ %.2f\n", parcelas, parcela);
        }else{
            printf("Numero de parcelas nao permitido");
        }

    }

    return 0;
}