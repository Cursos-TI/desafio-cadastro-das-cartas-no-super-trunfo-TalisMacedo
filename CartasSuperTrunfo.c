#include <stdio.h>
#include <string.h> // Para manipular strings
//#include <ctype.h> // Para usar o toupper

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char pais[20];
    char estado[3];
    char cidade[3];
    //int i = 0;
    int pontosturisticos;
    float populacao, area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome do País:\n");
    // Entrada do país (permitindo espaços)
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0'; // Remove o \n da entrada

    // Faz com que saia tudo em maíusculo
    //while (pais[i] != '\0') {
    //  pais[i] = toupper(pais[i]);
    //i++;
    //};

    //i = 0; // Zera a variavel i

    printf("Digite a população:\n");
    scanf("%f", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos:\n");
    scanf("%i", &pontosturisticos);



    printf("Digite o estado:\n");
    // %2s limita a leitura a, no maximo, 2 caracteres (excluindo o caracter nulo \0).
    // Isso é útil para evitar que o programa leia mais caracteres do que o buffer pode armazenar
    scanf("%2s", estado);

    //while (estado[i] != '\0') {
    //  estado[i] = toupper(estado[i]);
    //i++;
    //}

    //i = 0;

    printf("Digite a cidade:\n");
    scanf("%2s", cidade);

    //while (cidade[i] != '\0') {
    //  cidade[i] = toupper(cidade[i]);
    //i++;
    //}



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // O .2f "ponto + numero inteiro", permite definir quantos números seram exibidos no final
    printf("\nDados da carta: \n");
    printf("\n");
    // A / "barra" no final, permite que continue na linha a baixo
    printf("    - Nome do País: %s\n\
    - Letra do Estado: %s\n\
    - Número da Cidade: %s\n\
    - População: %.3f\n\
    - Área: %.3f\n\
    - PIB: %.2f\n\
    - Pontos turisticos: %i\n"\
    , pais, estado, cidade, populacao, area, pib, pontosturisticos);
    //  printf("  - Código da carta: %s%s\n", estado, cidade);
    strcat(estado, cidade); // Concatena uma string no final da outra
    printf("    - Código da carta: %s\n", estado);


    return 0;
}