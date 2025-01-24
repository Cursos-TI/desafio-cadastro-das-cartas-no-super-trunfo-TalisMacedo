#include <stdio.h>

int main(){
  char estado[3];
  char codigoCarta[4];
  char nomeCidade[20];
  unsigned long int populacao;
  float area, pib;
  int numeroPontosTuristicos;
  float densidadePopulacional; // Calculada como população dividida pela área da cidade
  float pibPerCapita; // Calculado como PIB total da cidade dividido pela população.
  float superPoder; // Soma de todas as propriedades, ajustada conforme a lógica do super poder.
  
  printf("\n--- Sistema de Cadastro Super Trunfo ---\n"); 
  
  printf("\nDigite a letra do estado: ");
  scanf(" %[^\n]", estado);

  printf("Digite o código da primeira carta (ex: A01): ");
  scanf(" %3s", codigoCarta);
  
  printf("Digite o nome da cidade: ");
  //fgets(nomeCidade, sizeof(nomeCidade), stdin);
  scanf(" %[^\n]", nomeCidade);

  printf("Digite a população da cidade: ");
  scanf(" %ld", &populacao);

  printf("Digite a área da cidade (km²): ");
  scanf(" %f", &area);

  printf("Digite o PIB da cidade: ");
  scanf(" %f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &numeroPontosTuristicos);
  
  densidadePopulacional = populacao / area;
  pibPerCapita = pib / populacao;

  printf("\n--- Dados da primeira Carta %s ---\n", codigoCarta);
  printf("População: %ld\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f Bilhões de reais\n", pib);
  printf("Pontos Turísticos: %d\n", numeroPontosTuristicos);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional);
  printf("PIB per Capita: %.2f\n", pibPerCapita);
  
  printf("\n--------------------------------------------------------------------------\n");
  
  char estado1[3];
  char codigoCarta1[4];
  char nomeCidade1[20];
  unsigned long int populacao1;
  float area1, pib1;
  int numeroPontosTuristicos1;
  float densidadePopulacional1; // Calculada como população dividida pela área da cidade
  float pibPerCapita1; // Calculado como PIB total da cidade dividido pela população.
  float superPoder1; // Soma de todas as propriedades, ajustada conforme a lógica do super poder.
  
  printf("\n--- Sistema de Cadastro Super Trunfo ---\n"); 
  
  printf("\nDigite a letra do estado: ");
  scanf(" %[^\n]", estado1);

  printf("Digite o código da primeira carta (ex: A01): ");
  scanf(" %3s", codigoCarta1);
  
  printf("Digite o nome da cidade: ");
  //fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
  scanf(" %[^\n]", nomeCidade1);

  printf("Digite a população da cidade: ");
  scanf(" %ld", &populacao1);

  printf("Digite a área da cidade (km²): ");
  scanf(" %f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf(" %f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &numeroPontosTuristicos1);
  
  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  printf("\n--- Dados da segunda Carta %s ---\n", codigoCarta1);
  printf("População: %ld\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f Bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", numeroPontosTuristicos1);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);
  
  printf("\n--------------------------------------------------------------------------\n");
  printf("\n----------------------A CARTA GANHADORA-----------------------------------\n");
  printf("Se o resultado for '1' o ganhador é a carta do código A02\nSe o resultado for '0' o ganhador é a carta do código A01\nRESULTADO: %d\n", densidadePopulacional > densidadePopulacional1);


  
  return 0;
}