#include <stdio.h>

int main() {
    // Faça um algoritmo que calcule o produto de dois números inteiros usando somas sucessivas. Não pode usar o operador de multiplicação *.
    // Exemplo: 6*2 = 2 + 2 + 2 + 2 + 2 + 2

    int a, b, produto = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        produto += a;
    }

    printf("O produto de %d e %d é %d", a, b, produto);

    return 0;
}