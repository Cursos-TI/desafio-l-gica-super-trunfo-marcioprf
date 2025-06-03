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
    int opcao;

//carta 1
    printf("Digite os dados da Carta 1:\n");//pulando linhas com \n
    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);//%s string nao precisa de &
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &areakm1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);
     
     //calculo densidade
     densidade1 = (populacao1 / areakm1);
     //calculo pib per capita
     pibcapita1 = (pib1 / populacao1);

//carta 2
    printf("\nDigite os dados da Carta 2:\n");//pulando linhas com \n
    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo2);//%s string nao precisa de &
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área (em km²): \n");
    scanf("%f", &areakm2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);
    
    //calculo densidade
    densidade2 = (populacao2 / areakm2);
    //calculo pib per capita
    pibcapita2 = (pib2 / populacao2);

printf("\n Escolha o atributo para comparar: \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Numerro de Pontos turristicos\n");
printf("5. Desnsidade Demografica\n");
printf("Digite a Opção: \n");
scanf("%d", &opcao);

printf("Comparação entre %s  e %s : \n", cidade1, cidade2);

switch (opcao) // iniciando switch das opções
{
case 1:
    printf("Atributo: População\n");;
    printf("%s: %d habitantes\n", cidade1, populacao1);
    printf("%s: %d habitantes\n", cidade2, populacao2);
    if ( populacao1 > populacao2)  
    {
        printf ("Resultado: %s venceu \n", cidade1);
    } else if (populacao2 > populacao1) 
    {
        printf("Resultado: %s venceu! \n", cidade2);
    } else 
    {
        printf("Empatou!\n");;
    }
    
    break;

case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, areakm1);
            printf("%s: %.2f km²\n", cidade2, areakm2);
            if (areakm1 > areakm2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (areakm2 > areakm1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            // Regra invertida: vence a menor densidade
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

