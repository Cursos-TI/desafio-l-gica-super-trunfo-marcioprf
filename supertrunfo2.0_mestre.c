#include <stdio.h>
#include <stdlib.h>  // Para exit()

int main () {
    
    char estado1, estado2;
    char codigo1[4], codigo2[4]; 
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    int opcao1, opcao2;

    // Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &areakm1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);
     
    densidade1 = (populacao1 / areakm1); //calculo densidade
    pibcapita1 = (pib1 / populacao1); //calculo pib

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo2);
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &areakm2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    densidade2 = (populacao2 / areakm2); //calculo densidade
    pibcapita2 = (pib2 / populacao2); //calculo pib

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Verificação: não pode ser igual
    if (opcao1 == opcao2) {
        printf("Erro: você não pode escolher o mesmo atributo duas vezes!\n");
        exit(1);  // Termina o programa
    }

    //variaveis de comparação
    float valor1_c1 = 0, valor1_c2 = 0; 
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    // Comparação do primeiro atributo
    printf("\nComparação do primeiro atributo:\n");
    switch (opcao1) {
        case 1:
            printf("População:\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            printf("Vencedor: %s\n", (valor1_c1 > valor1_c2) ? cidade1 : (valor1_c2 > valor1_c1) ? cidade2 : "Empate");
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", cidade1, areakm1);
            printf("%s: %.2f km²\n", cidade2, areakm2);
            valor1_c1 = areakm1;
            valor1_c2 = areakm2;
            printf("Vencedor: %s\n", (valor1_c1 > valor1_c2) ? cidade1 : (valor1_c2 > valor1_c1) ? cidade2 : "Empate");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            printf("Vencedor: %s\n", (valor1_c1 > valor1_c2) ? cidade1 : (valor1_c2 > valor1_c1) ? cidade2 : "Empate");
            break;

        case 4:
            printf("Número de Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            printf("Vencedor: %s\n", (valor1_c1 > valor1_c2) ? cidade1 : (valor1_c2 > valor1_c1) ? cidade2 : "Empate");
            break;

        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            printf("Vencedor: %s\n", (valor1_c1 < valor1_c2) ? cidade1 : (valor1_c2 < valor1_c1) ? cidade2 : "Empate");
            break;

        default:
            printf("Opção inválida!\n");
    }

    // Comparação do segundo atributo
    printf("\nComparação do segundo atributo:\n");
    switch (opcao2) {
        case 1:
            printf("População:\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            printf("Vencedor: %s\n", (valor2_c1 > valor2_c2) ? cidade1 : (valor2_c2 > valor2_c1) ? cidade2 : "Empate");
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", cidade1, areakm1);
            printf("%s: %.2f km²\n", cidade2, areakm2);
            valor2_c1 = areakm1;
            valor2_c2 = areakm2;
            printf("Vencedor: %s\n", (valor2_c1 > valor2_c2) ? cidade1 : (valor2_c2 > valor2_c1) ? cidade2 : "Empate");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            printf("Vencedor: %s\n", (valor2_c1 > valor2_c2) ? cidade1 : (valor2_c2 > valor2_c1) ? cidade2 : "Empate");
            break;

        case 4:
            printf("Número de Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            printf("Vencedor: %s\n", (valor2_c1 > valor2_c2) ? cidade1 : (valor2_c2 > valor2_c1) ? cidade2 : "Empate");
            break;

        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            printf("Vencedor: %s\n", (valor2_c1 < valor2_c2) ? cidade1 : (valor2_c2 < valor2_c1) ? cidade2 : "Empate");
            break;

        default:
            printf("Opção inválida!\n");
    }

    // Soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Resultado final
    printf("\n==== Resultado Final ====\n");
    printf("%s - Soma dos atributos: %.2f\n", cidade1, soma1);
    printf("%s - Soma dos atributos: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
