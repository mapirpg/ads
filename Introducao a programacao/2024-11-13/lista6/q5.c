#include <stdio.h>

int main() {
    // Faça um algoritmo que leia 100 números inteiros e que apresente ao final o maior e o menor de todos.

    int numero;
    int maior;
    int menor;

    for (int x = 1; x <= 100; x++) {
        printf("Digite o nomero %d: ", x);
        scanf("%d", &numero);

        if (x == 1) {
            maior = numero;
            menor = numero;
        } else if (numero > maior) {
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        } 
    }

    printf("Maior e menor são respectivamente: %d %d ", maior, menor);

    return 0;
}