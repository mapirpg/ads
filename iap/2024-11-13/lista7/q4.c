#include <stdio.h>

int main() {
    // Faça um algoritmo que leia vários números e apresente ao final o maior e o menor de todos. O sistema termina de ler os números quando o usuário digitar 0.

    int numero, maior = 0, menor = 0;

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    } while (numero != 0);


    printf("Maior número: %d\n", maior);

    return 0;
}