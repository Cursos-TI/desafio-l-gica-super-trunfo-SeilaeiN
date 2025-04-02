// Desafio Cartas Super Trunfo

#include <stdio.h>

int main() {
    // Definindo os países
    char pais1_nome[] = "Brasil";
    int pais1_populacao = 211;  // População em milhões
    float pais1_area = 8516000.0;  // Área em km²
    float pais1_pib = 2000.0;  // PIB em trilhões
    int pais1_pontos_turistico = 30;
    float pais1_densidade = pais1_populacao * 1000000.0 / pais1_area;  // Densidade em habitantes por km²

    char pais2_nome[] = "Argentina";
    int pais2_populacao = 44;  // População em milhões
    float pais2_area = 2780400.0;  // Área em km²
    float pais2_pib = 450.0;  // PIB em trilhões
    int pais2_pontos_turistico = 20;
    float pais2_densidade = pais2_populacao * 1000000.0 / pais2_area;  // Densidade em habitantes por km²

    int escolha1, escolha2;
    float soma_pais1 = 0, soma_pais2 = 0;

    // Menu de escolhas
    printf("\n*************** INICIO DE JOGO - SUPER TRUNFO *********************\n");

    // Escolha do primeiro atributo
    printf("\nEscolha um atributo para comparar (1-5):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("\nDigite o número da sua escolha: ");
    scanf("%d", &escolha1);

    // Escolha do segundo atributo
    printf("\nEscolha um segundo atributo para comparar (1-5):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("\nDigite o número da sua escolha: ");
    scanf("%d", &escolha2);

    // Verificando se os atributos são diferentes
    if (escolha1 == escolha2) {
        printf("Você não pode escolher o mesmo atributo duas vezes.\n");
        return 0;  // Finaliza o jogo
    }

    // Soma dos atributos
    soma_pais1 += (escolha1 == 1) ? pais1_populacao : 
                  (escolha1 == 2) ? pais1_area : 
                  (escolha1 == 3) ? pais1_pib : 
                  (escolha1 == 4) ? pais1_pontos_turistico : 
                  (escolha1 == 5) ? (1 / pais1_densidade) : pais1_densidade;

    soma_pais2 += (escolha1 == 1) ? pais2_populacao : 
                  (escolha1 == 2) ? pais2_area : 
                  (escolha1 == 3) ? pais2_pib : 
                  (escolha1 == 4) ? pais2_pontos_turistico : 
                  (escolha1 == 5) ? (1 / pais2_densidade) : pais2_densidade;

    soma_pais1 += (escolha2 == 1) ? pais1_populacao : 
                  (escolha2 == 2) ? pais1_area : 
                  (escolha2 == 3) ? pais1_pib : 
                  (escolha2 == 4) ? pais1_pontos_turistico : 
                  (escolha2 == 5) ? (1 / pais1_densidade) : pais1_densidade;

    soma_pais2 += (escolha2 == 1) ? pais2_populacao : 
                  (escolha2 == 2) ? pais2_area : 
                  (escolha2 == 3) ? pais2_pib : 
                  (escolha2 == 4) ? pais2_pontos_turistico : 
                  (escolha2 == 5) ? (1 / pais2_densidade) : pais2_densidade;

    // Exibindo a comparação e resultado final
    printf("\nSoma dos atributos:\n");
    printf("Total de atributos - %s: %.2f pontos!\n", pais1_nome, soma_pais1);
    printf("Total de atributos - %s: %.2f pontos!\n", pais2_nome, soma_pais2);

    if (soma_pais1 > soma_pais2) {
        printf("Nesta rodada %s venceu!\n", pais1_nome);
    } else if (soma_pais1 < soma_pais2) {
        printf("Nesta rodada %s venceu!\n", pais2_nome);
    } else {
        printf("Esta rodada terminou em empate!\n");
    }

    return 0;
}
