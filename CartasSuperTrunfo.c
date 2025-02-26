#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[100], nome_cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2;

    //Primeira Carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: AM, SP, RJ...): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", nome_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);



    //Segunda Carta
    printf("Cadastro da Carta 2:\n);
    printf("Estado (ex: AM, SP, RJ...): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", &nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Número de porntos turísticos: ");
    scanf("%d", &pontos_turisticos2);



    //Dados das Cartas Cadastradas
    printf("\n=== Dados na Carta 1 ===\n");
    printf("Estado: %c\n" estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", codigo');
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);


    printf("\n=== Dados na Carta 2 ===\n");
    

    
                                      

    


