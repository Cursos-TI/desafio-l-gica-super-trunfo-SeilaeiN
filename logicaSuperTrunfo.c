// Desafio Cartas Super Trunfo

#include <stdio.h>

int main() {
    
    
    // Definindo os países
    
    char pais1_nome[] = "Brasil";
    int pais1_populacao = 211;  // População em milhões
    float pais1_area = 8516000.0;  // Área em km²
    float pais1_pib = 2000.0;  // PIB em trilhões
    int pais1_pontos_turistico = 30;
    
    char pais2_nome[] = "Argentina";
    int pais2_populacao = 44;  // População em milhões
    float pais2_area = 2780400.0;  // Área em km²
    float pais2_pib = 450.0;  // PIB em trilhões
    int pais2_pontos_turistico = 20;

    // Cálculo da densidade populacional
    float pais1_densidade = pais1_populacao * 1000000.0 / pais1_area;  // Densidade em habitantes por km²
    float pais2_densidade = pais2_populacao * 1000000.0 / pais2_area;  // Densidade em habitantes por km²

    int escolha;

    // Menu interativo
    
    printf("\n*************** INICIO DE JOGO - SUPER TRUNFO *********************\n");
    
    printf("\nEscolha um atributo para comparar:\n");
    printf("\n1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("\nDigite o número da sua escolha (1-5): ");
    scanf("%d", &escolha);

    // Comparando as escolhas
    if (escolha == 1) { // Comparando a População
        printf("\nComparando População:\n");
        printf("%s tem %d milhões e %s tem %d milhões.\n", pais1_nome, pais1_populacao, pais2_nome, pais2_populacao);
        if (pais1_populacao > pais2_populacao) {
            printf("%s venceu com a maior população.\n", pais1_nome);
        } else if (pais1_populacao < pais2_populacao) {
            printf("%s venceu com a maior população.\n", pais2_nome);
        } else {
            printf("Empate!\n");
        }
    } 
    else if (escolha == 2) { // Comparando a  Área
        printf("\nComparando Área:\n");
        printf("%s tem %.2f km² e %s tem %.2f km².\n", pais1_nome, pais1_area, pais2_nome, pais2_area);
        if (pais1_area > pais2_area) {
            printf("%s venceu com a maior área.\n", pais1_nome);
        } else if (pais1_area < pais2_area) {
            printf("%s venceu com a maior área.\n", pais2_nome);
        } else {
            printf("Empate!\n");
        }
    } 
    else if (escolha == 3) { // Comparando o PIB
        printf("\nComparando PIB:\n");
        printf("%s tem %.2f trilhões e %s tem %.2f trilhões.\n", pais1_nome, pais1_pib, pais2_nome, pais2_pib);
        if (pais1_pib > pais2_pib) {
            printf("%s venceu com o maior PIB.\n", pais1_nome);
        } else if (pais1_pib < pais2_pib) {
            printf("%s venceu com o maior PIB.\n", pais2_nome);
        } else {
            printf("Empate!\n");
        }
    } 
    else if (escolha == 4) { // Comparando a quantidade de Pontos Turísticos
        printf("\nComparando Pontos Turísticos:\n");
        printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos.\n", pais1_nome, pais1_pontos_turistico, pais2_nome, pais2_pontos_turistico);
        if (pais1_pontos_turistico > pais2_pontos_turistico) {
            printf("%s venceu com o maior número de pontos turísticos.\n", pais1_nome);
        } else if (pais1_pontos_turistico < pais2_pontos_turistico) {
            printf("%s venceu com o maior número de pontos turísticos.\n", pais2_nome);
        } else {
            printf("Empate!\n");
        }
    } 
    else if (escolha == 5) { // Comparando Densidade Demográfica
        printf("\nComparando Densidade Demográfica:\n");
        printf("%s tem %.2f habitantes por km² e %s tem %.2f habitantes por km².\n", pais1_nome, pais1_densidade, pais2_nome, pais2_densidade);
        if (pais1_densidade < pais2_densidade) { // A menor densidade vence
            printf("%s venceu com a menor densidade demográfica.\n", pais1_nome);
        } else if (pais1_densidade > pais2_densidade) {
            printf("%s venceu com a menor densidade demográfica.\n", pais2_nome);
        } else {
            printf("Empate!\n");
        }
    } 
    else {
        printf("Opção inválida! Escolha entre 1 e 5.\n");
    }
    printf("\n******************FIM DE JOGO ***********************");
    
    return 0;
}
