#include <stdio.h>

int main() {
    // Faça um algoritmo que leia vários números e que exiba para cada um deles a tabuada de multiplicação. O código -1 finaliza a leitura.
    // DICA: aninhe duas estruturas de repetição

    int numero = 0, i = 0, j = 0;

    while (numero != -1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}