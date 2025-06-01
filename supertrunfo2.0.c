#include <stdio.h>

int main () {
    
    char estado1,estado2;
    char codigo1[4],codigo2[4]; 
    char cidade1[50],cidade2[50];
    int populacao1,populacao2;
    float areakm1,areakm2;
    float pib1,pib2;
    int pontos1,pontos2;
    float densidade1,densidade2;
    float pibcapita1,pibcapita2;

//carta 1
    printf("Digite os dados da Carta 1:\n");//pulando linhas com \n
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);//%s string nao precisa de &
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &areakm1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
     
     //calculo densidade
     densidade1 = (populacao1 / areakm1);
     //calculo pib per capita
     pibcapita1 = (pib1 / populacao1);

//carta 2
    printf("\nDigite os dados da Carta 2:\n");//pulando linhas com \n
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);//%s string nao precisa de &
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &areakm2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    
    //calculo densidade
    densidade2 = (populacao2 / areakm2);
    //calculo pib per capita
    pibcapita2 = (pib2 / populacao2);

   
//resultado cidade 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);//.2f para duas casas decimais do float
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("A   densidade populacional é: %f\n",densidade1);
    printf("O Pib percapita é: %f\n",pibcapita1);

//resultado cidade 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);//.2f para duas casas decimais do float
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("A   densidade populacional é: %f\n",densidade2);
    printf("O Pib percapita é: %f\n",pibcapita2);

// Comparação
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}

