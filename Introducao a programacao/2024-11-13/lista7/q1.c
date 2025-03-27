#include <stdio.h>

int main() {
    // Faça um algoritmo que leia vários números até que o usuário digite um valor negativo. Ao final, o algoritmo deve imprimir a quantidade de números pares e a quantidade de números ímpares lidos.


    int num, pares = 0, impares = 0;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    } while (num >= 0);


    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}