#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Declaração das variáveis com nomes descritivos
  int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois;
    char estadoUm, estadoDois;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibPerCapitaUm, pibPerCapitaDois;
    char cidadeUm[30], cidadeDois[30]; 
  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");

  printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
  scanf(" %c", &estadoUm);

  printf("Qual o nome da cidade? ");
  scanf("%s", cidadeUm);

  printf("Qual o tamanho da população? ");
  scanf("%d", &populacaoUm);

  printf("Qual a área que essa cidade ocupa (em km²)? ");
  scanf("%f", &areaUm);

  printf("Qual o PIB dessa cidade (em bilhões)? ");
  scanf("%f", &pibUm);

  printf("Quantos pontos turísticos tem nessa cidade? ");
  scanf("%d", &pTuristicosUm);

  printf("\nAgora vamos para a carta de número 2!\n\n");

    // Entrada de dados da Carta 2
  printf("=== Cadastro da Carta 2 ===\n");

  printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
  scanf(" %c", &estadoDois);

  printf("Qual o nome da cidade? ");
  scanf("%s", cidadeDois);

  printf("Qual o tamanho da população? ");
  scanf("%d", &populacaoDois);

  printf("Qual a área que essa cidade ocupa (em km²)? ");
  scanf("%f", &areaDois);

  printf("Qual o PIB dessa cidade (em bilhões)? ");
  scanf("%f", &pibDois);

  printf("Quantos pontos turísticos tem nessa cidade? ");
  scanf("%d", &pTuristicosDois);

  // Área para exibição dos dados da cidade
  printf("\n===========================================\n");
  printf("          CARTAS CADASTRADAS\n");
  printf("===========================================\n\n");

  printf("Carta 1:\n");
  printf("Estado: %c\n", estadoUm);
  printf("Código: %c01\n", estadoUm);
  printf("Nome da Cidade: %s\n", cidadeUm);
  printf("População: %d habitantes\n", populacaoUm);
  printf("Área: %.2f km²\n", areaUm);
  printf("PIB: %.2f bilhões\n", pibUm);
  printf("Número de Pontos Turísticos: %d\n", pTuristicosUm);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadeUm);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaUm);
  

  printf("-------------------------------------------\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estadoDois);
  printf("Código: %c02\n", estadoDois);
  printf("Nome da Cidade: %s\n", cidadeDois);
  printf("População: %d habitantes\n", populacaoDois);
  printf("Área: %.2f km²\n", areaDois);
  printf("PIB: %.2f bilhões\n", pibDois);
  printf("Número de Pontos Turísticos: %d\n", pTuristicosDois);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadeDois);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaDois);

  
  printf("\nEssas foram as cartas cadastradas.\n");

return 0;
} 
