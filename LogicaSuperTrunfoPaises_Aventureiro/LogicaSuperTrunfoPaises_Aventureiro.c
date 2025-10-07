#include <stdio.h>

float calcularDensidade(int populacao, float area) {
    if (area == 0)
        return 0;
    return (float)populacao / area;
}

int main() {
    // Dados atualizados de 2025
    char nome_pais_1[] = "Brasil";
    int populacao_1 = 213400000;
    float area_1 = 8515767.0;
    float pib_1 = 2360.0; // bilhões de dólares
    int pontos_turisticos_1 = 60;

    char nome_pais_2[] = "Argentina";
    int populacao_2 = 47680000;
    float area_2 = 2780400.0;
    float pib_2 = 679.0; // bilhões de dólares
    int pontos_turisticos_2 = 34;

    float densidade_1 = calcularDensidade(populacao_1, area_1);
    float densidade_2 = calcularDensidade(populacao_2, area_2);

    int opcao;

    do {
        printf("\n=== SUPER TRUNFO DE PAISES ===\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("0 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Programa encerrado!\n");
            break;
        }

        printf("\nComparando: %s x %s\n", nome_pais_1, nome_pais_2);

        switch (opcao) {
            case 1:
                printf("Atributo escolhido: Populacao\n");
                printf("%s: %d habitantes\n", nome_pais_1, populacao_1);
                printf("%s: %d habitantes\n", nome_pais_2, populacao_2);
                if (populacao_1 > populacao_2)
                    printf("Resultado: %s venceu!\n", nome_pais_1);
                else if (populacao_2 > populacao_1)
                    printf("Resultado: %s venceu!\n", nome_pais_2);
                else
                    printf("Empate!\n");
                break;
            case 2:
                printf("Atributo escolhido: Area\n");
                printf("%s: %.0f km2\n", nome_pais_1, area_1);
                printf("%s: %.0f km2\n", nome_pais_2, area_2);
                if (area_1 > area_2)
                    printf("Resultado: %s venceu!\n", nome_pais_1);
                else if (area_2 > area_1)
                    printf("Resultado: %s venceu!\n", nome_pais_2);
                else
                    printf("Empate!\n");
                break;
            case 3:
                printf("Atributo escolhido: PIB (bilhoes de dolares)\n");
                printf("%s: %.0f\n", nome_pais_1, pib_1);
                printf("%s: %.0f\n", nome_pais_2, pib_2);
                if (pib_1 > pib_2)
                    printf("Resultado: %s venceu!\n", nome_pais_1);
                else if (pib_2 > pib_1)
                    printf("Resultado: %s venceu!\n", nome_pais_2);
                else
                    printf("Empate!\n");
                break;
            case 4:
                printf("Atributo escolhido: Pontos Turisticos\n");
                printf("%s: %d\n", nome_pais_1, pontos_turisticos_1);
                printf("%s: %d\n", nome_pais_2, pontos_turisticos_2);
                if (pontos_turisticos_1 > pontos_turisticos_2)
                    printf("Resultado: %s venceu!\n", nome_pais_1);
                else if (pontos_turisticos_2 > pontos_turisticos_1)
                    printf("Resultado: %s venceu!\n", nome_pais_2);
                else
                    printf("Empate!\n");
                break;
            case 5:
                printf("Atributo escolhido: Densidade Demografica\n");
                printf("%s: %.2f hab/km2\n", nome_pais_1, densidade_1);
                printf("%s: %.2f hab/km2\n", nome_pais_2, densidade_2);
                if (densidade_1 < densidade_2)
                    printf("Resultado: %s venceu! (menor densidade)\n", nome_pais_1);
                else if (densidade_2 < densidade_1)
                    printf("Resultado: %s venceu! (menor densidade)\n", nome_pais_2);
                else
                    printf("Empate!\n");
                break;
            default:
                printf("Opcao invalida! Escolha entre 0 e 5.\n");
                break;
        }
    } while (1);

    return 0;
}
