#include <stdio.h>

int main() {
    // Faça um algoritmo para ler dois números e dizer qual é o maior e qual é o menor ou se são iguais.

    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número");
    scanf("%f", &num2);

    if (num1 == num2) {
        printf("Os números são iguais");
    } else if (num1 > num2) {
        printf("O primeiro número é maior.");
    } else {
        printf("O segundo número é maior");
    }

    return 0;
}