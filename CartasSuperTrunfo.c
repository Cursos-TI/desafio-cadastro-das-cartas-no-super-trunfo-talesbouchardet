#include <stdio.h>
#include <string.h>

// Definição do struct para armazenar os dados das cartas
struct Cartas {
    char estado[2];
    char cidade[60];
    char codigo[6];
    int populacao;
    int nPontosTuristicos;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    
    struct Cartas carta1, carta2;

    // Dados para a primeira carta
    printf("\nCadastre as informacoes para a primeira carta:\n-------------------------------------\n\n");
    strcpy(carta1.estado, "A");
    strcpy(carta1.cidade, "Sao Paulo");
    snprintf(carta1.codigo, sizeof(carta1.codigo), "%s%02d", carta1.estado, 1);

    printf("Digite a populacao da cidade (Carta 1): ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da cidade (Carta 1): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (Carta 1): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos (Carta 1): ");
    scanf("%d", &carta1.nPontosTuristicos);

    // Calculo da Densidade populacional e PIB per Capita da primeira carta
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Calculo do Super Poder da primeira carta
    carta1.superPoder = carta1.pib + carta1.area + carta1.populacao + carta1.nPontosTuristicos + carta1.pibPerCapita + (1 / carta1.densidadePopulacional);

    printf("\n\nCadastre as informacoes para a segunda carta:\n-------------------------------------\n\n");
    strcpy(carta2.estado, "A");
    strcpy(carta2.cidade, "Guarulhos");
    snprintf(carta2.codigo, sizeof(carta2.codigo), "%s%02d", carta2.estado, 2);

    printf("Digite a populacao da cidade (Carta 2): ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area da cidade (Carta 2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (Carta 2): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos (Carta 2): ");
    scanf("%d", &carta2.nPontosTuristicos);

    // Calculo da Densidade populacional e PIB per Capita da segunda carta
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Calculo do Super Poder da segunda carta
    carta2.superPoder = carta2.pib + carta2.area + carta2.populacao + carta2.nPontosTuristicos + carta2.pibPerCapita + (1 / carta2.densidadePopulacional);
    
    // Exibicao dos dados da primeira carta
    printf("\n\nCarta 1:\n--------------------------\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Numero de pontos turisticos: %d\n", carta1.nPontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    // Exibicao dos dados da segunda carta
    printf("\n\nCarta 2:\n--------------------------\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Numero de pontos turisticos: %d\n", carta2.nPontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

     // Comparacao entre os valores das cartas
     printf("\n\nComparacao entre as cartas:\n--------------------------\n");
     printf("Populacao: Carta %d venceu (%d)\n", carta1.populacao > carta2.populacao ? 1 : 2, carta1.populacao > carta2.populacao);
     printf("Area: Carta %d venceu (%d)\n", carta1.area > carta2.area ? 1 : 2, carta1.area > carta2.area);
     printf("PIB: Carta %d venceu (%d)\n", carta1.pib > carta2.pib ? 1 : 2, carta1.pib > carta2.pib);
     printf("Densidade Populacional: Carta %d venceu (%d)\n", carta1.densidadePopulacional < carta2.densidadePopulacional ? 1 : 2, carta1.densidadePopulacional < carta2.densidadePopulacional);
     printf("Numero de Pontos Turisticos: Carta %d venceu (%d)\n", carta1.nPontosTuristicos > carta2.nPontosTuristicos ? 1 : 2, carta1.nPontosTuristicos > carta2.nPontosTuristicos);
     printf("PIB per Capita: Carta %d venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita ? 1 : 2, carta1.pibPerCapita > carta2.pibPerCapita);
     printf("Super Poder: Carta %d venceu (%d)\n", carta1.superPoder > carta2.superPoder ? 1 : 2, carta1.superPoder > carta2.superPoder); 

    // Pausa no final
    printf("\n\nPressione ENTER para finalizar...");
    getchar();
    getchar();

    return 0;
}