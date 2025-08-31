#include <stdio.h>

int main (){
    
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];
    char nomecidade1[30];
    char nomecidade2[30];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosturisticos1;
    int pontosturisticos2;


    printf("Cadastrar carta 1\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");    
    scanf("%s", nomecidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado:\n");
    scanf("%f", &area1);

    getchar();

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);


    printf("Cadastrar carta 2\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área do estado:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    float per1 = pib1 / populacao1;
    float per2 = pib2 / populacao2;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float inversa1 = 1 / densidade1;
    float inversa2 = 1 / densidade2;
    float carta1 = pontosturisticos1;
    float carta2 = pontosturisticos2;
    int resultado;

    




    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);

    printf("Densidade populacional: %f hab/km²\n",populacao1 / area1);
    printf("PIB per capita:%f reais \n", pib1 / populacao1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %f hab/km²\n",populacao2 / area2);
    printf("PIB per capita:%f reais \n", pib2 / populacao2);
    printf("carta 1: %s %d\n", nomecidade1, pontosturisticos1);
    printf("carta 2: %s %d\n", nomecidade2, pontosturisticos2);

    if (carta1 > carta2){
        resultado = 1;
        printf("Carta 1 ganhou!");
        return 0;
    }
    else{
        resultado = 0;
        printf("Carta 2 ganhou!");
        return 0;
    }
    
    return 0;
}