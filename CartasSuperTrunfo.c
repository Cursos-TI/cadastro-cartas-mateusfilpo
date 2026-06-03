#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Variáveis de comparação
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    // Usa scanset para ler o nome da cidade com espaços até o usuário pressionar Enter
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    // Usa scanset para ler o nome da cidade com espaços até o usuário pressionar Enter
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // O Super Poder soma os atributos numéricos, usando o inverso da densidade
    superPoder1 = 
        (float) populacao1 + 
        area1 + 
        pib1 + 
        pontosTuristicos1 + 
        pibPerCapita1 + 
        (1 / densidadePopulacional1);

    // Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // O Super Poder soma os atributos numéricos, usando o inverso da densidade
    superPoder2 = 
        (float) populacao2 + 
        area2 + 
        pib2 + 
        pontosTuristicos2 + 
        pibPerCapita2 + 
        (1 / densidadePopulacional2);

    // Comparações
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;

    // Na densidade populacional, vence a menor
    resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;

    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Exibição das comparações
    printf("\nComparação de Cartas:\n");

    printf("População: %s venceu (%d)\n", resultadoPopulacao ? "Carta 1" : "Carta 2", resultadoPopulacao);
    printf("Área: %s venceu (%d)\n", resultadoArea ? "Carta 1" : "Carta 2", resultadoArea);
    printf("PIB: %s venceu (%d)\n", resultadoPib ? "Carta 1" : "Carta 2", resultadoPib);
    printf("Pontos Turísticos: %s venceu (%d)\n", resultadoPontosTuristicos ? "Carta 1" : "Carta 2", resultadoPontosTuristicos);
    printf("Densidade Populacional: %s venceu (%d)\n", resultadoDensidadePopulacional ? "Carta 1" : "Carta 2", resultadoDensidadePopulacional);
    printf("PIB per Capita: %s venceu (%d)\n", resultadoPibPerCapita ? "Carta 1" : "Carta 2", resultadoPibPerCapita);
    printf("Super Poder: %s venceu (%d)\n", resultadoSuperPoder ? "Carta 1" : "Carta 2", resultadoSuperPoder);

    return 0;
}