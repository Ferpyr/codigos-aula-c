#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    char carro[30];

    float totalPorKm = 0;
    float totalPorDia = 0;
    float totalGeral = 0;
    float valorFinal = 0;
    float descontoAplicado = 0;

    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    int temCupom = 0;
    char cupomCliente[30];
    float valorDesconto = 0;

    printf("Olá seja bem vindo, qual o seu nome? ");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa loja, %s", nome);

    printf("\n%s, Qual carro deseja alugar? ", nome);
    scanf("%s", carro);

    printf("\nQuantos KMs você vai rodar com o %s? ", carro);
    scanf("%i", &km);

    printf("Quantos dias vai precisar do carro? ");
    scanf("%i", &dias);

    printf("%s, Tem cupom de desconto? 1-Sim | 0-Não: ", nome);
    scanf("%i", &temCupom);

    if (temCupom == 1)
    {
        printf("Digite o código: ");
        scanf("%s", cupomCliente);

        if (strcmp(cupomCliente, "FST_10") == 0)
        {
            valorDesconto = 10;
        }
        else if (strcmp(cupomCliente, "FST_20") == 0)
        {
            valorDesconto = 20;
        }
        else if (strcmp(cupomCliente, "FST_30") == 0)
        {
            valorDesconto = 30;
        }
        else
        {
            printf("\nCupom não encontrado");
        }
    }

    totalPorKm = km * VALOR_POR_KM;
    totalPorDia = dias * VALOR_POR_DIA;

    totalGeral = totalPorKm + totalPorDia;

    descontoAplicado = totalGeral * (valorDesconto / 100);

    valorFinal = totalGeral - descontoAplicado;

    printf("\n\n%s, segue um relatório detalhado:", nome);

    printf("\nTotal por KM: R$ %.2f", totalPorKm);
    printf("\nTotal por dia: R$ %.2f", totalPorDia);

    printf("\nTotal geral: R$ %.2f", totalGeral);

    if (valorDesconto > 0)
    {
        printf("\nDesconto aplicado: %.0f%%", valorDesconto);
        printf("\nVocê economizou: R$ %.2f", descontoAplicado);
    }

    printf("\nValor final com desconto: R$ %.2f", valorFinal);

    if (totalPorDia < totalPorKm)
    {
        printf("\nSugerimos usar o plano por dia");
    }
    else
    {
        printf("\nSugerimos usar o plano por KM");
    }

    printf("\nTenha uma ótima tarde.");
    printf("\nDesenvolvido por Fernando");

    return 0;
}