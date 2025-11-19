#include <stdio.h>

int main() {
   
    char estado1;
    char codigo1[4];
    char pais1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    
   
    char estado2;
    char codigo2[4];
    char pais2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    
    
    int opcao;
    
    
    printf("========================================\n");
    printf("      CADASTRO DA CARTA 1\n");
    printf("========================================\n");
    
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome do País: ");
    scanf(" %[^\n]", pais1);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    
    densidade1 = (float)populacao1 / area1;
    
    printf("\n");
    

    printf("========================================\n");
    printf("      CADASTRO DA CARTA 2\n");
    printf("========================================\n");
    
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome do País: ");
    scanf(" %[^\n]", pais2);
    
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
   
    densidade2 = (float)populacao2 / area2;
    
    printf("\n");
    
    
    printf("========================================\n");
    printf("         CARTAS CADASTRADAS\n");
    printf("========================================\n\n");
    
    printf("Carta 1 - %s:\n", pais1);
    printf("  Estado: %c | Código: %s\n", estado1, codigo1);
    printf("  População: %lu habitantes\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("  Densidade Demográfica: %.2f hab/km²\n\n", densidade1);
    
    printf("Carta 2 - %s:\n", pais2);
    printf("  Estado: %c | Código: %s\n", estado2, codigo2);
    printf("  População: %lu habitantes\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("  Densidade Demográfica: %.2f hab/km²\n\n", densidade2);
    
   
    printf("========================================\n");
    printf("    ESCOLHA O ATRIBUTO PARA BATALHA\n");
    printf("========================================\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("========================================\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &opcao);
    
    printf("\n========================================\n");
    printf("      RESULTADO DA BATALHA\n");
    printf("========================================\n\n");
    
   
    switch(opcao) {
        case 1:
            // Comparação por POPULAÇÃO
            printf("Atributo escolhido: POPULAÇÃO\n\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n\n", pais2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("🏆 Vencedor: %s!\n", pais1);
                printf("Diferença: %lu habitantes a mais\n", populacao1 - populacao2);
            } else if (populacao2 > populacao1) {
                printf("🏆 Vencedor: %s!\n", pais2);
                printf("Diferença: %lu habitantes a mais\n", populacao2 - populacao1);
            } else {
                printf("⚔️ Empate! Ambos têm a mesma população.\n");
            }
            break;
            
        case 2:
            // Comparação por ÁREA
            printf("Atributo escolhido: ÁREA\n\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);
            
            if (area1 > area2) {
                printf("🏆 Vencedor: %s!\n", pais1);
                printf("Diferença: %.2f km² a mais\n", area1 - area2);
            } else if (area2 > area1) {
                printf("🏆 Vencedor: %s!\n", pais2);
                printf("Diferença: %.2f km² a mais\n", area2 - area1);
            } else {
                printf("⚔️ Empate! Ambos têm a mesma área.\n");
            }
            break;
            
        case 3:
            // Comparação por PIB
            printf("Atributo escolhido: PIB\n\n");
            printf("%s: %.2f bilhões de reais\n", pais1, pib1);
            printf("%s: %.2f bilhões de reais\n\n", pais2, pib2);
            
            if (pib1 > pib2) {
                printf("🏆 Vencedor: %s!\n", pais1);
                printf("Diferença: %.2f bilhões a mais\n", pib1 - pib2);
            } else if (pib2 > pib1) {
                printf("🏆 Vencedor: %s!\n", pais2);
                printf("Diferença: %.2f bilhões a mais\n", pib2 - pib1);
            } else {
                printf("⚔️ Empate! Ambos têm o mesmo PIB.\n");
            }
            break;
            
        case 4:
            // Comparação por PONTOS TURÍSTICOS
            printf("Atributo escolhido: PONTOS TURÍSTICOS\n\n");
            printf("%s: %d pontos turísticos\n", pais1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n\n", pais2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("🏆 Vencedor: %s!\n", pais1);
                printf("Diferença: %d pontos a mais\n", 
                       pontos_turisticos1 - pontos_turisticos2);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("🏆 Vencedor: %s!\n", pais2);
                printf("Diferença: %d pontos a mais\n", 
                       pontos_turisticos2 - pontos_turisticos1);
            } else {
                printf("⚔️ Empate! Ambos têm o mesmo número de pontos.\n");
            }
            break;
            
        case 5:
            // Comparação por DENSIDADE (MENOR VENCE)
            printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA\n");
            printf("⚠️ Regra especial: MENOR densidade vence!\n\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n\n", pais2, densidade2);
            
            // Para densidade, MENOR valor vence
            if (densidade1 < densidade2) {
                printf("🏆 Vencedor: %s!\n", pais1);
                printf("Vantagem: %.2f hab/km² a menos (mais espaçoso)\n", 
                       densidade2 - densidade1);
            } else if (densidade2 < densidade1) {
                printf("🏆 Vencedor: %s!\n", pais2);
                printf("Vantagem: %.2f hab/km² a menos (mais espaçoso)\n", 
                       densidade1 - densidade2);
            } else {
                printf("⚔️ Empate! Ambos têm a mesma densidade.\n");
            }
            break;
            
        default:
            // Opção inválida
            printf("❌ ERRO: Opção inválida!\n");
            printf("Por favor, escolha um número entre 1 e 5.\n");
            break;
    }
    
    printf("========================================\n");
    
    return 0;
}