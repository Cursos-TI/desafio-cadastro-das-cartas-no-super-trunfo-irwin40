#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração das variavéis da Carta 1 (_01) e Carta 2 (_02).

    char estado_01, estado_02;
    char codigo_01[4], cidade_01[50], codigo_02[4], cidade_02[50];
    int populacao_01, pontos_turisticos_01, populacao_02, pontos_turisticos_02;
    float area_01, pib_01, area_02, pib_02; 

    
    // Cadastro das Carta 1

    printf("CADASTRO DA CARTA 1:\n\n");
    printf("Preencha as informações abaixo\n\n");
    printf("ESTADO (A a H): ");
    scanf(" %c", &estado_01);
    printf("CÓDIGO DA CIDADE (Ex. A01, B03): ");
    scanf("%s", codigo_01);
    printf("CIDADE (Ex. São Paulo): ");    
    scanf(" %[^\n]s", cidade_01); // Lê até a quebra de linha, incluindo espaços
    printf("POPULAÇÃO: ");
    scanf("%d", &populacao_01);
    printf("ÁREA (km²): ");
    scanf("%f", &area_01);	
    printf("PIB (R$): ");
    scanf("%f", &pib_01);
    printf("Nº DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos_turisticos_01);

    // Cadastro da Carta 2

    printf("\nCADASTRO DA CARTA 2:\n\n");
    printf("Preencha as informações abaixo\n\n");
    printf("ESTADO (A a H): ");
    scanf(" %c", &estado_02);
    printf("CÓDIGO DA CIDADE (Ex. A01, B03): ");
    scanf("%s", codigo_02);
    printf("CIDADE (Ex. São Paulo): ");    
    scanf(" %[^\n]s", cidade_02); // Lê até a quebra de linha, incluindo espaços
    printf("POPULAÇÃO: ");
    scanf("%d", &populacao_02);
    printf("ÁREA (km²): ");
    scanf("%f", &area_02);	
    printf("PIB (R$): ");
    scanf("%f", &pib_02);
    printf("Nº DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos_turisticos_02);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
