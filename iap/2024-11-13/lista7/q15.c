#include <stdio.h>

int main() {
    // Faça um algoritmo que leia a altura e a base de um retângulo e desenhe esse retângulo usando o caractere *.

    // Exemplo:

    // Entrada: base = 5 e altura = 3

    // Saída:

    // * * * * *

    // * * * * *

    // * * * * *

    int base = 0, altura = 0, i = 0, j = 0;

    do {
        printf("Digite um valor para a base: ");
        scanf("%d", &base);

        if (base <= 0) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (base <= 0);

    do {
        printf("Digite um valor para a altura: ");
        scanf("%d", &altura);

        if (altura <= 0) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (altura <= 0);

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= base; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}