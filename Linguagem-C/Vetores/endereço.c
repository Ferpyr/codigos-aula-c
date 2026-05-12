#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20] = "Fernando";
    char logradouro[60] = "Avenida Professor Alberto Vollet Sachs";
    char bairro[30] = "Nova América";
    char cidade[30] = "Piracicaba";
    char estado[3] = "SP";

    printf("--- Minhas informações residenciais ---\n");
    printf("Nome: %s\n", nome);
    printf("Logradouro: %s\n", logradouro);
    printf("Bairro: %s\n", bairro);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);

    return 0;
}