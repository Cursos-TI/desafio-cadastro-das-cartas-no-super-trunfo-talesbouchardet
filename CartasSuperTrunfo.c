#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis para armazenar os dados das cartas
    char estado1[3], cidade1[60], codigo1[7];
    int populacao1, nPontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

    char estado2[3], cidade2[60], codigo2[7];
    int populacao2, nPontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    // Dados para a primeira carta
    printf("\nCadastre as informacoes para a primeira carta:\n-------------------------------------\n\n");
    strcpy(estado1, "A");
    strcpy(cidade1, "Sao Paulo");
    snprintf(codigo1, sizeof(codigo1), "%s%02d", estado1, 1);

    printf("Digite a populacao da cidade (Carta 1): ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em Km² (Carta 1): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (Carta 1): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos (Carta 1): ");
    scanf("%d", &nPontosTuristicos1);

    // Calculo da Densidade populacional e PIB per Capita da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calculo do Super Poder da primeira carta
    superPoder1 = pib1 + area1 + populacao1 + nPontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    printf("\n\nCadastre as informacoes para a segunda carta:\n-------------------------------------\n\n");
    strcpy(estado2, "A");
    strcpy(cidade2, "Guarulhos");
    snprintf(codigo2, sizeof(codigo2), "%s%02d", estado2, 2);

    printf("Digite a populacao da cidade (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em Km² (Carta 2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (Carta 2): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos (Carta 2): ");
    scanf("%d", &nPontosTuristicos2);

    // Calculo da Densidade populacional e PIB per Capita da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calculo do Super Poder da segunda carta
    superPoder2 = pib2 + area2 + populacao2 + nPontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);
    
    // Exibicao dos dados da primeira carta
    printf("\n\nCarta 1:\n--------------------------\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    // Exibicao dos dados da segunda carta
    printf("\n\nCarta 2:\n--------------------------\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    // Comparacao entre os valores das cartas
    printf("\n\nComparacao entre as cartas:\n--------------------------\n");
    printf("Populacao..................: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Area.......................: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB........................: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Densidade Populacional.....: Carta %d venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    printf("Numero de Pontos Turisticos: Carta %d venceu (%d)\n", nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 2, nPontosTuristicos1 > nPontosTuristicos2);
    printf("PIB per Capita.............: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder................: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2); 

    // Pausa no final
    printf("\n\nPressione ENTER para finalizar...");
    getchar();
    getchar();

    return 0;
}