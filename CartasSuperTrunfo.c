#include <stdio.h>
#include <string.h> // Para manipular strings
#include <ctype.h> // Para usar o toupper


int main() {
    char pais[20];
    char estado[3];
    char cidade[3];
    int i = 0;
    int pontosturisticos, populacao, area;
    float pib, pibpercapito, densidade;

    printf("Digite o nome do País: ");
    // Entrada do país (permitindo espaços)
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0'; // Remove o \n da entrada

    // Faz com que saia tudo em maíusculo
    while (pais[i] != '\0') {
      pais[i] = toupper(pais[i]);
      i++;
      }

    i = 0; // Zera a variavel i

    printf("Digite o estado: ");
    // %2s limita a leitura a, no maximo, 2 caracteres (excluindo o caracter nulo \0).
    // Isso é útil para evitar que o programa leia mais caracteres do que o buffer pode armazenar
    scanf("%2s", estado);

    while (estado[i] != '\0') {
      estado[i] = toupper(estado[i]);
      i++;
      }

    i = 0;

    printf("Digite a cidade: ");
    scanf("%2s", cidade);

    while (cidade[i] != '\0') {
      cidade[i] = toupper(cidade[i]);
      i++;
      }

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%d", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    // Densidade populacional
    
    densidade = (float) populacao / area;

    // PIB per capito
    
    pibpercapito = pib / populacao;

    // O .2f "ponto + numero inteiro", permite definir quantos números seram exibidos no final
    printf("\n **** Dados da carta: \n");
    printf("\n");
    // A / "barra" no final, permite que continue na linha a baixo
    printf("    - Nome do País: %s\n\
    - Letra do Estado: %s\n\
    - Número da Cidade: %s\n\
    - População: %d\n\
    - Área: %d km²\n\
    - PIB: %.2f\n\
    - Pontos turisticos: %d\n\
    - PIB per Capita: %.2f\n\
    - Densidade Populacional: %.2f\n"\
    , pais, estado, cidade, populacao, area, pib, pontosturisticos, pibpercapito, densidade);
    strcat(estado, cidade); // Concatena uma string no final da outra
    printf("    - Código da carta: %s\n", estado);


    return 0;
}