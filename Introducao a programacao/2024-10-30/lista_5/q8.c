#include <stdio.h>

int main() {
    // Faça um algoritmo para ler três números informados pelo usuário e imprimi-los em ordem crescente.

    float num1, num2, num3, maior, meio, menor;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3) {
        maior = num1;
        if (num2 > num3) {
            meio = num2;
            menor = num3;
        } else {
            meio = num3;
            menor = num2;
        }
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
        if (num1 > num3) {
            meio = num1;
            menor = num3;
        } else {
            meio = num3;
            menor = num1;
        }
    } else {
        maior = num3;
        if (num1 > num2) {
            meio = num1;
            menor = num2;
        } else {
            meio = num2;
            menor = num1;
        }
    }

    printf("Os números em ordem crescente são: %.2f, %.2f, %.2f\n", menor, meio, maior);

    return 0;
}
