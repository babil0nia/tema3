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
    

    int atributo1, atributo2;
    float valor1_atrib1, valor1_atrib2, soma1;
    float valor2_atrib1, valor2_atrib2, soma2;
    int vencedor_atrib1, vencedor_atrib2;
    
  
    printf("╔════════════════════════════════════════╗\n");
    printf("║      CADASTRO DA CARTA 1               ║\n");
    printf("╚════════════════════════════════════════╝\n");
    
    printf("Estado (letra): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome do País: ");
    scanf(" %[^\n]", pais1);
    
    printf("População: ");
    scanf("%lu", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = (float)populacao1 / area1;
    
    printf("\n");
    
   
    printf("╔════════════════════════════════════════╗\n");
    printf("║      CADASTRO DA CARTA 2               ║\n");
    printf("╚════════════════════════════════════════╝\n");
    
    printf("Estado (letra): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome do País: ");
    scanf(" %[^\n]", pais2);
    
    printf("População: ");
    scanf("%lu", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    densidade2 = (float)populacao2 / area2;
    
    printf("\n");
    
   
    printf("╔════════════════════════════════════════╗\n");
    printf("║       CARTAS CADASTRADAS               ║\n");
    printf("╚════════════════════════════════════════╝\n\n");
    
    printf("🎴 CARTA 1 - %s\n", pais1);
    printf("   Estado: %c | Código: %s\n", estado1, codigo1);
    printf("   População: %lu hab\n", populacao1);
    printf("   Área: %.2f km²\n", area1);
    printf("   PIB: %.2f bilhões\n", pib1);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("   Densidade: %.2f hab/km²\n\n", densidade1);
    
    printf("🎴 CARTA 2 - %s\n", pais2);
    printf("   Estado: %c | Código: %s\n", estado2, codigo2);
    printf("   População: %lu hab\n", populacao2);
    printf("   Área: %.2f km²\n", area2);
    printf("   PIB: %.2f bilhões\n", pib2);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("   Densidade: %.2f hab/km²\n\n", densidade2);
    
    
    printf("╔════════════════════════════════════════╗\n");
    printf("║   ESCOLHA O PRIMEIRO ATRIBUTO          ║\n");
    printf("╚════════════════════════════════════════╝\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("════════════════════════════════════════\n");
    printf("Escolha (1-5): ");
    scanf("%d", &atributo1);
    
   
    if (atributo1 < 1 || atributo1 > 5) {
        printf("\n❌ ERRO: Opção inválida! Programa encerrado.\n");
        return 1;
    }
    
    printf("\n");
    
    
    printf("╔════════════════════════════════════════╗\n");
    printf("║   ESCOLHA O SEGUNDO ATRIBUTO           ║\n");
    printf("╚════════════════════════════════════════╝\n");
    
    
    if (atributo1 != 1) printf("1. População\n");
    if (atributo1 != 2) printf("2. Área\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turísticos\n");
    if (atributo1 != 5) printf("5. Densidade Demográfica\n");
    printf("════════════════════════════════════════\n");
    printf("Escolha (1-5, diferente de %d): ", atributo1);
    scanf("%d", &atributo2);
    
 
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("\n❌ ERRO: Escolha inválida! Deve ser diferente do primeiro.\n");
        return 1;
    }
    
    printf("\n");
    
    
    switch(atributo1) {
        case 1: // População
            valor1_atrib1 = (float)populacao1;
            valor2_atrib1 = (float)populacao2;
            vencedor_atrib1 = (populacao1 > populacao2) ? 1 : 
                             (populacao2 > populacao1) ? 2 : 0;
            break;
        case 2: // Área
            valor1_atrib1 = area1;
            valor2_atrib1 = area2;
            vencedor_atrib1 = (area1 > area2) ? 1 : 
                             (area2 > area1) ? 2 : 0;
            break;
        case 3: // PIB
            valor1_atrib1 = pib1;
            valor2_atrib1 = pib2;
            vencedor_atrib1 = (pib1 > pib2) ? 1 : 
                             (pib2 > pib1) ? 2 : 0;
            break;
        case 4: // Pontos Turísticos
            valor1_atrib1 = (float)pontos_turisticos1;
            valor2_atrib1 = (float)pontos_turisticos2;
            vencedor_atrib1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 
                             (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
            break;
        case 5: // Densidade (MENOR vence!)
            valor1_atrib1 = densidade1;
            valor2_atrib1 = densidade2;
            vencedor_atrib1 = (densidade1 < densidade2) ? 1 : 
                             (densidade2 < densidade1) ? 2 : 0;
            break;
    }
    
    
    switch(atributo2) {
        case 1: // População
            valor1_atrib2 = (float)populacao1;
            valor2_atrib2 = (float)populacao2;
            vencedor_atrib2 = (populacao1 > populacao2) ? 1 : 
                             (populacao2 > populacao1) ? 2 : 0;
            break;
        case 2: // Área
            valor1_atrib2 = area1;
            valor2_atrib2 = area2;
            vencedor_atrib2 = (area1 > area2) ? 1 : 
                             (area2 > area1) ? 2 : 0;
            break;
        case 3: // PIB
            valor1_atrib2 = pib1;
            valor2_atrib2 = pib2;
            vencedor_atrib2 = (pib1 > pib2) ? 1 : 
                             (pib2 > pib1) ? 2 : 0;
            break;
        case 4: // Pontos Turísticos
            valor1_atrib2 = (float)pontos_turisticos1;
            valor2_atrib2 = (float)pontos_turisticos2;
            vencedor_atrib2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 
                             (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
            break;
        case 5: // Densidade (MENOR vence!)
            valor1_atrib2 = densidade1;
            valor2_atrib2 = densidade2;
            vencedor_atrib2 = (densidade1 < densidade2) ? 1 : 
                             (densidade2 < densidade1) ? 2 : 0;
            break;
    }
    
    
    soma1 = valor1_atrib1 + valor1_atrib2;
    soma2 = valor2_atrib1 + valor2_atrib2;
    
   
    const char* nomes[] = {"", "População", "Área", "PIB", 
                           "Pontos Turísticos", "Densidade"};
    
    
    printf("╔════════════════════════════════════════╗\n");
    printf("║       RESULTADO DA BATALHA             ║\n");
    printf("╚════════════════════════════════════════╝\n\n");
    
   
    printf("⚔️  ATRIBUTO 1: %s\n", nomes[atributo1]);
    printf("   %s: %.2f\n", pais1, valor1_atrib1);
    printf("   %s: %.2f\n", pais2, valor2_atrib1);
    printf("   Vencedor: %s\n\n", 
           vencedor_atrib1 == 1 ? pais1 : 
           vencedor_atrib1 == 2 ? pais2 : "Empate");
    
    
    printf("⚔️  ATRIBUTO 2: %s\n", nomes[atributo2]);
    printf("   %s: %.2f\n", pais1, valor1_atrib2);
    printf("   %s: %.2f\n", pais2, valor2_atrib2);
    printf("   Vencedor: %s\n\n", 
           vencedor_atrib2 == 1 ? pais1 : 
           vencedor_atrib2 == 2 ? pais2 : "Empate");
    
    
    printf("════════════════════════════════════════\n");
    printf("📊 SOMA DOS ATRIBUTOS:\n");
    printf("   %s: %.2f\n", pais1, soma1);
    printf("   %s: %.2f\n", pais2, soma2);
    printf("════════════════════════════════════════\n\n");
    
    // Resultado Final
    if (soma1 > soma2) {
        printf("🏆 VENCEDOR FINAL: %s!\n", pais1);
        printf("   Diferença: %.2f pontos\n", soma1 - soma2);
    } else if (soma2 > soma1) {
        printf("🏆 VENCEDOR FINAL: %s!\n", pais2);
        printf("   Diferença: %.2f pontos\n", soma2 - soma1);
    } else {
        printf("⚔️  EMPATE FINAL!\n");
        printf("   Ambas as cartas somaram %.2f pontos\n", soma1);
    }
    
    printf("\n╚════════════════════════════════════════╝\n");
    
    return 0;
}