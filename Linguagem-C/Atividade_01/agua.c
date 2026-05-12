#include <stdio.h>
#include <stdbool.h>
int main() {

// Entrada de informações, variáveis e constantes

    const float valorLitro = 0.1;
    const float valorMulta = 150;
    const float valorDesconto = 50;
    const int periodo30 = 30;
    const int faixaEconomica = 250;
    const int faixaExcessiva = 400;

    int pessoas = 0;
    float valorTotalConta = 0;
    int litrosConsumo = 0;
    int idade = 0;

    //processamento das informações
    printf("Ola, vamos calcular sua conta de agua\n");
    printf("Para iniciar, quantas pessoas moram na residencia?");
    scanf("%i", &pessoas);

    for(int i=0; i<pessoas; i++) {
        printf("Legal, agora qual idade da %i pessoa", i);
        scanf("%i", &idade);

        //Agora alunos tentem montar a estrutura if else if aqui embaixo
        //tratando a questão das idades contabilizando o tempo de banho
        if(idade > 0 && idade <= 10) {
            litrosConsumo += 18;
        } else if(idade >10 && idade <= 18) {
            litrosConsumo += 30;
        } else if(idade >18 && idade <= 25) {
            litrosConsumo += 42;
        } else if(idade >25) {
            litrosConsumo += 24;
        }
    }

    //Valor total da conta
    valorTotalConta = valorLitro * litrosConsumo * periodo30;
    
    //saida

    if(valorTotalConta >= faixaExcessiva) {

        //Excessiva
        printf("Faixa de consumo: Excessiva\n");
        printf("Total de pessoas na residencia: %i \n", pessoas);
        printf("Quantidade de consumo em litros: %i \n", litrosConsumo);
        printf("Valor da conta mensal: R$ %.2f \n", valorTotalConta);
        printf("Multa aplicada: R$ %2f \n", valorMulta);

    } else if (valorTotalConta <= faixaEconomica) {

        //Economica
        printf("Faixa de consumo: Economica\n");
        printf("Total de pessoas na residencia: %i \n", pessoas);
        printf("Quantidade de consumo em litros: %i \n", litrosConsumo);
        printf("Valor da conta mensal: R$ %.2f \n", valorTotalConta);
        printf("Desconto na proxima conta: R$ %2f \n", valorDesconto);

    } else {

        //normal
        printf("Faixa de consumo: Normal\n");
        printf("Total de pessoas na residencia: %i \n", pessoas);
        printf("Quantidade de consumo em litros: %i \n", litrosConsumo);
        printf("Valor da conta mensal: R$ %.2f \n", valorTotalConta);

    }

    return 0;
}