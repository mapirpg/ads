#include <stdio.h>

int main() {
    // Em uma eleição para presidente existem 3 candidatos. Os votos são informados através dos códigos 1, 2, 3 para os respectivos candidatos; 4 para voto nulo; e 5 voto em branco.
    // Escreva um algoritmo que calcule:
    // a) Total de votos para cada candidato;
    // b) Total de votos nulos;
    // c) Total de votos em branco;
    // d) Candidato Vencedor ou se houve empate;
    // e) Percentual de votos brancos e nulos sobre o total.
    // Como critério de parada, tem-se o código de votação 0.

    int voto, total1 = 0, total2 = 0, total3 = 0, totalNulo = 0, totalBranco = 0, totalVotos = 0;
    float percNulo, percBranco;

    do {
        printf("Digite o voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                total1++;
                break;
            case 2:
                total2++;
                break;
            case 3:
                total3++;
                break;
            case 4:
                totalNulo++;
                break;
            case 5:
                totalBranco++;
                break;
            default:
                printf("Voto inválido\n");
                break;
        }

        totalVotos++;
    } while (voto != 0);

    percNulo = ((float)totalNulo / totalVotos) * 100;
    percBranco = ((float)totalBranco / totalVotos) * 100;

    printf("Total de votos para o candidato 1: %d\n", total1);
    printf("Total de votos para o candidato 2: %d\n", total2);
    printf("Total de votos para o candidato 3: %d\n", total3);
    printf("Total de votos nulos: %d\n", totalNulo);

    printf("Total de votos em branco: %d\n", totalBranco);

    if (total1 > total2 && total1 > total3) {
        printf("Candidato 1 venceu\n");
    } else if (total2 > total1 && total2 > total3) {
        printf("Candidato 2 venceu\n");
    } else if (total3 > total1 && total3 > total2) {
        printf("Candidato 3 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Percentual de votos nulos: %.2f%%\n", percNulo);
    printf("Percentual de votos em branco: %.2f%%\n", percBranco);

    return 0;
}