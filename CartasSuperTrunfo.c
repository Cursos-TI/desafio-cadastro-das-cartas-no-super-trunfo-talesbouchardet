#include <stdio.h>
#include <string.h>

// Definição da estrutura de dados para armazenar os dados das cartas
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
};

int main() {
    // Declaração das duas cartas a serem cadastradas e exibidas
    struct Cartas carta1, carta2;
    int codigo1, codigo2;

    // Dados para a primeira carta
    printf("Digite uma letra entre A e H para definir o estado (Carta 1): ");
    scanf(" %s", carta1.estado);

    printf("Digite o nome da cidade (Carta 1): ");
    scanf(" %[^\n]s", carta1.cidade); 

    printf("Digite um codigo de dois digitos (Carta 1): ");
    scanf("%d", &codigo1);
    snprintf(carta1.codigo, sizeof(carta1.codigo), "%s%d", carta1.estado, codigo1);

    printf("Digite a populacao da cidade (Carta 1): ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da cidade (Carta 1): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (Carta 1): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos (Carta 1): ");
    scanf("%d", &carta1.nPontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Dados para a segunda carta
    printf("\nDigite uma letra entre A e H para definir o estado (Carta 2): ");
    scanf(" %s", carta2.estado);

    printf("Digite o nome da cidade (Carta 2): ");
    scanf(" %[^\n]s", carta2.cidade);

    printf("Digite um codigo de dois digitos (Carta 2): ");
    scanf("%d", &codigo2);
    snprintf(carta2.codigo, sizeof(carta2.codigo), "%s%d", carta2.estado, codigo2);

    printf("Digite a populacao da cidade (Carta 2): ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area da cidade (Carta 2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (Carta 2): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos (Carta 2): ");
    scanf("%d", &carta2.nPontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf("\n\nCarta 1:\n------------------\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Densidade populacional: %.2f\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);
    printf("Numero de pontos turisticos: %d\n", carta1.nPontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\n\nCarta 2:\n------------------\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Estado: %1s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Densidade populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);
    printf("Numero de pontos turisticos: %d\n", carta2.nPontosTuristicos);

    return 0;
}