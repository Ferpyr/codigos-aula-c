#include <stdio.h>
#include <locale.h>

int main() {

    char nome[1000] = "";
    char escola[1000] = "";
    char senai[1000] = "";
    char curso[1000] = "";
    char periodo[1000] = "";
    char periodosenai[1000] = "";
    
    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    printf("Qual é o seu nome? ");
    scanf(" %[^\n]", nome);
    
    printf("Qual é o seu Sesi? ");
    scanf(" %[^\n]", escola);
    
    printf("Qual é o seu Senai? ");
    scanf(" %[^\n]", senai);
    
    printf("Qual é o seu curso? ");
    scanf(" %[^\n]", curso);
    
    printf("Qual periodo voce frequenta o Sesi? ");
    scanf(" %[^\n]", periodo);
    
    printf("Qual periodo voce frequenta o Senai? ");
    scanf(" %[^\n]", periodosenai);

    printf("--- SUAS INFORMACOES ---\n");
    printf("Nome: %s\n", nome);
    printf("Sesi: %s\n", escola);
    printf("Senai: %s\n", senai);
    printf("Curso: %s\n", curso);
    printf("Periodo Sesi: %s\n", periodo);
    printf("Periodo Senai: %s\n", periodosenai);

    return 0;
}