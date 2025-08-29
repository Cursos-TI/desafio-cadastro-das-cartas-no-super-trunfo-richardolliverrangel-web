#include <stdio.h>


int main() {
    
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


  printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (exemplo: A01): ");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s",&cidade1);

    printf("Digite a Populacao (somente numeros): ");
    scanf("%d", &populacao1);

    printf("Digite a Area da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);




                  //C A R T A 2 

    printf("Digite a letra do Estado (A-H): ");
    scanf("%c",&estado2);

    printf("Digite o codigo da carta (exemplo: B02): ");
    scanf("%s",&codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s",&cidade2);

    printf("Digite a Populacao (somente numeros): ")
    scanf("%d",&populacao2);

    printf("Digite a Area da Cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhoes de reais: ")
    scanf("%f", &pib2);

    printf("Digite o Numero de pontos Turisticos: ")
    scanf("%d", &pontosTuristicos2);
printf("digite xadrex!");




    


    return 0;

   
}
