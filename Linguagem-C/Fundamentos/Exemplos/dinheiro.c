/*Você está trabalhando e gostaria
  e gostaria de guardar 25% do seu
  salario todo mês. O banco está com
  um investimento que rende 6.8% ao mês de juros e você
  vai usar esse formato de investimento.
  Crie um algoritmo para calcular seu investimento*/
  #include <stdio.h>

int main() {
    // entrada
    float salario = 0;
    float investimento = 0.25;
    const float juros = 0.068;
    int tempo = 0;

    printf("Qual o seu salário: ");
    scanf("%f", &salario);

    printf("Quantos meses: ");
    scanf("%i", &tempo);

    // processamento
    float Totaljuros = juros * tempo;
    float salario25 = salario * investimento;
    float totalDinheiro = tempo * salario25;
    float totalJurosValor = totalDinheiro *Totaljuros;
    float totalComJuros = totalJurosValor + totalDinheiro;

    // saída
    printf("Juros totais R$: %.2f\n", Totaljuros);
    printf("Valor guardado R$: %.2f\n", totalDinheiro);
    printf("Meses: %i \n", tempo);
    printf("Valor do juros do banco R$: %.2f\n", totalJurosValor);
    printf("Valor guardado com juros: %i \n", totalComJuros);

    return 0;
}
