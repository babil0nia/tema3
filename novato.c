#include <stdio.h>

int main() {
  
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    
  
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    
    
    printf("========================================\n");
    printf("      CADASTRO DA CARTA 1\n");
    printf("========================================\n");
    
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
   
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    
    printf("\n");
    
    
    printf("========================================\n");
    printf("      CADASTRO DA CARTA 2\n");
    printf("========================================\n");
    
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    printf("\n");
    
    
    printf("========================================\n");
    printf("         CARTAS CADASTRADAS\n");
    printf("========================================\n\n");
    
    printf("Carta 1:\n");
    printf("  Estado: %c\n", estado1);
    printf("  Código: %s\n", codigo1);
    printf("  Cidade: %s\n", cidade1);
    printf("  População: %lu habitantes\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per Capita: R$ %.2f\n\n", pib_per_capita1);
    
    printf("Carta 2:\n");
    printf("  Estado: %c\n", estado2);
    printf("  Código: %s\n", codigo2);
    printf("  Cidade: %s\n", cidade2);
    printf("  População: %lu habitantes\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita: R$ %.2f\n\n", pib_per_capita2);
    
    
    printf("========================================\n");
    printf("      COMPARAÇÃO DE CARTAS\n");
    printf("========================================\n\n");
    
   
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", cidade2, estado2, populacao2);
    
   
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }
    
    printf("========================================\n");
    
    return 0;
}