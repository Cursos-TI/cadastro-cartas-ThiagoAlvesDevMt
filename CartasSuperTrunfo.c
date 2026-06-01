#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int main() {
    // Carta 1
    char estado1 [20] = "MT";
    char nomeCidade1 [50] = "sinop";
    unsigned long int populacao1 = 210000;
    float area1 = 3.941,96 , pibEmBi =  11,7 ;
    int pontosTuristicos1 = 20;
    // Carta 2
    char estado2 [20] = "MT";
    char nomeCidade2 [50] "cuiaba";
    unsigned long int populacao2 = 1134425 ;
    unsigned float area2 = 4.327, pib2EmBi=  39,8 ;
    int pontosTuristicos2 = 80; 
    

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
  
  
    // Área para exibição dos dados da cidade

return 0;
} 
