#include <stdio.h>

int main() {
    // Faça um algoritmo que leia um valor x e desenhe um triângulo retângulo de altura e base x, usando o caractere *.

    // Exemplo:

    // Entrada: x = 5

    // Saída:

    // *

    // * *

    // * * *

    // * * * *

    // * * * * *

    int x = 0, i = 0, j = 0;

    do {
        printf("Digite um valor para x: ");
        scanf("%d", &x);

        if (x <= 0) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (x <= 0);

    for (i = 1; i <= x; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}