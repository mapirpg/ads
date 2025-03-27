#include<math.h>
#include<stdio.h>


int main() {
    // Uma certa substância se decompõe segundo a lei:
    // Q(t) = 2048 * 2^(-0.5 * t)
    // t indica o tempo em minutos e Q(t) indica a quantidade da substância, em gramas, no instante t.
    // Crie um algoritmo que leia um valor t e determine a massa dessa substância após t minutos.

    int t, x = 2, q = 2048;
    float quantidade, y = -0.5;

    printf("Digite o valor de 't' em minutos: ");
    scanf("%i", &t);

    quantidade = q * pow(x, y * t);



    printf("A quantidade da substância após %i minutos é: %f gramas\n", t, quantidade);

    return 0;
}