#include <stdio.h>

int main() {
    // ==== Carta 1 ====
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    int populacao1; 
    float area1; 
    float pib1;
    int pontos1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado: ");
    scanf("%s", estado1); 

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);  // lê string com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o pib: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);  
    

    // ==== Carta 2 ====
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2; 
    float area2; 
    float pib2;
    int pontos2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);   

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);   

    printf("Digite a população: ");     
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);          

    // ==== Exibição ====
    printf("\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
