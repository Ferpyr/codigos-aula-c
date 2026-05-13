//Vc foi almoçar com os colegas de trabalho e chegando no restaurante observam q existe duas opções de almoço
//Self service por quilo e prato feito. os valores para as refeições são (sspq) R$ 49.90 e (PF) R$29.90
//Como hoje é seu aniversario vc vai fazer a boa para os colegas, caso a conta fique até 35.90 por pessoa.
//tbm existe uma parceria com a empresa de cartão aumentação sodexo, e se for usado tem um desconto de 12.5% no valor final
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float selfQuilo = 49.90;
    float pratoFeito = 29.90;

    float limitePessoa = 35.90;

    float descontoSodexo = 12.5;

    int qtdPessoas;
    int opcao;
    int sodexo;

    float valorTotal;
    float valorComDesconto;
    float valorPessoa;

    printf("Quantas pessoas? ");
    scanf("%i", &qtdPessoas);

    printf("\nQual é o tipo de almoço\n");
    printf("1 - Self Service por quilo R$ 49.90\n");
    printf("2 - Prato Feito R$ 29.90\n");
    scanf("%i", &opcao);

    if (opcao == 1) {
        valorTotal = qtdPessoas * selfQuilo;
    } else if (opcao == 2) {
        valorTotal = qtdPessoas * pratoFeito;
    } else {
        printf("Opção não existe\n");
        return 0;
    }

    printf("\nVai usar cartão Sodexo?\n");
    printf("1 - Sim\n");
    printf("0 - Não\n");
    scanf("%i", &sodexo);

    if (sodexo == 1) {
        valorComDesconto = valorTotal - (valorTotal * descontoSodexo / 100);
    } else {
        valorComDesconto = valorTotal;
    }

    valorPessoa = valorComDesconto / qtdPessoas;

    printf("\n---- RESULTADO ----\n");
    printf("Valor total: R$ %.2f\n", valorTotal);
    printf("Valor final com desconto: R$ %.2f\n", valorComDesconto);
    printf("Valor por pessoa: R$ %.2f\n", valorPessoa);

    if (valorPessoa <= limitePessoa) {
        printf("Hoje é seu aniversário, e vc vai pagar\n");
    } else {
        printf("A conta ultrapassou o limite de R$ %.2f por pessoa\n", limitePessoa);
    }

    return 0;
}