#include <stdio.h>

int main() {
    // Faça um algoritmo que leia dois números inteiros positivos A e B e mostre o quociente e o resto da divisão de A por B, utilizando apenas as operações de adição e subtração.

    int a = 0, b = 0, quociente = 0, resto = 0;

    do {
        printf("Digite o valor de A: ");
        scanf("%d", &a);

        if (a <= 0) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (a <= 0);

    do {
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        if (b <= 0) {
            printf("Valor inválido. Digite novamente.\n");
        }
    } while (b <= 0);

    while (a >= b) {
        a -= b;
        quociente++;
    }

    resto = a;

    printf("O quociente da divisão de A por B é %d e o resto é %d.\n", quociente, resto);

    return 0;
}