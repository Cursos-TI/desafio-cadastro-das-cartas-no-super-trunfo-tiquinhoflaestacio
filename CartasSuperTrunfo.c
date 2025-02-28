#include<stdio.h>

    int main(){
  
        /* variáves para armazenar dados sobre a carta nº 1*/

        char estado1[5];
        char cgcarta1[5]; 
        char nomecidade1[50];
        long int populacao1;
        int ptturistico1;
        float area1, pib1;

        /* bloco de código para coleta de dados da carta nº 1 */

        printf("cadastramento da carta nº 1:\n\n");
        printf("digite a letra da carta:\n");
            scanf("%s", estado1);
        printf("digite o código da carta:\n");
            scanf(" %5[^\n]", cgcarta1);
        printf("digite o nome da cidade:\n");
            scanf(" %50[^\n]", nomecidade1);
        printf("digite a população:\n");
            scanf("%ld", &populacao1);
        printf("digite a área em km²:\n");
            scanf("%f", &area1);
        printf("digite o PIB:\n");
            scanf("%f", &pib1);
        printf("digite o número de pontos turísticos:\n");
            scanf("%d", &ptturistico1);
        printf("carta nº 1 registrada com sucesso.\n\n");

        /* variáves para armazenar dados sobre a carta nº 1*/

        char estado2[5];
        char cgcarta2[5]; 
        char nomecidade2[50];
        long int populacao2;
        int ptturistico2;
        float area2, pib2;

        /* bloco de codígo para coleta de dados da carta nº 1 */

        printf("cadastramento da carta nº 2:\n\n");
        printf("digite a letra da carta:\n");
            scanf("%s", estado2);
        printf("digite o código da carta:\n");
            scanf(" %5[^\n]", cgcarta2);
        printf("digite o nome da cidade:\n");
            scanf(" %50[^\n]", nomecidade2);
        printf("digite a população:\n");
            scanf("%ld", &populacao2);
        printf("digite a área em km²:\n");
            scanf("%f", &area2);
        printf("digite o PIB:\n");
            scanf("%f", &pib2);
        printf("digite o número de pontos turísticos:\n");
            scanf("%d", &ptturistico2);

         /* bloco que mostra o resutado do cadastro da carta nº 1 */     

            printf("\n\ncarta: 1\n");
            printf("estado: %s\n", estado1);
            printf("código da carta: %s\n", cgcarta1);
            printf("nome da cidade: %s\n", nomecidade1);
            printf("população: %ld\n", populacao1);
            printf("Área:%.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("número de pontos turísticos: %d\n\n\n", ptturistico1);

             /* bloco que mostra o resutado do cadastro da carta nº 2 */     

            printf("carta: 2\n");
            printf("estado: %s\n", estado2);
            printf("código da carta: %s\n", cgcarta2);
            printf("nome da cidade: %s\n", nomecidade2);
            printf("população: %ld\n", populacao2);
            printf("Área:%.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("número de pontos turísticos: %d\n", ptturistico2);
            printf("\ncarta nº 2 registrada com sucesso\n\n");

     
        return 0;
    }