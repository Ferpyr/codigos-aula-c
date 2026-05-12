#include <stdio.h>
int main() {
    float valorLancheRodeio = 0;
    float valorBatataGrande = 0;
    float valorRefriCoca = 0;
    float valorSobremessa = 0;

    printf("Qual e o valor do lanche?");
    scanf("%f", &valorLancheRodeio);

    printf("Qual e o valor da batata?");
    scanf("%f", &valorBatataGrande);

    printf("Qual e o valor do refri?");
    scanf("%f", &valorRefriCoca);

    printf("Qual e o valor da sobremessa?");
    scanf("%f", &valorSobremessa);

    float total = (valorBatataGrande + valorLancheRodeio + valorRefriCoca + valorSobremessa);

    if(total < 40) {
    printf("Barato R$ %.2f", total);
    }

    else if(total >=40 && total < 55) {
        printf("Razoavel R$ %.2f", total);
    }

    else {
        printf("Caro R$ %.2f", total);
    }

    return 0;
}