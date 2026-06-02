#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int main() {
    // Carta 1
    char estado1 [20] = "MT";
    char nomeCidade1 [50] = "sinop";
    unsigned long int populacao1 = 210000;
    float area1 = 3.941,96 , pib1=  11,7 ;
    int pontosTuristicos1 = 20;
    float densidade1 = 49,19, pibPerCapita1 =  59.782,63;
    // Carta 2
    char estado2 [20] = "MT";
    char nomeCidade2 [50] "cuiaba";
    unsigned long int populacao2 = 1134425 ;
    unsigned float area2 = 4.327, pib2=  39,8 ;
    int pontosTuristicos2 = 80; 
    float densidade2 = 90,0, pibPerCapita2 = 100,2 ;

  // Área para entrada de dados
            // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A): ");
    scanf(" %c", &estado1);

    printf("Nome da cidade: ");
    scanf(" %c[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
   
    printf ("pib per capital");
    scanf ("%f" , &pibPerCapita1)

    printf ("densidade demografica");
    scanf ("%f" , &densidade1)
  
  printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (A): ");
    scanf(" %c", &estado2);

    printf("Nome da cidade: ");
    scanf(" %c[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
  
    printf ("pib per capital");
    scanf ("%f" , &pibPerCapita2);
  
    printf ("densidade demografica");
    scanf ("%f" , &densidade2)
                //calculo 
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    // Área para exibição dos dados da cidade

    // Exibição Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Exibição Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;


return 0;
} 
