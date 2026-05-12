#include <stdio.h>

float calcularValorKm(int qtdekmPercorridos) {
    if (qtdekmPercorridos <= 100) {
        return qtdekmPercorridos * 0.20;
    }
    if (qtdekmPercorridos >= 101 && qtdekmPercorridos <= 200) {
        return qtdekmPercorridos * 0.45;
    }
    if (qtdekmPercorridos >= 201 && qtdekmPercorridos <= 300) {
        return qtdekmPercorridos * 0.80;
    }
    if (qtdekmPercorridos >= 301) {
        return qtdekmPercorridos * 1.05;
    }
}

float calcularValorEntrega(int entregas) {
    if (entregas <= 10) return 7.99;
    if (entregas <= 20) return 16.99;
    if (entregas <= 30) return 28.99;
    return 41.99;
}

int main() {
    int trabalhouSegunda=0, entregasSegunda=0, kmSegunda=0;
    int trabalhouTerca=0, entregasTerca=0, kmTerca=0;
    int trabalhouQuarta=0, entregasQuarta=0, kmQuarta=0;
    int trabalhouQuinta=0, entregasQuinta=0, kmQuinta=0;
    int trabalhouSexta=0, entregasSexta=0, kmSexta=0;
    int trabalhouSabado=0, entregasSabado=0, kmSabado=0;
    int trabalhouDomingo=0, entregasDomingo=0, kmDomingo=0;

    printf("Sou o algoritmo que ajuda o Matias\n\n");

    printf("Trabalhou Segunda-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouSegunda);
    if(trabalhouSegunda==1) {
        printf("Quantas entregas fez na segunda? ");
        scanf("%i", &entregasSegunda);
        printf("Quantos km rodou na segunda? ");
        scanf("%i", &kmSegunda);
    }

    printf("\nTrabalhou Terca-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouTerca);
    if(trabalhouTerca==1) {
        printf("Quantas entregas fez na terca? ");
        scanf("%i", &entregasTerca);
        printf("Quantos km rodou na terca? ");
        scanf("%i", &kmTerca);
    }

    printf("\nTrabalhou Quarta-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouQuarta);
    if(trabalhouQuarta==1) {
        printf("Quantas entregas fez na quarta? ");
        scanf("%i", &entregasQuarta);
        printf("Quantos km rodou na quarta? ");
        scanf("%i", &kmQuarta);
    }

    printf("\nTrabalhou Quinta-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouQuinta);
    if(trabalhouQuinta==1) {
        printf("Quantas entregas fez na quinta? ");
        scanf("%i", &entregasQuinta);
        printf("Quantos km rodou na quinta? ");
        scanf("%i", &kmQuinta);
    }

    printf("\nTrabalhou Sexta-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouSexta);
    if(trabalhouSexta==1) {
        printf("Quantas entregas fez na sexta? ");
        scanf("%i", &entregasSexta);
        printf("Quantos km rodou na sexta? ");
        scanf("%i", &kmSexta);
    }

    printf("\nTrabalhou Sabado-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouSabado);
    if(trabalhouSabado==1) {
        printf("Quantas entregas fez no sabado? ");
        scanf("%i", &entregasSabado);
        printf("Quantos km rodou no sabado? ");
        scanf("%i", &kmSabado);
    }

    printf("\nTrabalhou Domingo-feira? 1(sim), 2(nao): ");
    scanf("%i", &trabalhouDomingo);
    if(trabalhouDomingo==1) {
        printf("Quantas entregas fez no domingo? ");
        scanf("%i", &entregasDomingo);
        printf("Quantos km rodou no domingo? ");
        scanf("%i", &kmDomingo);
    }

    float valorSegunda=0, valorTerca=0, valorQuarta=0;
    float valorQuinta=0, valorSexta=0, valorSabado=0, valorDomingo=0;

    int totalDias=0, totalKm=0;
    float totalEntregas=0, totalValor=0;

    if(trabalhouSegunda==1) {
        valorSegunda = calcularValorKm(kmSegunda) + calcularValorEntrega(entregasSegunda);
        totalDias++;
        totalEntregas += entregasSegunda;
        totalKm += kmSegunda;
        totalValor += valorSegunda;
        printf("\nSegunda-feira: sim\nQuantidade entregas: %d\nQuilometros: %d\nValor: R$ %.2f\n", entregasSegunda, kmSegunda, valorSegunda);
    }

    if(trabalhouTerca==1) {
        valorTerca = calcularValorKm(kmTerca) + calcularValorEntrega(entregasTerca);
        totalDias++;
        totalEntregas += entregasTerca;
        totalKm += kmTerca;
        totalValor += valorTerca;
    }

    if(trabalhouQuarta==1) {
        valorQuarta = calcularValorKm(kmQuarta) + calcularValorEntrega(entregasQuarta);
        totalDias++;
        totalEntregas += entregasQuarta;
        totalKm += kmQuarta;
        totalValor += valorQuarta;
    }

    if(trabalhouQuinta==1) {
        valorQuinta = calcularValorKm(kmQuinta) + calcularValorEntrega(entregasQuinta);
        totalDias++;
        totalEntregas += entregasQuinta;
        totalKm += kmQuinta;
        totalValor += valorQuinta;
    }

    if(trabalhouSexta==1) {
        valorSexta = calcularValorKm(kmSexta) + calcularValorEntrega(entregasSexta);
        totalDias++;
        totalEntregas += entregasSexta;
        totalKm += kmSexta;
        totalValor += valorSexta;
    }

    if(trabalhouSabado==1) {
        valorSabado = calcularValorKm(kmSabado) + calcularValorEntrega(entregasSabado);
        totalDias++;
        totalEntregas += entregasSabado;
        totalKm += kmSabado;
        totalValor += valorSabado;
    }

    if(trabalhouDomingo==1) {
        valorDomingo = calcularValorKm(kmDomingo) + calcularValorEntrega(entregasDomingo);
        totalDias++;
        totalEntregas += entregasDomingo;
        totalKm += kmDomingo;
        totalValor += valorDomingo;
    }

    float mediaEntregas=0, mediaValor=0;
    if(totalDias>0){
        mediaEntregas = totalEntregas / totalDias;
        mediaValor = totalValor / totalDias;
    }

    float bonus=0;
    if(totalDias==7 && totalKm>=200 && mediaEntregas>=26) bonus=178.99;

    printf("\n\n RELATORIO SEMANAL ");
    printf("\nTotal dias trabalhados: %d", totalDias);
    printf("\nTotal entregas: %.0f", totalEntregas);
    printf("\nTotal km: %d", totalKm);
    printf("\nMedia entregas/dia: %.2f", mediaEntregas);
    printf("\nMedia valor/dia: R$ %.2f", mediaValor);
    printf("\nTotal a receber: R$ %.2f", totalValor);
    printf("\nBonus: R$ %.2f\n", bonus);

    return 0;
}