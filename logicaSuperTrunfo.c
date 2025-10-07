#include <stdio.h>

/*
 * Calcula a densidade populacional: população / área.
 * Retorna 0 se a área for zero para evitar divisão por zero.
 */
float calcularDensidade(int populacao, float area) {
    if (area == 0)
        return 0;
    return populacao / area;
}

/*
 * Calcula o PIB per capita: PIB / população.
 * Retorna 0 se a população for zero para evitar divisão por zero.
 * PIB recebido em bilhões; multiplica por 1.000 para compatibilizar com população.
 */
float calcularPIBPerCapita(float pib, int populacao) {
    if (populacao == 0)
        return 0;
    return (pib * 1000) / populacao;
}

int main() {
    // Dados da primeira carta - Manaus, Amazonas
    char nome_do_estado_1[] = "Amazonas";
    char codigo_da_carta_1[] = "A01";
    char nome_da_cidade_1[] = "Manaus";
    int populacao_1 = 2279686; 
    float area_1 = 11401.00;
    float pib_1 = 457.82;
    int pontos_turisticos_1 = 58;

    // Dados da segunda carta - Recife, Pernambuco
    char nome_do_estado_2[] = "Pernambuco";
    char codigo_da_carta_2[] = "B02";
    char nome_da_cidade_2[] = "Recife";
    int populacao_2 = 1587707;
    float area_2 = 218.84;
    float pib_2 = 330.94;
    int pontos_turisticos_2 = 30;

    // Cálculo da densidade populacional e do PIB per capita para ambas as cartas
    float densidade_1 = calcularDensidade(populacao_1, area_1);
    float pibPerCapita_1 = calcularPIBPerCapita(pib_1, populacao_1);

    float densidade_2 = calcularDensidade(populacao_2, area_2);
    float pibPerCapita_2 = calcularPIBPerCapita(pib_2, populacao_2);

    // Exibição dos dados da primeira carta
    printf("\n--- Primeira Carta ---\n");
    printf("Estado           : %s\n", nome_do_estado_1);
    printf("Código da Carta  : %s\n", codigo_da_carta_1);
    printf("Nome da Cidade   : %s\n", nome_da_cidade_1);
    printf("População        : %d habitantes\n", populacao_1);
    printf("Área             : %.2f km²\n", area_1);
    printf("PIB              : %.2f bilhões\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Popul. : %.2f hab/km²\n", densidade_1);
    printf("PIB per capita   : %.2f mil\n", pibPerCapita_1);

    // Exibição dos dados da segunda carta
    printf("\n--- Segunda Carta ---\n");
    printf("Estado           : %s\n", nome_do_estado_2);
    printf("Código da Carta  : %s\n", codigo_da_carta_2);
    printf("Nome da Cidade   : %s\n", nome_da_cidade_2);
    printf("População        : %d habitantes\n", populacao_2);
    printf("Área             : %.2f km²\n", area_2);
    printf("PIB              : %.2f bilhões\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Popul. : %.2f hab/km²\n", densidade_2);
    printf("PIB per capita   : %.2f mil\n", pibPerCapita_2);

    // Comparação e resultado pelo atributo População
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nome_da_cidade_1, nome_do_estado_1, populacao_1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nome_da_cidade_2, nome_do_estado_2, populacao_2);

    if (populacao_1 > populacao_2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (populacao_2 > populacao_1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade_2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}