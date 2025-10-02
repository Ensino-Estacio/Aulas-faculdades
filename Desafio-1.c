#include <stdio.h>

int main() {
    // Carta 1
    printf("Insira os dados da Carta1:\n");

    char ESTADO1[20];
    char Codigo_Carta1[5];
    char Nome1_C1[30], Nome2_C1[30], Nome_Cidade1[60];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;

    printf("Carta1:\n");

    printf("Estado:\n ");
    scanf("%s", ESTADO1);

    printf("Codigo da Carta:\n ");
    scanf("%s", Codigo_Carta1);

    printf("Nome da Cidade:\n ");
    scanf("%s %s", Nome1_C1, Nome2_C1);
    sprintf(Nome_Cidade1, "%s %s", Nome1_C1, Nome2_C1);

    printf("Populacao:\n ");
    scanf("%d", &Populacao1);

    printf("Area:\n ");
    scanf("%f", &Area1);

    printf("PIB:\n ");
    scanf("%f", &PIB1);

    printf("Pontos Turisticos:\n ");
    scanf("%d", &Pontos_Turisticos1);


    // Carta 2
    printf("\nInsira os dados da Carta2:\n");

    char ESTADO2[20];
    char Codigo_Carta2[5];
    char Nome1_C2[30], Nome2_C2[30], Nome3_C2[30], Nome_Cidade2[90];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

    printf("Carta2:\n");

    printf("Estado:\n ");
    scanf("%s", ESTADO2);

    printf("Codigo da Carta:\n ");
    scanf("%s", Codigo_Carta2);

    printf("Nome da Cidade:\n ");
    scanf("%s %s %s", Nome1_C2, Nome2_C2, Nome3_C2);
    sprintf(Nome_Cidade2, "%s %s %s", Nome1_C2, Nome2_C2, Nome3_C2);

    printf("Populacao:\n ");
    scanf("%d", &Populacao2);

    printf("Area:\n ");
    scanf("%f", &Area2);

    printf("PIB:\n ");
    scanf("%f", &PIB2);

    printf("Pontos Turisticos:\n ");
    scanf("%d", &Pontos_Turisticos2);

    // Exibindo os dados inseridos CARTA 1
    printf("\nDados da Carta1:\n");
    printf("Estado: %s\n", ESTADO1);
    printf("Codigo da Carta: %s\n", Codigo_Carta1);
    printf("Nome da Cidade: %s\n", Nome_Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f Milhoes\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);

    // Exibindo os dados inseridos CARTA 2
    printf("\nDados da Carta2:\n");
    printf("Estado: %s\n", ESTADO2);
    printf("Codigo da Carta: %s\n", Codigo_Carta2);
    printf("Nome da Cidade: %s\n", Nome_Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f Milhoes\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);

    return 0;
}
