#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

   // -------- CARTA 1 --------
  int populacao, pontos_turisticos;
  char cidade[20];
  float pib, area_cidade;

  // -------- CARTA 2 --------
  int populacao2, pontos_turisticos2;
  char cidade2[20];
  float pib2, area_cidade2;


  // Área para entrada de dados

  printf("Olá, seja bem vindo ao jogo de Super Trunfo!\n");
  printf("Voce ira armazenar as informacoes de suas duas cartas.\n\n");


  printf("=== Carta 1 ===\n\n");

  printf("Digite o nome de sua cidade: \n");
  scanf("%s", &cidade);

  printf("Digite o numero de pessoas da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite a area da cidade: \n");
  scanf("%f", &area_cidade);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos);


  printf("\n=== Carta 2 ===\n\n");

  printf("Digite o nome de sua cidade: \n");
  scanf("%s", cidade2);

  printf("Digite o numero de pessoas da cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite a area da cidade: \n");
  scanf("%f", &area_cidade2);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos2);


  // Área para exibição dos dados da cidade

  printf("\n--- Dados da Carta 1 ---\n\n");

  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("PIB: %.2f\n", pib);
  printf("Area da cidade: %.2f metros quadrados\n", area_cidade);
  printf("Pontos turisticos: %d\n\n", pontos_turisticos);
  

  printf("\n--- Dados da Carta 2 ---\n\n");

  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("PIB: %.2f\n", pib2);
  printf("Area da cidade: %.2f metros quadrados\n", area_cidade2);
  printf("Pontos turisticos: %d\n", pontos_turisticos2);

return 0;
} 
 