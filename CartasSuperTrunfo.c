#include <stdio.h>
#include <string.h>

int main () {

    // Variáveis que recebem os valores da primeira carta

    char estado;
    char codigo[20];
    char cidade[20];
    unsigned long int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontosturisticos = 0;
    float densidade, pibPerCapita;
    float superpoder = 0;

    // Variáveis que recebem os valores da segunda carta

    char estado2;
    char codigo2[20];
    char cidade2[20];
    unsigned long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosturisticos2 = 0;
    float densidade2, pibPerCapita2;
    float superpoder2 = 0;

    int populacaoresult, arearesult, pibresult, turisticosresult, 
    densidaderesult, pibperresult, poderresult, carta = 2;

    // Aqui as váriaveis recebem os valores da primeira carta

    printf("Digite as informações de duas cartas:\n");

    printf("Preencha as informações da primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", codigo);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 20, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite o número da população da cidade: \n ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos);

    // Calculo da densidade e Pib Per Capita e Super Poder

    densidade = populacao / area;

    pibPerCapita = (pib * 1000000000.0F) / populacao;

    superpoder = (float)populacao + area + pib +
    (float)pontosturisticos + pibPerCapita + (1.0/densidade);

    // Aqui as váriaveis recebem os valores da segunda carta

    printf("Preencha as informações da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número da população da cidade: \n ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area2);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Calculo da densidade e Pib Per Capita e Super Poder

    densidade2 = populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2;

    superpoder2 = (float)populacao2 + area2 + pib2 +
    (float)pontosturisticos2 + pibPerCapita2 + (1.0/densidade2);

    // Comparação entre os atributos das cartas

    populacaoresult = populacao > populacao2;
    arearesult = area > area2;
    pibresult = pib > pib2;
    turisticosresult = pontosturisticos > pontosturisticos2;
    densidaderesult = densidade < densidade2;
    pibperresult = pibPerCapita > pibPerCapita2;
    poderresult = superpoder > superpoder2;

    // Aqui são exibidos os valores da primeira carta

    printf("\n");

    printf("Carta 1: \n");

    printf("Estado: %c \n", estado);

    printf("Código: %c%s \n", estado, codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %lu\n", populacao);

    printf("Área: %.2f Km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Número de Pontos Turísticos: %d \n", pontosturisticos);

    printf("Densidade Populacional: %.2f hab/km² \n", densidade);

    printf("PIB per Capita: %.2f reais \n", pibPerCapita);

    printf("O Super Poder é: %f \n", superpoder);

    // Aqui são exibidos os valores da segunda carta

    printf("\n");

    printf("Carta 2: \n");

    printf("Estado: %c \n", estado2);

    printf("Código: %c%s \n", estado2, codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

    printf("Super Poder: %f \n", superpoder2);

    // Aqui é o resultado da carta vencedora

    printf("\n");

    printf("*** Comparação de Cartas ***\n");

    printf("População: Carta %d venceu (%d) \n", (carta - populacaoresult), populacaoresult);

    printf("Área: Carta %d venceu (%d) \n", (carta - arearesult), arearesult);

    printf("PIB: Carta %d venceu (%d) \n", (carta - pibresult), pibresult);

    printf("Pontos Turísticos: Carta %d venceu (%d) \n", (carta - turisticosresult), turisticosresult);

    printf("Densidade Populacional (O menor vence): Carta %d venceu (%d) \n", (carta - densidaderesult), densidaderesult);

    printf("PIB per Capita: Carta %d venceu (%d) \n", (carta - pibperresult), pibperresult);

    printf("Super Poder: Carta %d venceu (%d) \n", (carta - poderresult), poderresult);
}
