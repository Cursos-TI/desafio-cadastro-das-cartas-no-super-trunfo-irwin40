#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração das variavéis da Carta 1 (_01) e Carta 2 (_02).

    char estado_01, estado_02;
    char codigo_01[4], cidade_01[50], codigo_02[4], cidade_02[50];
    int populacao_01, pontos_turisticos_01, populacao_02, pontos_turisticos_02;
    float area_01, pib_01, area_02, pib_02, densidade_01, densidade_02, pib_per_capita_01, pib_per_capita_02;

    
    // Cadastro das Carta 1

    printf("CADASTRO DA CARTA 1:\n\n");
    printf("Preencha as informações abaixo:\n\n");
    printf("ESTADO(A a H): ");
    scanf(" %c", &estado_01);
    printf("CÓDIGO DA CIDADE(Ex. A01): ");
    scanf("%s", codigo_01);
    printf("CIDADE: ");    
    scanf(" %[^\n]s", cidade_01); // Lê até a quebra de linha, incluindo espaços
    printf("POPULAÇÃO: ");
    scanf("%d", &populacao_01);
    printf("ÁREA(km²): ");
    scanf("%f", &area_01);	
    printf("PIB(R$): ");
    scanf("%f", &pib_01);
    printf("Nº DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos_turisticos_01);
    printf("\n--------------------------------------\n");

    // Cadastro da Carta 2

    printf("\nCADASTRO DA CARTA 2:\n\n");
    printf("Preencha as informações abaixo:\n\n");
    printf("ESTADO(A a H): ");
    scanf(" %c", &estado_02);
    printf("CÓDIGO DA CIDADE(Ex. A01): ");
    scanf("%s", codigo_02);
    printf("CIDADE: ");    
    scanf(" %[^\n]s", cidade_02); // Lê até a quebra de linha, incluindo espaços
    printf("POPULAÇÃO: ");
    scanf("%d", &populacao_02);
    printf("ÁREA(km²): ");
    scanf("%f", &area_02);	
    printf("PIB(R$): ");
    scanf("%f", &pib_02);
    printf("Nº DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos_turisticos_02);
    printf("\n\n--------------------------------------\n");
    
    // Cálculo da Densidade Populacional e PIB per Capita
    densidade_01 = populacao_01 / area_01; // Densidade Populacional da Carta 1
    densidade_02 = populacao_02 / area_02; // Densidade Populacional da Carta 2
    pib_per_capita_01 = pib_01 / populacao_01; // PIB per Capita da Carta 1 
    pib_per_capita_02 = pib_02 / populacao_02; // PIB per Capita da Carta 2
    
    // Exibição dos Dados das Cartas:
    
    printf("\n-- CARTAS CADASTRADAS --\n\n- CARTA 1 -\n\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: \
%d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n--------------------------------------\n\n", estado_01, codigo_01,\
 cidade_01, populacao_01, area_01, pib_01, pontos_turisticos_01, densidade_01, pib_per_capita_01);
    
    printf("- CARTA 2 -\n\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: \
%d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\n\n--------------------------------------\n\n", estado_02, codigo_02,\
 cidade_02, populacao_02, area_02, pib_02, pontos_turisticos_02, densidade_02, pib_per_capita_02);

    
    return 0;
}
