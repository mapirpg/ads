#include <stdio.h>

int main() {
    // Dados um país A com 50.000.000 de habitantes e crescimento populacional de 3% ao ano e um país B com 100.000.000 de habitantes e crescimento populacional de 2% ao ano, escreva um algoritmo para calcular em quantos anos o país A se tornará mais populoso que o país B.

    int populacaoA = 50000000, populacaoB = 100000000, anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * 0.03;
        populacaoB += populacaoB * 0.02;
        anos++;
    }

    printf("O país A será mais populoso que o país B em %d anos.\n", anos);

    return 0;
}