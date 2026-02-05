#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

int main() {

    // ==============================
    // Cartas já cadastradas
    // ==============================
    struct Carta carta1 = {"Brasil", 203000000, 8516000.0, 1.92, 25, 0};
    struct Carta carta2 = {"Japao", 125000000, 377975.0, 5.08, 30, 0};

    // Cálculo da densidade demográfica
    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    int opcao;

    // ==============================
    // MENU INTERATIVO
    // ==============================
    printf("====== SUPER TRUNFO ======\n");
    printf("Cartas: %s VS %s\n\n", carta1.nome, carta2.nome);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARACAO =====\n\n");

    switch(opcao) {

        case 1: // População
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("\nVencedor: %s\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("\nVencedor: %s\n", carta2.nome);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);

            if (carta1.area > carta2.area) {
                printf("\nVencedor: %s\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("\nVencedor: %s\n", carta2.nome);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f trilhoes\n", carta1.nome, carta1.pib);
            printf("%s: %.2f trilhoes\n", carta2.nome, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("\nVencedor: %s\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("\nVencedor: %s\n", carta2.nome);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.nome, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("\nVencedor: %s\n", carta1.nome);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("\nVencedor: %s\n", carta2.nome);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidadeDemografica);

            // Aqui usamos if-else aninhado para deixar a lógica mais clara
            if (carta1.densidadeDemografica != carta2.densidadeDemografica) {
                if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
                    printf("\nVencedor: %s (menor densidade vence)\n", carta1.nome);
                } else {
                    printf("\nVencedor: %s (menor densidade vence)\n", carta2.nome);
                }
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
    }

    return 0;
}
