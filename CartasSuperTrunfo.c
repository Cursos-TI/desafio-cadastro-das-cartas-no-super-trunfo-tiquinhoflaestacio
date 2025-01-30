#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigoc [100];
    char nome [50];
    int populacao;
    float area;
    float pib;
    int npontos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

      printf("coloque um desses código na carta:\nA01.A02.A03.A04.B01.B02.B03.B04.C01.C02,C03.C04.nD01.D02.D03.D04\nE01.E02.E03.E04.F01.F02.F03.F04.G01.G02.G03.G04.H01,H02,H03,H04\n");
      scanf("%s", &codigoc);

      printf("coloque o nome de uma cidade:\n");
      scanf("%s", &nome);

      printf("coloque o número de pessoas da cidade:\n");
      scanf("%d", &populacao);

      printf("coloque a Área da cidade em m²:\n");
      scanf("%f", &area);

       printf("coloque PIB da cidade:\n");
      scanf("%f", &pib);

       printf("coloque o números de pontos turísticos da cidade:\n");
      scanf("%d", &npontos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

       printf(" código da carta:%s\n", codigoc);
       printf(" nome da cidade:%s\n", nome);
       printf(" população da cidade:%d\n", populacao);
       printf(" Área da cidade por (m²):%.1f\n", area);
       printf(" PIB da cidade:%.1f\n", pib);
       printf(" pontos turísticos da cidade:%d\n", npontos);
       

    return 0;
}
