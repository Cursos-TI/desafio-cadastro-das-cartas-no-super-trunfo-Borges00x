#include <stdio.h>

int main() {
    // Variáveis que recebem os valores da primeira carta

    char estado;
    char codigo[20];
    char cidade[20];
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontosturisticos = 0;

    // Variáveis que recebem os valores da segunda carta

    char estado2;
    char codigo2[20];
    char cidade2[20];
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosturisticos2 = 0;
    
    // Aqui as váriaveis recebem os valores da primeira carta

    printf("Digite as informações de duas cartas:\n");

    printf("Preencha as informações da primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite o número da população da cidade: \n ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos);

    // Aqui as váriaveis recebem os valores da primeira carta

    printf("Preencha as informações da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta de 01 a 04\n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite o número da população da cidade: \n ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area2);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos2);

    
    // Aqui são exibidos os valores da primeira carta
    printf("\n");

    printf("Carta 1: \n");

    printf("Estado: %c \n", estado);

    printf("Código: %c%s \n", estado, codigo);

    printf("Nome da Cidade: %s \n", cidade);

    printf("População: %d \n", populacao);

    printf("Área: %.2f Km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d \n", pontosturisticos);

    // Aqui são exibidos os valores da segunda carta
    printf("\n");

    printf("Carta 2: \n");

    printf("Estado: %c \n", estado2);

    printf("Código: %c%s \n", estado2, codigo2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("População: %d \n", populacao2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;
}
